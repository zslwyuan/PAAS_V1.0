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

parser = optparse.OptionParser()
Options.addCommonOptions(parser)
Options.addSEOptions(parser)

if '--ruby' in sys.argv:
    Ruby.define_options(parser)
else:
    fatal("This test is only for FPGA in Ruby. Please set --ruby.\n")

(options, args) = parser.parse_args()

if args:
    print "Error: script doesn't take any positional arguments"
    sys.exit(1)

numThreads = 1
multi_process = []
for i in xrange(7):
    process = LiveProcess()
    process.pid = (i+1)*100;
    process.cmd = ['tests/test-progs/hello/bin/x86/linux/control_test']
    multi_process.append(process)

for i in xrange(7):
    process = LiveProcess()
    process.pid = (i+1)*100;
    process.cmd = ['tests/test-progs/hello/bin/x86/linux/control_test1']
    multi_process.append(process)

(CPUClass, test_mem_mode, FutureClass) = Simulation.setCPUClass(options)
CPUClass.numThreads = numThreads

np = options.num_cpus
system = System(cpu = [TimingSimpleCPU() for i in xrange(options.num_cpus)],
                mem_mode = 'timing',
                mem_ranges = [AddrRange('512MB')],
                cache_line_size = 64)

system.fpga = [FpgaCPU() for i in xrange(options.num_fpgas)]
system.voltage_domain = VoltageDomain(voltage = options.sys_voltage)
system.clk_domain = SrcClockDomain(clock =  options.sys_clock,
                             voltage_domain = system.voltage_domain)
system.cpu_voltage_domain = VoltageDomain()
system.cpu_clk_domain = SrcClockDomain(clock = options.cpu_clock,
                            voltage_domain =  system.cpu_voltage_domain)

for cpu in system.cpu:
    cpu.clk_domain = system.cpu_clk_domain
for i in xrange(options.num_fpgas)
    system.fpga[i].clk_domain = SrcClockDomain(clock = '300MHz')
    system.fpga[i].clk_domain.voltage_domain = VoltageDomain()
    system.fpga[i].size_control_fpga = 20*8
    if (i>0):
        system.fpga[i].fpga_bus_addr = system.fpga[i-1].fpga_bus_addr + 30*8

for i in xrange(options.num_cpus):
    system.cpu[i].workload = multi_process[i]
    system.cpu[i].createThreads()

system.piobus = SystemXBar()

if options.ruby:
    if options.cpu_type == "atomic" or options.cpu_type == "AtomicSimpleCPU":
        print >> sys.stderr, "Ruby does not work with atomic cpu!!"
        sys.exit(1)
    Ruby.create_system(options, False, system, system.piobus)

    system.ruby.clk_domain = SrcClockDomain(clock = options.ruby_clock,
                                        voltage_domain = system.voltage_domain)
    for i in xrange(np):
        ruby_port = system.ruby._cpu_ports[i]

        system.cpu[i].createInterruptController()

        system.cpu[i].icache_port = ruby_port.slave
        system.cpu[i].dcache_port = ruby_port.slave
        system.cpu[i].interrupts[0].pio = ruby_port.master
        system.cpu[i].interrupts[0].int_master = ruby_port.slave
        system.cpu[i].interrupts[0].int_slave = ruby_port.master
        system.cpu[i].itb.walker.port = ruby_port.slave
        system.cpu[i].dtb.walker.port = ruby_port.slave

    for i in xrange(options.num_fpgas):
        ruby_port = system.ruby._cpu_ports[i+np]

        system.fpga[i].icache_port = ruby_port.slave
        system.fpga[i].dcache_port = ruby_port.slave
        system.fpga[i].itb.walker.port = ruby_port.slave
        system.fpga[i].dtb.walker.port = ruby_port.slave
        system.fpga[i].control_port = system.piobus.master

root = Root(full_system = False, system = system)
m5.instantiate()
print "Beginning simulation!"
exit_event = m5.simulate()
print 'Exiting @ tick %i because %s' % (m5.curTick(), exit_event.getCause())
