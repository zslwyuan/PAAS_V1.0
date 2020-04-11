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
    virtual void processEvent();
  public:
    void scheduleEvent();
    void insertProcess();
    // TODO More scheduling algorithms
    void shortestJob();
    void setCPU(FpgaCPU *_cpu);

    EventWrapper<Scheduler, &Scheduler::processEvent> schedulerEvent;

    /// Latency between times we fire the event.
    Tick latency;

    /// Number of times to fire before we stop firing
    int timesLeft;  

    Scheduler(SchedulerParams *p);

    void startup();
};

#endif // __SCHEDULER_FPGA_SCHEDULER_OBJECT_HH__
