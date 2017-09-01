/*
 * Copyright (c) 2012-2013 ARM Limited
 * All rights reserved
 *
 * The license below extends only to copyright in the software and shall
 * not be construed as granting a license to any other intellectual
 * property including but not limited to intellectual property relating
 * to a hardware implementation of the functionality of the software
 * licensed hereunder.  You may use the software subject to the license
 * terms below provided that you ensure that this notice is replicated
 * unmodified and in its entirety in all distributions of the software,
 * modified or unmodified, in source code or in binary form.
 *
 * Copyright (c) 2002-2005 The Regents of The University of Michigan
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met: redistributions of source code must retain the above copyright
 * notice, this list of conditions and the following disclaimer;
 * redistributions in binary form must reproduce the above copyright
 * notice, this list of conditions and the following disclaimer in the
 * documentation and/or other materials provided with the distribution;
 * neither the name of the copyright holders nor the names of its
 * contributors may be used to endorse or promote products derived from
 * this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * Authors: Steve Reinhardt
 */

#ifndef __CPU_FPGA_HH__
#define __CPU_FPGA_HH__
#include <deque>
#include "cpu/simple/base.hh"
#include "cpu/translation.hh"
#include "dev/dma_device.hh"
#include "params/FpgaCPU.hh"
#include "mem/mem_object.hh"
#include "base/types.hh"
#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<fcntl.h>
#include "cpu/simple/exec_context.hh"
#include <string>
#include <signal.h>
#define TEXT_SZ 100

using namespace std;

class FpgaCPU : public BaseSimpleCPU
{

  public:
	
	int noL1 = 0;

	pid_t fpid;
	
    bool isBusy;

    bool retryReq;

    bool retryResp;

	Tick latency;

	double bandwidth;

    uint32_t num_output_fpga;
    uint32_t num_input_fpga;
	uint32_t num_dma_control=5;
	uint64_t TaskHash;
    uint64_t ReadBase;
	uint64_t WriteBase;
	uint64_t ControlAddr;
    uint64_t inputArray[4096];
    uint64_t outputArray[4096];
    uint64_t inputArray_last[4096];
    uint64_t outputArray_last[4096];
    uint64_t CurrentThreadID;
    uint64_t MemoryRange;
    uint64_t MemorySize;
    uint64_t RunState;
	uint64_t Terminate;
	uint64_t OccupyFPGA;
	uint64_t ReturnValue;
	uint64_t configuration_finished;

    FpgaCPU(FpgaCPUParams * params);
    virtual ~FpgaCPU();

    virtual void init();

  private:

    class DeferredPacket
    {

      public:

        const Tick tick;
        const PacketPtr pkt;

        DeferredPacket(PacketPtr _pkt, Tick _tick) : tick(_tick), pkt(_pkt)
        { }
    };

    /*
     * If an access needs to be broken into fragments, currently at most two,
     * the the following two classes are used as the sender state of the
     * packets so the CPU can keep track of everything. In the main packet
     * sender state, there's an array with a spot for each fragment. If a
     * fragment has already been accepted by the CPU, aka isn't waiting for
     * a retry, it's pointer is NULL. After each fragment has successfully
     * been processed, the "outstanding" counter is decremented. Once the
     * count is zero, the entire larger access is complete.
     */
    class SplitMainSenderState : public Packet::SenderState
    {
      public:
        int outstanding;
        PacketPtr fragments[2];

        int
        getPendingFragment()
        {
            if (fragments[0]) {
                return 0;
            } else if (fragments[1]) {
                return 1;
            } else {
                return -1;
            }
        }
    };

    class SplitFragmentSenderState : public Packet::SenderState
    {
      public:
        SplitFragmentSenderState(PacketPtr _bigPkt, int _index) :
            bigPkt(_bigPkt), index(_index)
        {}
        PacketPtr bigPkt;
        int index;

        void
        clearFromParent()
        {
            SplitMainSenderState * main_send_state =
                dynamic_cast<SplitMainSenderState *>(bigPkt->senderState);
            main_send_state->fragments[index] = NULL;
        }
    };

