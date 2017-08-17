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

(options, args) = parser.parse_args()

numThreads = 1

process1 = LiveProcess()
process1.cmd = ['tests/test-progs/hello/bin/x86/linux/algo-fpga']
process3 = LiveProcess()
process3.cmd = ['tests/test-progs/hello/bin/x86/linux/control_test']

(CPUClass, test_mem_mode, FutureClass) = Simulation.setCPUClass(options)
CPUClass.numThreads = numThreads

np = options.num_cpus
system = System(cpu = [TimingSimpleCPU(), TimingSimpleCPU()],
                mem_mode = 'timing',
                mem_ranges = [AddrRange('512MB')],
                cache_line_size = 64,membus = SystemXBar())

system.voltage_domain = VoltageDomain(voltage = options.sys_voltage)
system.clk_domain = SrcClockDomain(clock =  options.sys_clock, 
                             voltage_domain = system.voltage_domain)
system.cpu_voltage_domain = VoltageDomain()
system.cpu_clk_domain = SrcClockDomain(clock = options.cpu_clock,
                            voltage_domain =  system.cpu_voltage_domain)

for cpu in system.cpu:
    cpu.clk_domain = system.cpu_clk_domain

system.fpga = FpgaCPU()
system.fpga.clk_domain = SrcClockDomain(clock = options.fpga_clock)
system.fpga.clk_domain.voltage_domain = VoltageDomain()

system.cpu[0].workload = process1
system.cpu[0].createThreads()
system.cpu[1].workload = process3
system.cpu[1].createThreads()



system.cpu[0].icache_port = system.membus.slave
system.cpu[0].dcache_port = system.membus.slave
system.cpu[1].icache_port = system.membus.slave
system.cpu[1].dcache_port = system.membus.slave

system.cpu[0].createInterruptController()
system.cpu[0].interrupts[0].pio = system.membus.master
system.cpu[0].interrupts[0].int_master = system.membus.slave
system.cpu[0].interrupts[0].int_slave = system.membus.master
system.cpu[1].createInterruptController()
system.cpu[1].interrupts[0].pio = system.membus.master
system.cpu[1].interrupts[0].int_master = system.membus.slave
system.cpu[1].interrupts[0].int_slave = system.membus.master



system.fpga.control_port = system.membus.master
system.fpga.icache_port = system.membus.slave
system.fpga.dcache_port = system.membus.slave

system.system_port = system.membus.slave


system.mem_ctrl = DDR3_1600_x64()
system.mem_ctrl.range = system.mem_ranges[0]
system.mem_ctrl.port = system.membus.master

process1 = LiveProcess()
process1.pid = 8;
process1.cmd = ['tests/test-progs/hello/bin/x86/algo-fpga']
system.cpu[0].workload = process1
system.cpu[0].createThreads()
process3 = LiveProcess()
process3.cmd = ['tests/test-progs/hello/bin/x86/control_test']
system.cpu[1].workload = process3
system.cpu[1].createThreads()

root = Root(full_system = False, system = system)
m5.instantiate()
print "Beginning simulation!"
exit_event = m5.simulate()
print 'Exiting @ tick %i because %s' % (m5.curTick(), exit_event.getCause())

