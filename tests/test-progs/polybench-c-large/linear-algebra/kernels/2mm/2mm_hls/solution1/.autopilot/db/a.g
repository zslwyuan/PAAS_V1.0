#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /media/lty/SSD/Experiment-tmp/final1027/tests/test-progs/polybench-c-large/linear-algebra/kernels/2mm/2mm_hls/solution1/.autopilot/db/a.g.bc ${1+"$@"}
