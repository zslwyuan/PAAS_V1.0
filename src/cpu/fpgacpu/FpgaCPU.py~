# Copyright (c) 2007 The Regents of The University of Michigan
# All rights reserved.
#
# Redistribution and use in source and binary forms, with or without
# modification, are permitted provided that the following conditions are
# met: redistributions of source code must retain the above copyright
# notice, this list of conditions and the following disclaimer;
# redistributions in binary form must reproduce the above copyright
# notice, this list of conditions and the following disclaimer in the
# documentation and/or other materials provided with the distribution;
# neither the name of the copyright holders nor the names of its
# contributors may be used to endorse or promote products derived from
# this software without specific prior written permission.
#
# THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
# "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
# LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
# A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
# OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
# SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
# LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
# DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
# THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
# (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
# OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
#
# Authors: Nathan Binkert

from m5.params import *
from BaseCPU import *
from BaseSimpleCPU import BaseSimpleCPU
from m5.proxy import *
from Device import BasicPioDevice


class FpgaCPU(BaseSimpleCPU):
    type = 'FpgaCPU'
    cxx_header = "cpu/fpgacpu/fpgacpu.hh"

    control_port = SlavePort("Control Port")
    dma = MasterPort("DMA Port")
    ModuleName = Param.String("FpgaModule")
    reg_lat = Param.Latency('42ns',"latency of setting FPGA register")
    fpga = True
    noL1 = Param.Unsigned(0,"if need, make requests of FPGA UNCACHEABLE")
    show_address = Param.Unsigned(0,"print the physical address that FPGA accesses")
    dma_available = Param.Unsigned(0,"use DMA port or not")
    dma_size = Param.Unsigned(0,"the amount of data of DMA")
    ACP = Param.Unsigned(0,"ACP for FPGA")
    Reconfigurable = Param.Unsigned(0,"Reconfigurability of FPGA")
    Reconfiguration_time = Param.Latency("0ns","Reconfiguration time of FPGA")
    Protocol_shakehand = Param.Unsigned(0,"whether FPGA generate a finish signal when it receive the signal from gem5 system")

    def __init__(self):
        BaseSimpleCPU.__init__(self)
        self._uncached_slave_ports += ["control_port"]



    @classmethod
    def memory_mode(cls):
        return 'timing'

    @classmethod
    def support_take_over(cls):
        return True


