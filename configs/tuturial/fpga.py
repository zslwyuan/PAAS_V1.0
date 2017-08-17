import optparse
import sys
import os

import m5
from m5.defines import buildEnv
from m5.objects import *
from m5.util import addToPath, fatal

addToPath('../')

from ruby import Ruby

from common import Options
from common import Simulation
from common import CacheConfig
from common import CpuConfig
from common import MemConfig
from common.Caches import *
from common.cpu2000 import *

# Check if KVM support has been enabled, we might need to do VM
# configuration if that's the case.

parser = optparse.OptionParser()
Options.addCommonOptions(parser)
Options.addSEOptions(parser)

if '--ruby' in sys.argv:
    Ruby.define_options(parser)

(options, args) = parser.parse_args()

if args:
    print "Error: script doesn't take any positional arguments"
    sys.exit(1)

multiprocesses = []
numThreads = 1

process1 = LiveProcess()
process1.pid = 8;
process1.cmd = ['tests/test-progs/hello/bin/x86/linux/algo-fpga']
#process1.cmd = ['tests/test-progs/hello/bin/x86/linux/hello']
process3 = LiveProcess()
process3.cmd = ['tests/test-progs/hello/bin/x86/linux/control_test']
#process3.cmd = ['tests/test-progs/hello/bin/x86/linux/hello']
process4 = LiveProcess()
process4.pid = 92;
process4.cmd = ['tests/test-progs/hello/bin/x86/linux/hello']

(CPUClass, test_mem_mode, FutureClass) = Simulation.setCPUClass(options)
CPUClass.numThreads = numThreads

options.num_cpus = 3
np = options.num_cpus
system = System(cpu = [TimingSimpleCPU(), TimingSimpleCPU(), TimingSimpleCPU()],
                mem_mode = 'timing',
                mem_ranges = [AddrRange('512MB')],
                cache_line_size = 64)

system.fpga = [FpgaCPU()]

# Create a top-level voltage domain
system.voltage_domain = VoltageDomain(voltage = options.sys_voltage)

# Create a source clock for the system and set the clock period
system.clk_domain = SrcClockDomain(clock =  options.sys_clock,
                                   voltage_domain = system.voltage_domain)

# Create a CPU voltage domain
system.cpu_voltage_domain = VoltageDomain()

# Create a separate clock domain for the CPUs
system.cpu_clk_domain = SrcClockDomain(clock = options.cpu_clock,
                                       voltage_domain =
                                       system.cpu_voltage_domain)

# All cpus belong to a common cpu_clk_domain, therefore running at a common
# frequency.
for cpu in system.cpu:
    cpu.clk_domain = system.cpu_clk_domain

system.cpu[0].workload = process1
system.cpu[0].createThreads()
system.cpu[1].workload = process3
system.cpu[1].createThreads()
system.cpu[2].workload = process4
system.cpu[2].createThreads()

system.piobus = SystemXBar()

if options.ruby:
    if options.cpu_type == "atomic" or options.cpu_type == "AtomicSimpleCPU":
        print >> sys.stderr, "Ruby does not work with atomic cpu!!"
        sys.exit(1)
    Ruby.create_system(options, False, system, system.piobus)
    assert(options.num_cpus + options.num_fpgas == len(system.ruby._cpu_ports))

    system.ruby.clk_domain = SrcClockDomain(clock = options.ruby_clock,
                                        voltage_domain = system.voltage_domain)
    for i in xrange(np):
        ruby_port = system.ruby._cpu_ports[i]

        # Create the interrupt controller and connect its ports to Ruby
        # Note that the interrupt controller is always present but only
        # in x86 does it have message ports that need to be connected
        system.cpu[i].createInterruptController()

        # Connect the cpu's cache ports to Ruby
        system.cpu[i].icache_port = ruby_port.slave
        system.cpu[i].dcache_port = ruby_port.slave
        if buildEnv['TARGET_ISA'] == 'x86':
            system.cpu[i].interrupts[0].pio = ruby_port.master
            system.cpu[i].interrupts[0].int_master = ruby_port.slave
            system.cpu[i].interrupts[0].int_slave = ruby_port.master
            system.cpu[i].itb.walker.port = ruby_port.slave
            system.cpu[i].dtb.walker.port = ruby_port.slave


    for i in xrange(options.num_fpgas):
        ruby_port = system.ruby._cpu_ports[i]

        # Connect the cpu's cache ports to Ruby
        system.fpga[i].icache_port = ruby_port.slave
        system.fpga[i].dcache_port = ruby_port.slave

        system.fpga[i].control_port = system.piobus.master

else:
    fatal("This test is only for FPGA in Ruby. Please set --Ruby.\n")

root = Root(full_system = False, system = system)
m5.instantiate()
print "Beginning simulation!"
exit_event = m5.simulate()
print 'Exiting @ tick %i because %s' % (m5.curTick(), exit_event.getCause())
