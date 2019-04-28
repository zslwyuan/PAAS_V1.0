This is Processor Accelerator Architecture Simulator (PAAS) for heterogeneous computing system, 
which has been presented in 2017 27th International Conference on Field Programmable Logic and Applications (FPL).
**The related paper can be checked on IEEE Xplore: https://ieeexplore.ieee.org/document/8056775/.**

[For the detailed **MANUAL**, please click.](https://github.com/zslwyuan/PAAS_V1.0/blob/master/User-Manual-PAAS.pdf)
If you still have some other problems, please do not hesitate to contact us: tliang@connect.ust.hk

PAAS integrates gem5 and Verilator and further develops the infrastructure of the two simulators to provide system designers 
with unique features for system simulation and exploration:

    a) Co-simulation of hardware accelerators (described in Verilog), CPUs and memory system
    b) Shared virtual address space between accelerators and CPUs
    c) Runtime control of accelerators
    d) Capabilities of accelerators for exploiting both fine-grained and coarse-grained memory access
    e) Support of flexible architecture (eg. ACP (accelerator coherency port) and CAPI (Coherent Accelerator Processor Interface))
    f) Parallized simulation and reconfigurability of FPGA-based accelerator


![image](https://github.com/zslwyuan/PAAS_V1.0/blob/master/C-HDL_Architecture_Interaction.gif)


![image](https://github.com/zslwyuan/PAAS_V1.0/blob/master/One_of_Architecure_Examples.gif)


If you have questions or ask for a manual, please send mail to tliang@connect.ust.hk

Enjoy using PAAS and please share your modifications and extensions.

Compared to gem5, there are things of original gem5 have been modified, so please note them:

'AllMemory'     in     params.py 
'translate'     in     tlb.cc
fpga part       in     the directories: ./src/mem, ./src/arch, ./src/cpu

Some examples of designs can be found in ./configs and hope them will help you undenstand the basic description of archtecture.

