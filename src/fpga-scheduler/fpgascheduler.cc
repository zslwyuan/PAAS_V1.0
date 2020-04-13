#include "debug/FPGAScheduler.hh"
#include "fpga-scheduler/fpgascheduler.hh"

FPGAScheduler::FPGAScheduler(FPGASchedulerParams *params) :
    SimObject(params), latency(params->time_to_process)
{
    DPRINTF(FPGAScheduler, "Created the FPGAScheduler object\n");
}

void
FPGAScheduler::startup()
{
    DPRINTF(FPGAScheduler, "Starting up the FPGAScheduler object");
}

void
FPGAScheduler::setCPU(FpgaCPU *_cpu){
  this->cpu = _cpu;
}

void
FPGAScheduler::shortestJobFirst()
{ 

  TaskHashes.sort([](pair<uint64_t,uint64_t> const& a, pair<uint64_t,uint64_t> const& b) {
      return a.second < b.second;
  });

}

void
FPGAScheduler::insertProcess(uint64_t val, uint64_t size)
{
    TaskHashes.push_back(make_pair(val, size));
    for (auto it:TaskHashes){
        DPRINTF(FPGAScheduler, "\n InsertedHash=%lu    InsertedSize=%lu \n",
        it.first, it.second);
    }
}

uint64_t FPGAScheduler::popProcess()
{
    this->shortestJobFirst();
    DPRINTF(FPGAScheduler, "\n isTaskHashesEmpty=%d    currentFront=%lu \n", 
    TaskHashes.empty(), TaskHashes.front().first);
    uint64_t hash = TaskHashes.front().first;
    return hash;
}

void
FPGAScheduler::deleteProcess()
{
    TaskHashes.pop_front();
    DPRINTF(FPGAScheduler, "Scheduling the FPGAScheduler event\n");
}

bool
FPGAScheduler::is_TaskHashesEmpty()
{
    return TaskHashes.empty();
}

Tick 
FPGAScheduler::getLatency()
{
    return this->latency;
}

FPGAScheduler*
FPGASchedulerParams::create()
{
    return new FPGAScheduler(this);
}
