#include "debug/Accel.hh"
#include "learning_gem5/hello_object.hh"

HelloObject::HelloObject(HelloObjectParams *params) :
    SimObject(params), event(*this), latency(params->time_to_process), timesLeft(10)
{
    DPRINTF(Accel, "Created the hello object\n");
}

void
HelloObject::startup()
{
    DPRINTF(Accel, "Starting up the hello object");
    // schedule(event, curTick() + latency);
}

void
HelloObject::processEvent()
{
    timesLeft--;
    DPRINTF(Accel, "Hello world! Processing the event! %d left\n", timesLeft);

    if (timesLeft <= 0) {
        DPRINTF(Accel, "Done firing!\n");
    } else {
        schedule(event, curTick() + latency);
    }
}

void
HelloObject::scheduleEvent()
{
    schedule(event, curTick());
}

HelloObject*
HelloObjectParams::create()
{
    return new HelloObject(this);
}
