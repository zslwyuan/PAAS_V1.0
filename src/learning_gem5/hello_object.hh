#ifndef __LEARNING_GEM5_HELLO_OBJECT_HH__
#define __LEARNING_GEM5_HELLO_OBJECT_HH__

#include "params/HelloObject.hh"
#include "sim/sim_object.hh"

class HelloObject : public SimObject
{
  private:
    void processEvent();
    void scheduleEvent();

    EventWrapper<HelloObject, &HelloObject::processEvent> event;

    /// Latency between times we fire the event.
    Tick latency;

    /// Number of times to fire before we stop firing
    int timesLeft;

  public:
    HelloObject(HelloObjectParams *p);

    void startup();
};

#endif // __LEARNING_GEM5_HELLO_OBJECT_HH__