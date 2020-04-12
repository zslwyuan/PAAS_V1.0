from m5.params import *
from m5.SimObject import SimObject

class FPGAScheduler(SimObject):
    type = 'Scheduler'
    cxx_header = "fpga-scheduler/fpga_scheduler.hh"

    time_to_process = Param.Latency("0us", "inProcTime+sorting+outProcTime")