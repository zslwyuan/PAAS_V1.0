from m5.params import *
from m5.SimObject import SimObject

class HelloObject(SimObject):
    type = 'HelloObject'
    cxx_header = "learning_gem5/hello_object.hh"

    time_to_process = Param.Latency("Time to process one process (inProcTime+sorting+outProcTime)")