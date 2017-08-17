#include "kernel_2mm.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void kernel_2mm::thread_hdltv_gen() {
    const char* dump_tv = std::getenv("AP_WRITE_TV");
    if (!(dump_tv && string(dump_tv) == "on")) return;

    wait();

    mHdltvinHandle << "[ " << endl;
    mHdltvoutHandle << "[ " << endl;
    int ap_cycleNo = 0;
    while (1) {
        wait();
        const char* mComma = ap_cycleNo == 0 ? " " : ", " ;
        mHdltvinHandle << mComma << "{"  <<  " \"ap_rst\" :  \"" << ap_rst.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"ap_start\" :  \"" << ap_start.read() << "\" ";
        mHdltvoutHandle << mComma << "{"  <<  " \"ap_done\" :  \"" << ap_done.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_idle\" :  \"" << ap_idle.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_ready\" :  \"" << ap_ready.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"indata_address0\" :  \"" << indata_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"indata_ce0\" :  \"" << indata_ce0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"indata_we0\" :  \"" << indata_we0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"indata_d0\" :  \"" << indata_d0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"indata_q0\" :  \"" << indata_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"indata_address1\" :  \"" << indata_address1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"indata_ce1\" :  \"" << indata_ce1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"indata_we1\" :  \"" << indata_we1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"indata_d1\" :  \"" << indata_d1.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"indata_q1\" :  \"" << indata_q1.read() << "\" ";
        mHdltvinHandle << "}" << std::endl;
        mHdltvoutHandle << "}" << std::endl;
        ap_cycleNo++;
    }
}

}

