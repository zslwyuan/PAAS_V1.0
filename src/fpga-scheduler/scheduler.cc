#include "debug/Scheduler.hh"
#include "fpga-scheduler/scheduler.hh"

Scheduler::Scheduler(SchedulerParams *params) :
    SimObject(params), schedulerEvent(*this), latency(params->time_to_process), timesLeft(10)
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
Scheduler::shortestJobFirst()
{ 

  TaskHashes.sort([](pair<uint64_t,uint64_t> const& a, pair<uint64_t,uint64_t> const& b) {
      return a.second < b.second;
  });

}

void
Scheduler::insertProcess(uint64_t val, uint64_t size)
{
    TaskHashes.push_back(make_pair(val, size));
}

uint64_t Scheduler::popProcess()
{
    uint64_t hash = TaskHashes.front().first;
    TaskHashes.pop_front();
    return hash;
}

void
Scheduler::scheduleEvent()
{
    cpu->schedule(schedulerEvent, cpu->clockEdge());
}

bool
Scheduler::is_TaskHashesEmpty()
{
    return TaskHashes.empty();
}

void
Scheduler::processEvent()
{
    this->shortestJobFirst();
}

Scheduler*
SchedulerParams::create()
{
    return new Scheduler(this);
}