    class FetchTranslation : public BaseTLB::Translation
    {
      protected:
        FpgaCPU *cpu;

      public:
        FetchTranslation(FpgaCPU *_cpu)
            : cpu(_cpu)
        {}

        void
        markDelayed()
        {
            assert(cpu->_status == BaseSimpleCPU::Running);
            cpu->_status = ITBWaitResponse;
        }

        void
        finish(const Fault &fault, RequestPtr req, ThreadContext *tc,
               BaseTLB::Mode mode)
        {
            cpu->sendFetch(fault, req, tc);
        }
    };
    FetchTranslation fetchTranslation;

	void threadSnoop(PacketPtr pkt, ThreadID sender);
    void sendData(RequestPtr req, uint8_t *data, uint64_t *res, bool read);
    void sendSplitData(RequestPtr req1, RequestPtr req2, RequestPtr req,
                       uint8_t *data, bool read);

    void translationFault(const Fault &fault);

    PacketPtr buildPacket(RequestPtr req, bool read);
    void buildSplitPacket(PacketPtr &pkt1, PacketPtr &pkt2,
            RequestPtr req1, RequestPtr req2, RequestPtr req,
            uint8_t *data, bool read);

    bool handleReadPacket(PacketPtr pkt);
    // This function always implicitly uses dcache_pkt.
    bool handleWritePacket();

    /**
     * A TimingCPUPort overrides the default behaviour of the
     * recvTiming and recvRetry and implements events for the
     * scheduling of handling of incoming packets in the following
     * cycle.
     */




    class FpgaCPUPort : public MasterPort
    {
      public:

        FpgaCPUPort(const std::string& _name, FpgaCPU* _cpu)
            : MasterPort(_name, _cpu), cpu(_cpu), retryRespEvent(this)
        { }

      protected:

        /**
         * Snooping a coherence request, do nothing.
         */
        virtual void recvTimingSnoopReq(PacketPtr pkt) {}

        FpgaCPU* cpu;
        struct TickEvent : public Event
        {
            PacketPtr pkt;
			WholeTranslationState *state;
            FpgaCPU *cpu;

            TickEvent(FpgaCPU *_cpu) : pkt(NULL), cpu(_cpu) {}
            const char *description() const { return "FPGA CPU tick"; }
            void schedule(PacketPtr _pkt, Tick t);
			void schedule(WholeTranslationState *_state, Tick t);
        };

        EventWrapper<MasterPort, &MasterPort::sendRetryResp> retryRespEvent;
    };

    class IcachePort : public FpgaCPUPort
    {
      public:

        IcachePort(FpgaCPU *_cpu)
            : FpgaCPUPort(_cpu->name() + ".icache_port", _cpu),
              tickEvent(_cpu)
        { }

      protected:

        virtual bool recvTimingResp(PacketPtr pkt);

        virtual void recvReqRetry();

        struct ITickEvent : public TickEvent
        {


            ITickEvent(FpgaCPU *_cpu)
                : TickEvent(_cpu) {}
            void process();
            const char *description() const { return "FPGA CPU icache tick"; }
        };

        ITickEvent tickEvent;

    };

    class DcachePort : public FpgaCPUPort
    {
      public:

        DcachePort(FpgaCPU *_cpu)
            : FpgaCPUPort(_cpu->name() + ".dcache_port", _cpu),
              tickEvent(_cpu),acpSendEvent(_cpu),acpRecvEvent(_cpu)
        {
           cacheBlockMask = ~(cpu->cacheLineSize() - 1);
        }

        Addr cacheBlockMask;
      protected:

        /** Snoop a coherence request, we need to check if this causes
         * a wakeup event on a cpu that is monitoring an address
         */
        virtual void recvTimingSnoopReq(PacketPtr pkt);
        virtual void recvFunctionalSnoop(PacketPtr pkt);

        static inline uint64_t getMem(PacketPtr pkt, unsigned dataSize, Trace::InstRecord *traceData);

        virtual bool recvTimingResp(PacketPtr pkt);

