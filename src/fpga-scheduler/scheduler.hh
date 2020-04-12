#ifndef __SCHEDULER_FPGA_SCHEDULER_OBJECT_HH__
#define __SCHEDULER_FPGA_SCHEDULER_OBJECT_HH__

#include "params/Scheduler.hh"
#include "sim/sim_object.hh"
#include "cpu/fpgacpu/fpgacpu.hh"

class Scheduler : public SimObject
{
  private:
    FpgaCPU *cpu;
    // Array to queue the TaskHashes which requests the FPGA
    std::list< std::pair<uint64_t, uint64_t> > TaskHashes;
    void processEvent();
  public:
    void scheduleEvent();
    uint64_t popProcess();
    void insertProcess(uint64_t, uint64_t);
    // TODO More scheduling algorithms
    void shortestJobFirst();
    void setCPU(FpgaCPU *_cpu);
    bool is_TaskHashesEmpty();
    EventWrapper<Scheduler, &Scheduler::processEvent> schedulerEvent;
    // inProcTime+sorting+outProcTime
    Tick latency;
    Scheduler(SchedulerParams *p);
    void startup();
};

#endif // __SCHEDULER_FPGA_SCHEDULER_OBJECT_HH__