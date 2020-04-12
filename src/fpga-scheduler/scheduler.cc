#include "debug/Scheduler.hh"
#include "fpga-scheduler/scheduler.hh"

Scheduler::Scheduler(SchedulerParams *params) :
    SimObject(params), schedulerEvent(*this), latency(params->time_to_process)
{
    DPRINTF(Scheduler, "Created the Scheduler object\n");
}

void
Scheduler::startup()
{
    DPRINTF(Scheduler, "Starting up the Scheduler object");
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
    for (auto it:TaskHashes){
        DPRINTF(Scheduler, "\n InsertedHash=%d    InsertedSize=%lu \n",
        it.first, it.second);
    }
}

uint64_t Scheduler::popProcess()
{
    this->shortestJobFirst();
    DPRINTF(Scheduler, "\n isTaskHashesEmpty=%d    currentFront=%lu \n", 
    TaskHashes.empty(), TaskHashes.front().first);
    uint64_t hash = TaskHashes.front().first;
    return hash;
}

void
Scheduler::scheduleEvent()
{
    TaskHashes.pop_front();
    cpu->schedule(schedulerEvent, cpu->clockEdge(Cycles(latency)));
}

bool
Scheduler::is_TaskHashesEmpty()
{
    return TaskHashes.empty();
}

void
Scheduler::processEvent()
{
    cpu->activateContext(0);
}

Scheduler*
SchedulerParams::create()
{
    return new Scheduler(this);
}