        virtual void recvReqRetry();

        virtual bool isSnooping() const {
            return true;
        }

        struct DTickEvent : public TickEvent
        {
            DTickEvent(FpgaCPU *_cpu)
                : TickEvent(_cpu) {}
            void process();
            const char *description() const { return "FPGA CPU dcache tick"; }
        };

        DTickEvent tickEvent;

      public:

        struct ACPSendEvent : public TickEvent
        {
            ACPSendEvent(FpgaCPU *_cpu)
                : TickEvent(_cpu) {}
            void process();
            const char *description() const { return "FPGA CPU dcache tick"; }
        };

        ACPSendEvent acpSendEvent;

        struct ACPRecvEvent : public TickEvent
        {
            ACPRecvEvent(FpgaCPU *_cpu)
                : TickEvent(_cpu) {}
            void process();
            const char *description() const { return "FPGA CPU dcache tick"; }
        };

        ACPRecvEvent acpRecvEvent;

    };


    class FpgaCPUControlPort : public SlavePort
    {
      public:

        FpgaCPUControlPort(FpgaCPU* _cpu,FpgaCPUParams *p)
            : SlavePort(_cpu->name() + ".control_port", _cpu), cpu(_cpu)
		{
				ControlAddr = p->fpga_bus_addr;
				size_control_fpga = p->size_control_fpga;
		}
		Addr ControlAddr;
		Addr size_control_fpga;

      protected:
        FpgaCPU* cpu;
		Tick recvAtomic(PacketPtr pkt);
		void recvFunctional(PacketPtr pkt);
		bool recvTimingReq(PacketPtr pkt);
		void recvRespRetry();
		AddrRangeList getAddrRanges() const;

    };

    void updateCycleCounts();

    BaseSlavePort& getSlavePort(const std::string& if_namet, PortID idx = InvalidPortID);

	std::vector<PacketPtr> pendingDelete;
    IcachePort icachePort;
    DcachePort dcachePort;
	FpgaCPUControlPort controlPort;
	DmaPort dmaPort;

    PacketPtr ifetch_pkt;
    PacketPtr dcache_pkt;
	PacketPtr control_pkt;

    Cycles previousCycle;

  protected:

     /** Return a reference to the data port. */
    virtual MasterPort &getDataPort() { return dcachePort; }

    /** Return a reference to the instruction port. */
    virtual MasterPort &getInstPort() { return icachePort; }

  public:
    BaseMasterPort &getMasterPort(const std::string &if_name, PortID idx);
	int cnt, InputChanged, OutputChanged, ReadReady, WriteReady, ReadEnable, WriteEnable;
	static const int //FPGA Output
		bit_In0 = 2, //For input data via bus, instead of memory
		bit_In1 = 3,
		bit_ReturnValue = 4,
		bit_ReadEnable = 5,
        bit_WriteEnable = 6,
        bit_FinishRead = 7,
        bit_FinishWrite = 8,
        bit_ReadAddr = 9,
		bit_Size_ReadData_Output = 10,
        bit_WriteAddr = 11,
        bit_Size_WriteData = 12,
        bit_WriteData = 13,
        bit_Done = 14;		
	static const int //FPGA Input
		bit_ReadReady = 5,
        bit_WriteReady = 6,
		bit_ReadData = 7,
		bit_ReadBase = 8,
		bit_WriteBase = 9,
		bit_Num_Read = 10,
		bit_Size_ReadData_Input = 11,
		bit_Run = 12;
	int edge_RENA, edge_WENA;

	void setFPGAReg(uint64_t regid, uint64_t val, PacketPtr pkt);
	uint64_t getFPGAReg(uint64_t regid);

    DrainState drain() override;
    void drainResume() override;

    void switchOut() override;
    void takeOverFrom(BaseCPU *oldCPU) override;

    void verifyMemoryMode() const override;

    void activateContext(ThreadID thread_num) override;
    void suspendContext(ThreadID thread_num) override;

    Fault readMem(Addr addr, uint8_t *data, unsigned size,
                  Request::Flags flags) override;

