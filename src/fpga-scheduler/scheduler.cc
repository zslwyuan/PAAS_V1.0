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
Scheduler::processEvent()
{
    timesLeft--;
    DPRINTF(Scheduler, "Scheduler world! Processing the event! %d left\n", timesLeft);

    if (timesLeft <= 0) {
        DPRINTF(Scheduler, "Done firing!\n");
    } else {
        cpu->schedule(event, cpu->clockEdge());
    }
}

void
Scheduler::scheduleEvent()
{
    cpu->schedule(event, cpu->clockEdge());
}

Scheduler*
SchedulerParams::create()
{
    return new Scheduler(this);
}
