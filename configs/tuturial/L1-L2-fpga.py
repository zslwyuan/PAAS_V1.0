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

# Set the usage message to display
(options, args) = parser.parse_args()
# Finalize the arguments and grab the opts so we can pass it on to our objects

# get ISA for the default binary to run. This is mostly for simple testing
# Default to running 'hello', use the compiled ISA to find the binary
binary = 'tests/test-progs/hello/bin/x86/linux/hello'

# Check if there was a binary passed in via the command line and error if
# there are too many arguments

# create the system we are going to simulate
system = System()

# Set the clock fequency of the system (and all of its children)
system.clk_domain = SrcClockDomain()
system.clk_domain.clock = '2GHz'
system.clk_domain.voltage_domain = VoltageDomain()

# Set up the system
system.mem_mode = 'timing'               # Use timing accesses
system.mem_ranges = [AddrRange('512MB')] # Create an address range

# Create a simple CPU
system.cpu = DerivO3CPU()
system.fpga = FpgaCPU()
system.fpga.clk_domain = SrcClockDomain(clock = options.fpga_clock)
system.fpga.clk_domain.voltage_domain = VoltageDomain()

# Create an L1 instruction and data cache
system.cpu.icache = L1Cache()
system.cpu.dcache = L1Cache()
# Connect the instruction and data caches to the CPU
system.cpu.icache.cpu_side = system.cpu.icache_port
system.cpu.dcache.cpu_side = system.cpu.dcache_port

# Create a memory bus, a coherent crossbar, in this case
system.l2bus = L2XBar()

# Hook the CPU ports up to the l2bus
system.cpu.icache.mem_side = system.l2bus.slave
system.cpu.dcache.mem_side = system.l2bus.slave

# Create an L2 cache and connect it to the l2bus
system.l2cache = L2Cache()
system.l2cache.cpu_side = system.l2bus.master

# Create a memory bus
system.membus = SystemXBar()

# Connect the L2 cache to the membus
system.l2cache.mem_side = system.membus.slave

# create the interrupt controller for the CPU
system.cpu.createInterruptController()

# For x86 only, make sure the interrupts are connected to the memory
# Note: these are directly connected to the memory bus and are not cached
if m5.defines.buildEnv['TARGET_ISA'] == "x86":
    system.cpu.interrupts[0].pio = system.membus.master
    system.cpu.interrupts[0].int_master = system.membus.slave
    system.cpu.interrupts[0].int_slave = system.membus.master

# Connect the system up to the membus
system.system_port = system.membus.slave

# Create a DDR3 memory controller
system.mem_ctrl = DDR3_1600_x64()
system.mem_ctrl.range = system.mem_ranges[0]
system.mem_ctrl.port = system.membus.master

# Create a process for a simple "Hello World" application
process = LiveProcess()
# Set the command
# cmd is a list which begins with the executable (like argv)
process.cmd = [binary]
# Set the cpu to use the process as its workload and create thread contexts
system.cpu.workload = process
system.cpu.createThreads()

# set up the root SimObject and start the simulation
root = Root(full_system = False, system = system)
# instantiate all of the objects we've created above
m5.instantiate()

print "Beginning simulation!"
exit_event = m5.simulate()
print 'Exiting @ tick %i because %s' % (m5.curTick(), exit_event.getCause())
