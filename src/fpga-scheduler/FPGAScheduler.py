from m5.params import *
from m5.SimObject import SimObject

class FPGAScheduler(SimObject):
    type = 'FPGAScheduler'
    cxx_header = "fpga-scheduler/fpgascheduler.hh"

    time_to_process = Param.Latency("0us", "inProcTime+sorting+outProcTime")