    Fault initiateMemRead(Addr addr, unsigned size,
                          Request::Flags flags) override;

    Fault writeMem(uint8_t *data, unsigned size,
                   Addr addr, Request::Flags flags, uint64_t *res) override;

    void fetch();
    void sendFetch(const Fault &fault, RequestPtr req, ThreadContext *tc);
    void completeIfetch(PacketPtr );
    void completeDataAccess(PacketPtr pkt);
    void advanceInst(const Fault &fault);

    /** This function is used by the page table walker to determine if it could
     * translate the a pending request or if the underlying request has been
     * squashed. This always returns false for the simple timing CPU as it never
     * executes any instructions speculatively.
     * @ return Is the current instruction squashed?
     */
    bool isSquashed() const { return false; }

    /**
     * Print state of address in memory system via PrintReq (for
     * debugging).
     */
    void printAddr(Addr a);

    /**
     * Finish a DTB translation.
     * @param state The DTB translation state.
     */
    void finishTranslation(WholeTranslationState *state);

  private:

    typedef EventWrapper<FpgaCPU, &FpgaCPU::fetch> FetchEvent;
    FetchEvent fetchEvent;

    void release();

    EventWrapper<FpgaCPU, &FpgaCPU::release> releaseEvent;

    void dequeue();

    EventWrapper<FpgaCPU, &FpgaCPU::dequeue> dequeueEvent;


    struct IprEvent : Event {
        Packet *pkt;
        FpgaCPU *cpu;
        IprEvent(Packet *_pkt, FpgaCPU *_cpu, Tick t);
        virtual void process();
        virtual const char *description() const;
    };

    /**
     * Check if a system is in a drained state.
     *
     * We need to drain if:
     * <ul>
     * <li>We are in the middle of a microcode sequence as some CPUs
     *     (e.g., HW accelerated CPUs) can't be started in the middle
     *     of a gem5 microcode sequence.
     *
     * <li>Stay at PC is true.
     *
     * <li>A fetch event is scheduled. Normally this would never be the
     *     case with microPC() == 0, but right after a context is
     *     activated it can happen.
     * </ul>
     */
    bool isDrained() {
        SimpleExecContext& t_info = *threadInfo[curThread];
        SimpleThread* thread = t_info.thread;

        return thread->microPC() == 0 && !t_info.stayAtPC &&
               !fetchEvent.scheduled();
    }

    /**
     * Try to complete a drain request.
     *
     * @returns true if the CPU is drained, false otherwise.
     */
    bool tryCompleteDrain();

    /**
     * Drain manager to use when signaling drain completion
     *
     * This pointer is non-NULL when draining and NULL otherwise.
     */
    DrainManager *drainManager;
  protected:
    std::deque<DeferredPacket> packetQueue;

    Tick recvAtomic(PacketPtr pkt);

    void recvFunctional(PacketPtr pkt);

    bool recvTimingReq(PacketPtr pkt);

    void recvRespRetry();


	string extractModule(int id);

  public:

	Addr baseaddress_control_fpga;
	Addr size_control_fpga;
	Addr fpga_bus_addr;
 	string moduleName;
    int show_address;
	int dma_available;
	int dma_size;
	int dma_read_done;
	int dma_read_begin;
	int dma_write_done;
	int dma_write_begin;
	struct shared_use_st
	{
		int written;
		unsigned long long text[TEXT_SZ];
	};
	int configured;
	int running;
	void *shm = NULL;
	struct shared_use_st *shared;
	unsigned long long buffer[BUFSIZ + 1];
	int shmid;
	bool writeFault;
	bool readFault;
	void createShare();
	void deleteShare();
	FPGADma *fpgadma;
    uint8_t scratchM[16*1024*1024];
	int ACP;
	int tmp;
	int already_reset;
	int Reconfigurable;	
	Tick Reconfiguration_time;
	void reconfiguration();
	EventWrapper<FpgaCPU, &FpgaCPU::reconfiguration> reconfigurationEvent;
	int Protocol_shakehand;
};

#endif // __CPU_FPGA_HH__
