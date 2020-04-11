#ifndef __SCHEDULER_FPGA_SCHEDULER_OBJECT_HH__
#define __SCHEDULER_FPGA_SCHEDULER_OBJECT_HH__

#include "params/Scheduler.hh"
#include "sim/sim_object.hh"
#include "cpu/fpgacpu/fpgacpu.hh"

class Scheduler : public SimObject
{
  private:
    FpgaCPU *cpu;
    void processEvent();
  public:
    void scheduleEvent();
    void setCPU(FpgaCPU *_cpu){
      this->cpu = _cpu;
    }

    EventWrapper<Scheduler, &Scheduler::processEvent> event;

    /// Latency between times we fire the event.
    Tick latency;

    /// Number of times to fire before we stop firing
    int timesLeft;  

    Scheduler(SchedulerParams *p);

    void startup();
};

#endif // __SCHEDULER_FPGA_SCHEDULER_OBJECT_HH__
