import m5
from m5.objects import *
m5.util.addToPath('../configs/topologies')
m5.util.addToPath('../configs/common')

system = System()

system.clk_domain = SrcClockDomain()
system.clk_domain.clock = '2GHz'
system.clk_domain.voltage_domain = VoltageDomain()

system.mem_mode = 'timing'
system.mem_ranges = [AddrRange('512MB')]

system.cpu = [TimingSimpleCPU(), FpgaCPU(), TimingSimpleCPU()]
system.cpu[0].cpu_id = 0;
system.cpu[0].clk_domain = SrcClockDomain(clock = '3GHz')
system.cpu[0].clk_domain.voltage_domain = VoltageDomain()
system.membus = SystemXBar()

system.cpu[0].icache_port = system.membus.slave
system.cpu[0].dcache_port = system.membus.slave

system.cpu[0].createInterruptController()
system.cpu[0].interrupts.pio = system.membus.master
system.cpu[0].interrupts.int_master = system.membus.slave
system.cpu[0].interrupts.int_slave = system.membus.master

system.mem_ctrl = DDR3_1600_x64()
system.mem_ctrl.range = system.mem_ranges[0]
system.mem_ctrl.port = system.membus.master

process1 = LiveProcess()
process1.pid = 8;
process1.cmd = ['tests/test-progs/hello/bin/x86/linux/algo-fpga']
system.cpu[0].workload = process1
system.cpu[0].createThreads()
process2 = LiveProcess()
process2.pid = 9;
process2.cmd = ['tests/test-progs/hello/bin/x86/linux/hello']
system.cpu[1].workload = process2
system.cpu[1].createThreads()
process3 = LiveProcess()
process3.cmd = ['tests/test-progs/hello/bin/x86/linux/control_test']
system.cpu[2].workload = process3
system.cpu[2].createThreads()

root = Root(full_system = False, system = system)
m5.instantiate()
print "Beginning simulation!"
exit_event = m5.simulate()
print 'Exiting @ tick %i because %s' % (m5.curTick(), exit_event.getCause())

