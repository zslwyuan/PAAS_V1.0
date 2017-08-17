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

process1 = LiveProcess()
process1.cmd = ['tests/test-progs/hello/bin/x86/linux/control_test']
process2 = LiveProcess()
process2.cmd = ['tests/test-progs/hello/bin/x86/linux/control_test1']
process3 = LiveProcess()
process3.pid = 1300;
process3.cmd = ['tests/test-progs/hello/bin/x86/linux/control_test']
process5 = LiveProcess()
process5.pid = 1500;
process5.cmd = ['tests/test-progs/hello/bin/x86/linux/control_test1']
process6 = LiveProcess()
process6.pid = 1600;
process6.cmd = ['tests/test-progs/hello/bin/x86/linux/control_test']
process7 = LiveProcess()
process7.pid = 1700;
process7.cmd = ['tests/test-progs/hello/bin/x86/linux/control_test1']
process8 = LiveProcess()
process8.pid = 1800;
process8.cmd = ['tests/test-progs/hello/bin/x86/linux/control_test']
process11 = LiveProcess()
process11.cmd = ['tests/test-progs/hello/bin/x86/linux/control_test1']
process22 = LiveProcess()
process22.cmd = ['tests/test-progs/hello/bin/x86/linux/control_test']
process33 = LiveProcess()
process33.pid = 1300;
process33.cmd = ['tests/test-progs/hello/bin/x86/linux/control_test1']
process55 = LiveProcess()
process55.pid = 1533;
process55.cmd = ['tests/test-progs/hello/bin/x86/linux/control_test']
process66 = LiveProcess()
process66.pid = 1633;
process66.cmd = ['tests/test-progs/hello/bin/x86/linux/control_test1']
process77 = LiveProcess()
process77.pid = 1733;
process77.cmd = ['tests/test-progs/hello/bin/x86/linux/control_test']
process88 = LiveProcess()
process88.pid = 1833;
process88.cmd = ['tests/test-progs/hello/bin/x86/linux/control_test1']


(CPUClass, test_mem_mode, FutureClass) = Simulation.setCPUClass(options)
CPUClass.numThreads = numThreads

np = options.num_cpus
system = System(cpu = [TimingSimpleCPU(), TimingSimpleCPU(), TimingSimpleCPU(),TimingSimpleCPU(), TimingSimpleCPU(), TimingSimpleCPU(),
                       TimingSimpleCPU(), TimingSimpleCPU(), TimingSimpleCPU(),TimingSimpleCPU(), TimingSimpleCPU(), TimingSimpleCPU(),
                       TimingSimpleCPU(), TimingSimpleCPU()],
                mem_mode = 'timing',
                mem_ranges = [AddrRange('1024MB')],
                cache_line_size = 64)

system.fpga = [FpgaCPU(), FpgaCPU()]
system.voltage_domain = VoltageDomain(voltage = options.sys_voltage)
system.clk_domain = SrcClockDomain(clock =  options.sys_clock,
                             voltage_domain = system.voltage_domain)
system.cpu_voltage_domain = VoltageDomain()
system.cpu_clk_domain = SrcClockDomain(clock = options.cpu_clock,
                            voltage_domain =  system.cpu_voltage_domain)

for cpu in system.cpu:
    cpu.clk_domain = system.cpu_clk_domain
system.fpga[0].clk_domain = SrcClockDomain(clock = options.fpga_clock)
system.fpga[0].clk_domain.voltage_domain = VoltageDomain()
system.fpga[0].size_control_fpga = 20*8

system.fpga[1].clk_domain = SrcClockDomain(clock = options.fpga_clock)
system.fpga[1].clk_domain.voltage_domain = VoltageDomain()
system.fpga[1].fpga_bus_addr = 1073741824 + 30*8
system.fpga[1].size_control_fpga = 20*8

system.cpu[0].workload = process1
system.cpu[0].createThreads()
system.cpu[1].workload = process2
system.cpu[1].createThreads()
system.cpu[2].workload = process3
system.cpu[2].createThreads()
system.cpu[3].workload = process5
system.cpu[3].createThreads()
system.cpu[4].workload = process6
system.cpu[4].createThreads()
system.cpu[5].workload = process7
system.cpu[5].createThreads()
system.cpu[6].workload = process8
system.cpu[6].createThreads()
system.cpu[7].workload = process11
system.cpu[7].createThreads()
system.cpu[8].workload = process22
system.cpu[8].createThreads()
system.cpu[9].workload = process33
system.cpu[9].createThreads()
system.cpu[10].workload = process55
system.cpu[10].createThreads()
system.cpu[11].workload = process66
system.cpu[11].createThreads()
system.cpu[12].workload = process77
system.cpu[12].createThreads()
system.cpu[13].workload = process88
system.cpu[13].createThreads()

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
