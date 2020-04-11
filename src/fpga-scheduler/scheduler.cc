#include "debug/Scheduler.hh"
#include "fpga-scheduler/scheduler.hh"

Scheduler::Scheduler(SchedulerParams *params) :
    SimObject(params), event(*this), latency(params->time_to_process), timesLeft(10)
{
    DPRINTF(Scheduler, "Created the Scheduler object\n");
}

void
Scheduler::startup()
{
    DPRINTF(Scheduler, "Starting up the Scheduler object");
    // cpu->schedule(event, curTick() + latency);
}

void
Scheduler::setCPU(FpgaCPU *_cpu){
  this->cpu = _cpu;
}

void
Scheduler::shortestJob()
{ 

  this.TaskHashes.sort([](pair<uint64_t,uint64_t> const& a, pair<uint64_t,uint64_t> const& b) {
      return a.second < b.second;
  });

}

void
Scheduler::insertProcess()
{
    TaskHashes.push_back(make_pair(val, size));
}

void
Scheduler::scheduleEvent()
{
    cpu->schedule(this.schedulerEvent, cpu->clockEdge());
}

Scheduler*
SchedulerParams::create()
{
    return new Scheduler(this);
}
