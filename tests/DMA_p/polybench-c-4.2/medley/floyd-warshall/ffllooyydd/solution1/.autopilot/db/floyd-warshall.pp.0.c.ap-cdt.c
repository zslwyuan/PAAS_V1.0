#pragma line 1 "floyd-warshall.c"
#pragma line 1 "floyd-warshall.c" 1
#pragma line 1 "<built-in>" 1
#pragma line 1 "<built-in>" 3
#pragma line 149 "<built-in>" 3
#pragma line 1 "<command line>" 1
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 1 "/opt/Xilinx/Vivado_HLS/2016.4/common/technology/autopilot/etc/autopilot_ssdm_op.h" 1
/* autopilot_ssdm_op.h*/
/*
#-  (c) Copyright 2011-2016 Xilinx, Inc. All rights reserved.
#-
#-  This file contains confidential and proprietary information
#-  of Xilinx, Inc. and is protected under U.S. and
#-  international copyright and other intellectual property
#-  laws.
#-
#-  DISCLAIMER
#-  This disclaimer is not a license and does not grant any
#-  rights to the materials distributed herewith. Except as
#-  otherwise provided in a valid license issued to you by
#-  Xilinx, and to the maximum extent permitted by applicable
#-  law: (1) THESE MATERIALS ARE MADE AVAILABLE "AS IS" AND
#-  WITH ALL FAULTS, AND XILINX HEREBY DISCLAIMS ALL WARRANTIES
#-  AND CONDITIONS, EXPRESS, IMPLIED, OR STATUTORY, INCLUDING
#-  BUT NOT LIMITED TO WARRANTIES OF MERCHANTABILITY, NON-
#-  INFRINGEMENT, OR FITNESS FOR ANY PARTICULAR PURPOSE; and
#-  (2) Xilinx shall not be liable (whether in contract or tort,
#-  including negligence, or under any other theory of
#-  liability) for any loss or damage of any kind or nature
#-  related to, arising under or in connection with these
#-  materials, including for any direct, or any indirect,
#-  special, incidental, or consequential loss or damage
#-  (including loss of data, profits, goodwill, or any type of
#-  loss or damage suffered as a result of any action brought
#-  by a third party) even if such damage or loss was
#-  reasonably foreseeable or Xilinx had been advised of the
#-  possibility of the same.
#-
#-  CRITICAL APPLICATIONS
#-  Xilinx products are not designed or intended to be fail-
#-  safe, or for use in any application requiring fail-safe
#-  performance, such as life-support or safety devices or
#-  systems, Class III medical devices, nuclear facilities,
#-  applications related to the deployment of airbags, or any
#-  other applications that could lead to death, personal
#-  injury, or severe property or environmental damage
#-  (individually and collectively, "Critical
#-  Applications"). Customer assumes the sole risk and
#-  liability of any use of Xilinx products in Critical
#-  Applications, subject only to applicable laws and
#-  regulations governing limitations on product liability.
#-
#-  THIS COPYRIGHT NOTICE AND DISCLAIMER MUST BE RETAINED AS
#-  PART OF THIS FILE AT ALL TIMES. 
#- ************************************************************************
#pragma empty_line
 *
 * $Id$
 */
#pragma line 283 "/opt/Xilinx/Vivado_HLS/2016.4/common/technology/autopilot/etc/autopilot_ssdm_op.h"
/*#define AP_SPEC_ATTR __attribute__ ((pure))*/
#pragma empty_line
#pragma empty_line
#pragma empty_line
    /****** SSDM Intrinsics: OPERATIONS ***/
    // Interface operations
    //typedef unsigned int __attribute__ ((bitwidth(1))) _uint1_;
    void _ssdm_op_IfRead() __attribute__ ((nothrow));
    void _ssdm_op_IfWrite() __attribute__ ((nothrow));
    //_uint1_ _ssdm_op_IfNbRead() SSDM_OP_ATTR;
    //_uint1_ _ssdm_op_IfNbWrite() SSDM_OP_ATTR;
    //_uint1_ _ssdm_op_IfCanRead() SSDM_OP_ATTR;
    //_uint1_ _ssdm_op_IfCanWrite() SSDM_OP_ATTR;
#pragma empty_line
    // Stream Intrinsics
    void _ssdm_StreamRead() __attribute__ ((nothrow));
    void _ssdm_StreamWrite() __attribute__ ((nothrow));
    //_uint1_  _ssdm_StreamNbRead() SSDM_OP_ATTR;
    //_uint1_  _ssdm_StreamNbWrite() SSDM_OP_ATTR;
    //_uint1_  _ssdm_StreamCanRead() SSDM_OP_ATTR;
    //_uint1_  _ssdm_StreamCanWrite() SSDM_OP_ATTR;
#pragma empty_line
    // Misc
    void _ssdm_op_MemShiftRead() __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_op_Wait() __attribute__ ((nothrow));
    void _ssdm_op_Poll() __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_op_Return() __attribute__ ((nothrow));
#pragma empty_line
    /* SSDM Intrinsics: SPECIFICATIONS */
    void _ssdm_op_SpecSynModule() __attribute__ ((nothrow));
    void _ssdm_op_SpecTopModule() __attribute__ ((nothrow));
    void _ssdm_op_SpecProcessDecl() __attribute__ ((nothrow));
    void _ssdm_op_SpecProcessDef() __attribute__ ((nothrow));
    void _ssdm_op_SpecPort() __attribute__ ((nothrow));
    void _ssdm_op_SpecConnection() __attribute__ ((nothrow));
    void _ssdm_op_SpecChannel() __attribute__ ((nothrow));
    void _ssdm_op_SpecSensitive() __attribute__ ((nothrow));
    void _ssdm_op_SpecModuleInst() __attribute__ ((nothrow));
    void _ssdm_op_SpecPortMap() __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_op_SpecReset() __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_op_SpecPlatform() __attribute__ ((nothrow));
    void _ssdm_op_SpecClockDomain() __attribute__ ((nothrow));
    void _ssdm_op_SpecPowerDomain() __attribute__ ((nothrow));
#pragma empty_line
    int _ssdm_op_SpecRegionBegin() __attribute__ ((nothrow));
    int _ssdm_op_SpecRegionEnd() __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_op_SpecLoopName() __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_op_SpecLoopTripCount() __attribute__ ((nothrow));
#pragma empty_line
    int _ssdm_op_SpecStateBegin() __attribute__ ((nothrow));
    int _ssdm_op_SpecStateEnd() __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_op_SpecInterface() __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_op_SpecPipeline() __attribute__ ((nothrow));
    void _ssdm_op_SpecDataflowPipeline() __attribute__ ((nothrow));
#pragma empty_line
#pragma empty_line
    void _ssdm_op_SpecLatency() __attribute__ ((nothrow));
    void _ssdm_op_SpecParallel() __attribute__ ((nothrow));
    void _ssdm_op_SpecProtocol() __attribute__ ((nothrow));
    void _ssdm_op_SpecOccurrence() __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_op_SpecResource() __attribute__ ((nothrow));
    void _ssdm_op_SpecResourceLimit() __attribute__ ((nothrow));
    void _ssdm_op_SpecCHCore() __attribute__ ((nothrow));
    void _ssdm_op_SpecFUCore() __attribute__ ((nothrow));
    void _ssdm_op_SpecIFCore() __attribute__ ((nothrow));
    void _ssdm_op_SpecIPCore() __attribute__ ((nothrow));
    void _ssdm_op_SpecKeepValue() __attribute__ ((nothrow));
    void _ssdm_op_SpecMemCore() __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_op_SpecExt() __attribute__ ((nothrow));
    /*void* _ssdm_op_SpecProcess() SSDM_SPEC_ATTR;
    void* _ssdm_op_SpecEdge() SSDM_SPEC_ATTR; */
#pragma empty_line
    /* Presynthesis directive functions */
    void _ssdm_SpecArrayDimSize() __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_RegionBegin() __attribute__ ((nothrow));
    void _ssdm_RegionEnd() __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_Unroll() __attribute__ ((nothrow));
    void _ssdm_UnrollRegion() __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_InlineAll() __attribute__ ((nothrow));
    void _ssdm_InlineLoop() __attribute__ ((nothrow));
    void _ssdm_Inline() __attribute__ ((nothrow));
    void _ssdm_InlineSelf() __attribute__ ((nothrow));
    void _ssdm_InlineRegion() __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_SpecArrayMap() __attribute__ ((nothrow));
    void _ssdm_SpecArrayPartition() __attribute__ ((nothrow));
    void _ssdm_SpecArrayReshape() __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_SpecStream() __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_SpecExpr() __attribute__ ((nothrow));
    void _ssdm_SpecExprBalance() __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_SpecDependence() __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_SpecLoopMerge() __attribute__ ((nothrow));
    void _ssdm_SpecLoopFlatten() __attribute__ ((nothrow));
    void _ssdm_SpecLoopRewind() __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_SpecFuncInstantiation() __attribute__ ((nothrow));
    void _ssdm_SpecFuncBuffer() __attribute__ ((nothrow));
    void _ssdm_SpecFuncExtract() __attribute__ ((nothrow));
    void _ssdm_SpecConstant() __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_DataPack() __attribute__ ((nothrow));
    void _ssdm_SpecDataPack() __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_op_SpecBitsMap() __attribute__ ((nothrow));
    void _ssdm_op_SpecLicense() __attribute__ ((nothrow));
#pragma empty_line
#pragma empty_line
/*#define _ssdm_op_WaitUntil(X) while (!(X)) _ssdm_op_Wait(1);
#define _ssdm_op_Delayed(X) X */
#pragma line 421 "/opt/Xilinx/Vivado_HLS/2016.4/common/technology/autopilot/etc/autopilot_ssdm_op.h"
// XSIP watermark, do not delete 67d7842dbbe25473c3c32b93c0da8047785f30d78e8a024de1b57352245f9689
#pragma line 6 "<command line>" 2
#pragma line 1 "<built-in>" 2
#pragma line 1 "floyd-warshall.c" 2
/**
 * This version is stamped on May 10, 2016
 *
 * Contact:
 *   Louis-Noel Pouchet <pouchet.ohio-state.edu>
 *   Tomofumi Yuki <tomofumi.yuki.fr>
 *
 * Web address: http://polybench.sourceforge.net
 */
/* floyd-warshall.c: this file is part of PolyBench/C */
#pragma empty_line
#pragma empty_line
#pragma line 1 "/usr/include/stdio.h" 1 3 4
/* Define ISO C stdio on top of C++ iostreams.
   Copyright (C) 1991-2016 Free Software Foundation, Inc.
   This file is part of the GNU C Library.
#pragma empty_line
   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.
#pragma empty_line
   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.
#pragma empty_line
   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */
#pragma empty_line
/*
 *	ISO C99 Standard: 7.19 Input/output	<stdio.h>
 */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 1 "/usr/include/features.h" 1 3 4
/* Copyright (C) 1991-2016 Free Software Foundation, Inc.
   This file is part of the GNU C Library.
#pragma empty_line
   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.
#pragma empty_line
   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.
#pragma empty_line
   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* These are defined by the user (or the compiler)
   to specify the desired environment:
#pragma empty_line
   __STRICT_ANSI__	ISO Standard C.
   _ISOC99_SOURCE	Extensions to ISO C89 from ISO C99.
   _ISOC11_SOURCE	Extensions to ISO C99 from ISO C11.
   _POSIX_SOURCE	IEEE Std 1003.1.
   _POSIX_C_SOURCE	If ==1, like _POSIX_SOURCE; if >=2 add IEEE Std 1003.2;
			if >=199309L, add IEEE Std 1003.1b-1993;
			if >=199506L, add IEEE Std 1003.1c-1995;
			if >=200112L, all of IEEE 1003.1-2004
			if >=200809L, all of IEEE 1003.1-2008
   _XOPEN_SOURCE	Includes POSIX and XPG things.  Set to 500 if
			Single Unix conformance is wanted, to 600 for the
			sixth revision, to 700 for the seventh revision.
   _XOPEN_SOURCE_EXTENDED XPG things and X/Open Unix extensions.
   _LARGEFILE_SOURCE	Some more functions for correct standard I/O.
   _LARGEFILE64_SOURCE	Additional functionality from LFS for large files.
   _FILE_OFFSET_BITS=N	Select default filesystem interface.
   _ATFILE_SOURCE	Additional *at interfaces.
   _GNU_SOURCE		All of the above, plus GNU extensions.
   _DEFAULT_SOURCE	The default set of features (taking precedence over
			__STRICT_ANSI__).
   _REENTRANT		Select additionally reentrant object.
   _THREAD_SAFE		Same as _REENTRANT, often used by other systems.
   _FORTIFY_SOURCE	If set to numeric value > 0 additional security
			measures are defined, according to level.
#pragma empty_line
   The `-ansi' switch to the GNU C compiler, and standards conformance
   options such as `-std=c99', define __STRICT_ANSI__.  If none of
   these are defined, or if _DEFAULT_SOURCE is defined, the default is
   to have _POSIX_SOURCE set to one and _POSIX_C_SOURCE set to
   200809L, as well as enabling miscellaneous functions from BSD and
   SVID.  If more than one of these are defined, they accumulate.  For
   example __STRICT_ANSI__, _POSIX_SOURCE and _POSIX_C_SOURCE together
   give you ISO C, 1003.1, and 1003.2, but nothing else.
#pragma empty_line
   These are defined by this file and are used by the
   header files to decide what to declare or define:
#pragma empty_line
   __USE_ISOC11		Define ISO C11 things.
   __USE_ISOC99		Define ISO C99 things.
   __USE_ISOC95		Define ISO C90 AMD1 (C95) things.
   __USE_POSIX		Define IEEE Std 1003.1 things.
   __USE_POSIX2		Define IEEE Std 1003.2 things.
   __USE_POSIX199309	Define IEEE Std 1003.1, and .1b things.
   __USE_POSIX199506	Define IEEE Std 1003.1, .1b, .1c and .1i things.
   __USE_XOPEN		Define XPG things.
   __USE_XOPEN_EXTENDED	Define X/Open Unix things.
   __USE_UNIX98		Define Single Unix V2 things.
   __USE_XOPEN2K        Define XPG6 things.
   __USE_XOPEN2KXSI     Define XPG6 XSI things.
   __USE_XOPEN2K8       Define XPG7 things.
   __USE_XOPEN2K8XSI    Define XPG7 XSI things.
   __USE_LARGEFILE	Define correct standard I/O things.
   __USE_LARGEFILE64	Define LFS things with separate names.
   __USE_FILE_OFFSET64	Define 64bit interface as default.
   __USE_MISC		Define things from 4.3BSD or System V Unix.
   __USE_ATFILE		Define *at interfaces and AT_* constants for them.
   __USE_GNU		Define GNU extensions.
   __USE_REENTRANT	Define reentrant/thread-safe *_r functions.
   __USE_FORTIFY_LEVEL	Additional security measures used, according to level.
#pragma empty_line
   The macros `__GNU_LIBRARY__', `__GLIBC__', and `__GLIBC_MINOR__' are
   defined by this file unconditionally.  `__GNU_LIBRARY__' is provided
   only for compatibility.  All new code should use the other symbols
   to test for features.
#pragma empty_line
   All macros listed above as possibly being defined by this file are
   explicitly undefined if they are not explicitly defined.
   Feature-test macros that are not defined by the user or compiler
   but are implied by the other feature-test macros defined (or by the
   lack of any definitions) are defined by the file.  */
#pragma empty_line
#pragma empty_line
/* Undefine everything, so we get a clean slate.  */
#pragma line 122 "/usr/include/features.h" 3 4
/* Suppress kernel-name space pollution unless user expressedly asks
   for it.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Convenience macros to test the versions of glibc and gcc.
   Use them like this:
   #if __GNUC_PREREQ (2,8)
   ... code requiring gcc 2.8 or later ...
   #endif
   Note - they won't work for gcc1 or glibc1, since the _MINOR macros
   were not defined then.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* _BSD_SOURCE and _SVID_SOURCE are deprecated aliases for
   _DEFAULT_SOURCE.  If _DEFAULT_SOURCE is present we do not
   issue a warning; the expectation is that the source is being
   transitioned to use the new macro.  */
#pragma line 156 "/usr/include/features.h" 3 4
/* If _GNU_SOURCE was defined by the user, turn on all the other features.  */
#pragma line 180 "/usr/include/features.h" 3 4
/* If nothing (other than _GNU_SOURCE and _DEFAULT_SOURCE) is defined,
   define _DEFAULT_SOURCE.  */
#pragma line 191 "/usr/include/features.h" 3 4
/* This is to enable the ISO C11 extension.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* This is to enable the ISO C99 extension.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* This is to enable the ISO C90 Amendment 1:1995 extension.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* This is to enable compatibility for ISO C++11.
#pragma empty_line
   So far g++ does not provide a macro.  Check the temporary macro for
   now, too.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* If none of the ANSI/POSIX macros are defined, or if _DEFAULT_SOURCE
   is defined, use POSIX.1-2008 (or another version depending on
   _XOPEN_SOURCE).  */
#pragma line 343 "/usr/include/features.h" 3 4
/* Get definitions of __STDC_* predefined macros, if the compiler has
   not preincluded this header automatically.  */
#pragma empty_line
#pragma line 1 "/usr/include/stdc-predef.h" 1 3 4
/* Copyright (C) 1991-2016 Free Software Foundation, Inc.
   This file is part of the GNU C Library.
#pragma empty_line
   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.
#pragma empty_line
   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.
#pragma empty_line
   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* This header is separate from features.h so that the compiler can
   include it implicitly at the start of every compilation.  It must
   not itself include <features.h> or any other header that includes
   <features.h> because the implicit include comes before any feature
   test macros that may be defined in a source file before it first
   explicitly includes a system header.  GCC knows the name of this
   header in order to preinclude it.  */
#pragma empty_line
/* glibc's intent is to support the IEC 559 math functionality, real
   and complex.  If the GCC (4.9 and later) predefined macros
   specifying compiler intent are available, use them to determine
   whether the overall intent is to support these features; otherwise,
   presume an older compiler has intent to support these features and
   define these macros by default.  */
#pragma line 52 "/usr/include/stdc-predef.h" 3 4
/* wchar_t uses Unicode 8.0.0.  Version 8.0 of the Unicode Standard is
   synchronized with ISO/IEC 10646:2014, plus Amendment 1 (published
   2015-05-15).  */
#pragma empty_line
#pragma empty_line
/* We do not support C11 <threads.h>.  */
#pragma line 346 "/usr/include/features.h" 2 3 4
#pragma empty_line
/* This macro indicates that the installed library is the GNU C Library.
   For historic reasons the value now is 6 and this will stay from now
   on.  The use of this variable is deprecated.  Use __GLIBC__ and
   __GLIBC_MINOR__ now (see below) when you want to test for a specific
   GNU C library version and use the values in <gnu/lib-names.h> to get
   the sonames of the shared libraries.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Major and minor version number of the GNU C library package.  Use
   these macros to test for features in specific releases.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* This is here only because every header file already includes this one.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 1 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 1 3 4
/* Copyright (C) 1992-2016 Free Software Foundation, Inc.
   This file is part of the GNU C Library.
#pragma empty_line
   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.
#pragma empty_line
   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.
#pragma empty_line
   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* We are almost always included from features.h. */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* The GNU libc does not support any K&R compilers or the traditional mode
   of ISO C compilers anymore.  Check for some of the combinations not
   anymore supported.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Some user header file might have defined this before.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* All functions, except those with callbacks or those that
   synchronize memory, are leaf functions.  */
#pragma line 49 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
/* GCC can always grok prototypes.  For C++ programs we add throw()
   to help it optimize the function calls.  But this works only with
   gcc 2.8.x and egcs.  For gcc 3.2 and up we even mark C functions
   as non-throwing using a function attribute since programs can use
   the -fexceptions options for C code as well.  */
#pragma line 80 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
/* These two macros are not used in glibc anymore.  They are kept here
   only because some other projects expect the macros to be defined.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* For these things, GCC behaves the ANSI way normally,
   and the non-ANSI way under -traditional.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* This is not a typedef so `const __ptr_t' does the right thing.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* C++ needs to know that types and declarations are C, not C++.  */
#pragma line 106 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
/* The standard library needs the functions from the ISO C90 standard
   in the std namespace.  At the same time we want to be safe for
   future changes and we include the ISO C99 code in the non-standard
   namespace __c99.  The C++ wrapper header take case of adding the
   definitions to the global namespace.  */
#pragma line 119 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
/* For compatibility we do not add the declarations into any
   namespace.  They will end up in the global namespace which is what
   old code expects.  */
#pragma line 131 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
/* Fortify support.  */
#pragma line 147 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
/* Support for flexible arrays.  */
#pragma empty_line
/* GCC 2.97 supports C99 flexible array members.  */
#pragma line 165 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
/* __asm__ ("xyz") is used throughout the headers to rename functions
   at the assembly language level.  This is wrapped by the __REDIRECT
   macro, in order to support compilers that can do this some other
   way.  When compilers don't support asm-names at all, we have to do
   preprocessor tricks instead (which don't have exactly the right
   semantics, but it's the best we can do).
#pragma empty_line
   Example:
   int __REDIRECT(setpgrp, (__pid_t pid, __pid_t pgrp), setpgid); */
#pragma line 192 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
/*
#elif __SOME_OTHER_COMPILER__
#pragma empty_line
# define __REDIRECT(name, proto, alias) name proto; \
	_Pragma("let " #name " = " #alias)
*/
#pragma empty_line
#pragma empty_line
/* GCC has various useful declarations that can be made with the
   `__attribute__' syntax.  All of the ways we use this do fine if
   they are omitted for compilers that don't understand it. */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* At some point during the gcc 2.96 development the `malloc' attribute
   for functions was introduced.  We don't want to use it unconditionally
   (although this would be possible) since it generates warnings.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Tell the compiler which arguments to an allocation function
   indicate the size of the allocation.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* At some point during the gcc 2.96 development the `pure' attribute
   for functions was introduced.  We don't want to use it unconditionally
   (although this would be possible) since it generates warnings.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* This declaration tells the compiler that the value is constant.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* At some point during the gcc 3.1 development the `used' attribute
   for functions was introduced.  We don't want to use it unconditionally
   (although this would be possible) since it generates warnings.  */
#pragma line 252 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
/* gcc allows marking deprecated functions.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* At some point during the gcc 2.8 development the `format_arg' attribute
   for functions was introduced.  We don't want to use it unconditionally
   (although this would be possible) since it generates warnings.
   If several `format_arg' attributes are given for the same function, in
   gcc-3.0 and older, all but the last one are ignored.  In newer gccs,
   all designated arguments are considered.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* At some point during the gcc 2.97 development the `strfmon' format
   attribute for functions was introduced.  We don't want to use it
   unconditionally (although this would be possible) since it
   generates warnings.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* The nonull function attribute allows to mark pointer parameters which
   must not be NULL.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* If fortification mode, we warn about unused results of certain
   function calls which can lead to problems.  */
#pragma line 305 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
/* Forces a function to be always inlined.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Associate error messages with the source location of the call site rather
   than with the source location inside the function.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* GCC 4.3 and above with -std=c99 or -std=gnu99 implements ISO C99
   inline semantics, unless -fgnu89-inline is used.  Using __GNUC_STDC_INLINE__
   or __GNUC_GNU_INLINE is not a good enough check for gcc because gcc versions
   older than 4.3 may define these macros and still not guarantee GNU inlining
   semantics.
#pragma empty_line
   clang++ identifies itself as gcc-4.2, but has support for GNU inlining
   semantics, that can be checked fot by using the __GNUC_STDC_INLINE_ and
   __GNUC_GNU_INLINE__ macro definitions.  */
#pragma line 346 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
/* GCC 4.3 and above allow passing all anonymous arguments of an
   __extern_always_inline function to some other vararg function.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* It is possible to compile containing GCC extensions even if GCC is
   run in pedantic mode if the uses are carefully marked using the
   `__extension__' keyword.  But this is not generally available before
   version 2.8.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* __restrict is known in EGCS 1.2 and above. */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* ISO C99 also allows to declare arrays as non-overlapping.  The syntax is
     array_name[restrict]
   GCC 3.1 supports this.  */
#pragma line 410 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
#pragma line 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
/* Determine the wordsize from the preprocessor defines.  */
#pragma line 11 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 3 4
/* Both x86-64 and x32 use the 64-bit system call interface.  */
#pragma line 411 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 2 3 4
#pragma line 368 "/usr/include/features.h" 2 3 4
#pragma empty_line
#pragma empty_line
/* If we don't have __REDIRECT, prototypes will be missing if
   __USE_FILE_OFFSET64 but not __USE_LARGEFILE[64]. */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Decide whether we can define 'extern inline' functions in headers.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* This is here only because every header file already includes this one.
   Get the definitions of all the appropriate `__stub_FUNCTION' symbols.
   <gnu/stubs.h> contains `#define __stub_FUNCTION' when FUNCTION is a stub
   that will always return failure (and set errno to ENOSYS).  */
#pragma empty_line
#pragma line 1 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 1 3 4
/* This file is automatically generated.
   This file selects the right generated file of `__stub_FUNCTION' macros
   based on the architecture being compiled for.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 1 "/usr/include/x86_64-linux-gnu/gnu/stubs-64.h" 1 3 4
/* This file is automatically generated.
   It defines a symbol `__stub_FUNCTION' for each function
   in the C library which is a stub, meaning it will fail
   every time called, usually setting errno to ENOSYS.  */
#pragma line 11 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 2 3 4
#pragma line 392 "/usr/include/features.h" 2 3 4
#pragma line 28 "/usr/include/stdio.h" 2 3 4
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 1 "/opt/Xilinx/Vivado_HLS/2016.4/lnx64/tools/clang/bin/../lib/clang/3.1/include/stddef.h" 1 3 4
/*===---- stddef.h - Basic type definitions --------------------------------===
 *
 * Copyright (c) 2008 Eli Friedman
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 *===-----------------------------------------------------------------------===
 */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef __typeof__(((int*)0)-((int*)0)) ptrdiff_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef __typeof__(sizeof(int)) size_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef int wchar_t;
#pragma line 56 "/opt/Xilinx/Vivado_HLS/2016.4/lnx64/tools/clang/bin/../lib/clang/3.1/include/stddef.h" 3 4
/* Some C libraries expect to see a wint_t here. Others (notably MinGW) will use
__WINT_TYPE__ directly; accommodate both by requiring __need_wint_t */
#pragma line 34 "/usr/include/stdio.h" 2 3 4
#pragma empty_line
#pragma line 1 "/usr/include/x86_64-linux-gnu/bits/types.h" 1 3 4
/* bits/types.h -- definitions of __*_t types underlying *_t types.
   Copyright (C) 2002-2016 Free Software Foundation, Inc.
   This file is part of the GNU C Library.
#pragma empty_line
   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.
#pragma empty_line
   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.
#pragma empty_line
   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */
#pragma empty_line
/*
 * Never include this file directly; use <sys/types.h> instead.
 */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
/* Determine the wordsize from the preprocessor defines.  */
#pragma line 11 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 3 4
/* Both x86-64 and x32 use the 64-bit system call interface.  */
#pragma line 28 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4
#pragma empty_line
/* Convenience types.  */
typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;
#pragma empty_line
/* Fixed-size types, underlying types depend on word size and compiler.  */
typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;
#pragma empty_line
typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* quad_t is also 64 bits.  */
#pragma empty_line
typedef long int __quad_t;
typedef unsigned long int __u_quad_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* The machine-dependent file <bits/typesizes.h> defines __*_T_TYPE
   macros for each of the OS types we define below.  The definitions
   of those macros must use the following macros for underlying types.
   We define __S<SIZE>_TYPE and __U<SIZE>_TYPE for the signed and unsigned
   variants of each of the following integer types on this machine.
#pragma empty_line
	16		-- "natural" 16-bit type (always short)
	32		-- "natural" 32-bit type (always int)
	64		-- "natural" 64-bit type (long or long long)
	LONG32		-- 32-bit type, traditionally long
	QUAD		-- 64-bit type, always long long
	WORD		-- natural type of __WORDSIZE bits (int or long)
	LONGWORD	-- type of __WORDSIZE bits, traditionally long
#pragma empty_line
   We distinguish WORD/LONGWORD, 32/LONG32, and 64/QUAD so that the
   conventional uses of `long' or `long long' type modifiers match the
   types we define, even when a less-adorned type would be the same size.
   This matters for (somewhat) portably writing printf/scanf formats for
   these types, where using the appropriate l or ll format modifiers can
   make the typedefs and the formats match up across all GNU platforms.  If
   we used `long' when it's 64 bits where `long long' is expected, then the
   compiler would warn about the formats not matching the argument types,
   and the programmer changing them to shut up the compiler would break the
   program's portability.
#pragma empty_line
   Here we assume what is presently the case in all the GCC configurations
   we support: long long is always 64 bits, long is always word/address size,
   and int is always 32 bits.  */
#pragma line 116 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
/* No need to mark the typedef with __extension__.   */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 1 "/usr/include/x86_64-linux-gnu/bits/typesizes.h" 1 3 4
/* bits/typesizes.h -- underlying types for *_t.  Linux/x86-64 version.
   Copyright (C) 2012-2016 Free Software Foundation, Inc.
   This file is part of the GNU C Library.
#pragma empty_line
   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.
#pragma empty_line
   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.
#pragma empty_line
   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */
#pragma line 26 "/usr/include/x86_64-linux-gnu/bits/typesizes.h" 3 4
/* See <bits/types.h> for the meaning of these macros.  This file exists so
   that <bits/types.h> need not vary across different GNU platforms.  */
#pragma empty_line
/* X32 kernel interface is 64-bit.  */
#pragma line 77 "/usr/include/x86_64-linux-gnu/bits/typesizes.h" 3 4
/* Tell the libc code that off_t and off64_t are actually the same type
   for all ABI purposes, even if possibly expressed as different base types
   for C type-checking purposes.  */
#pragma empty_line
#pragma empty_line
/* Same for ino_t and ino64_t.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Number of descriptors that can fit in an `fd_set'.  */
#pragma line 122 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4
#pragma empty_line
#pragma empty_line
typedef unsigned long int __dev_t; /* Type of device numbers.  */
typedef unsigned int __uid_t; /* Type of user identifications.  */
typedef unsigned int __gid_t; /* Type of group identifications.  */
typedef unsigned long int __ino_t; /* Type of file serial numbers.  */
typedef unsigned long int __ino64_t; /* Type of file serial numbers (LFS).*/
typedef unsigned int __mode_t; /* Type of file attribute bitmasks.  */
typedef unsigned long int __nlink_t; /* Type of file link counts.  */
typedef long int __off_t; /* Type of file sizes and offsets.  */
typedef long int __off64_t; /* Type of file sizes and offsets (LFS).  */
typedef int __pid_t; /* Type of process identifications.  */
typedef struct { int __val[2]; } __fsid_t; /* Type of file system IDs.  */
typedef long int __clock_t; /* Type of CPU usage counts.  */
typedef unsigned long int __rlim_t; /* Type for resource measurement.  */
typedef unsigned long int __rlim64_t; /* Type for resource measurement (LFS).  */
typedef unsigned int __id_t; /* General type for IDs.  */
typedef long int __time_t; /* Seconds since the Epoch.  */
typedef unsigned int __useconds_t; /* Count of microseconds.  */
typedef long int __suseconds_t; /* Signed count of microseconds.  */
#pragma empty_line
typedef int __daddr_t; /* The type of a disk address.  */
typedef int __key_t; /* Type of an IPC key.  */
#pragma empty_line
/* Clock ID used in clock and timer functions.  */
typedef int __clockid_t;
#pragma empty_line
/* Timer ID returned by `timer_create'.  */
typedef void * __timer_t;
#pragma empty_line
/* Type to represent block size.  */
typedef long int __blksize_t;
#pragma empty_line
/* Types from the Large File Support interface.  */
#pragma empty_line
/* Type to count number of disk blocks.  */
typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;
#pragma empty_line
/* Type to count file system blocks.  */
typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;
#pragma empty_line
/* Type to count file system nodes.  */
typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;
#pragma empty_line
/* Type of miscellaneous file system fields.  */
typedef long int __fsword_t;
#pragma empty_line
typedef long int __ssize_t; /* Type of a byte count, or error.  */
#pragma empty_line
/* Signed long type used in system calls.  */
typedef long int __syscall_slong_t;
/* Unsigned long type used in system calls.  */
typedef unsigned long int __syscall_ulong_t;
#pragma empty_line
/* These few don't really vary by system, they always correspond
   to one of the other defined types.  */
typedef __off64_t __loff_t; /* Type of file sizes and offsets (LFS).  */
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;
#pragma empty_line
/* Duplicates info from stdint.h but this is used in unistd.h.  */
typedef long int __intptr_t;
#pragma empty_line
/* Duplicate info from sys/socket.h.  */
typedef unsigned int __socklen_t;
#pragma line 36 "/usr/include/stdio.h" 2 3 4
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Define outside of namespace so the C++ is happy.  */
struct _IO_FILE;
#pragma empty_line
#pragma empty_line
/* The opaque type of streams.  This is the definition used elsewhere.  */
typedef struct _IO_FILE FILE;
#pragma line 63 "/usr/include/stdio.h" 3 4
/* The opaque type of streams.  This is the definition used elsewhere.  */
typedef struct _IO_FILE __FILE;
#pragma line 74 "/usr/include/stdio.h" 3 4
#pragma line 1 "/usr/include/libio.h" 1 3 4
/* Copyright (C) 1991-2016 Free Software Foundation, Inc.
   This file is part of the GNU C Library.
   Written by Per Bothner <bothner@cygnus.com>.
#pragma empty_line
   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.
#pragma empty_line
   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.
#pragma empty_line
   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.
#pragma empty_line
   As a special exception, if you link the code in this file with
   files compiled with a GNU compiler to produce an executable,
   that does not cause the resulting executable to be covered by
   the GNU Lesser General Public License.  This exception does not
   however invalidate any other reasons why the executable file
   might be covered by the GNU Lesser General Public License.
   This exception applies to code released by its copyright holders
   in files containing the exception.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 1 "/usr/include/_G_config.h" 1 3 4
/* This file is needed by libio to define various configuration parameters.
   These are always the same in the GNU C library.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Define types for libio in terms of the standard internal type names.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 1 "/opt/Xilinx/Vivado_HLS/2016.4/lnx64/tools/clang/bin/../lib/clang/3.1/include/stddef.h" 1 3 4
/*===---- stddef.h - Basic type definitions --------------------------------===
 *
 * Copyright (c) 2008 Eli Friedman
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 *===-----------------------------------------------------------------------===
 */
#pragma line 56 "/opt/Xilinx/Vivado_HLS/2016.4/lnx64/tools/clang/bin/../lib/clang/3.1/include/stddef.h" 3 4
/* Some C libraries expect to see a wint_t here. Others (notably MinGW) will use
__WINT_TYPE__ directly; accommodate both by requiring __need_wint_t */
#pragma line 16 "/usr/include/_G_config.h" 2 3 4
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 1 "/usr/include/wchar.h" 1 3 4
/* Copyright (C) 1995-2016 Free Software Foundation, Inc.
   This file is part of the GNU C Library.
#pragma empty_line
   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.
#pragma empty_line
   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.
#pragma empty_line
   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */
#pragma empty_line
/*
 *      ISO C99 Standard: 7.24
 *	Extended multibyte and wide character utilities	<wchar.h>
 */
#pragma line 81 "/usr/include/wchar.h" 3 4
/* Conversion state information.  */
typedef struct
{
  int __count;
  union
  {
#pragma empty_line
    unsigned int __wch;
#pragma empty_line
#pragma empty_line
#pragma empty_line
    char __wchb[4];
  } __value; /* Value so far.  */
} __mbstate_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* The rest of the file is only used if used if __need_mbstate_t is not
   defined.  */
#pragma line 900 "/usr/include/wchar.h" 3 4
/* Undefine all __need_* constants in case we are included to get those
   constants but the whole file was already read.  */
#pragma line 21 "/usr/include/_G_config.h" 2 3 4
typedef struct
{
  __off_t __pos;
  __mbstate_t __state;
} _G_fpos_t;
typedef struct
{
  __off64_t __pos;
  __mbstate_t __state;
} _G_fpos64_t;
#pragma line 45 "/usr/include/_G_config.h" 3 4
/* These library features are always available in the GNU C library.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* This is defined by <bits/stat.h> if `st_blksize' exists.  */
#pragma line 32 "/usr/include/libio.h" 2 3 4
/* ALL of these should be defined in _G_config.h */
#pragma line 47 "/usr/include/libio.h" 3 4
/* This define avoids name pollution if we're using GNU stdarg.h */
#pragma empty_line
#pragma empty_line
#pragma line 1 "/opt/Xilinx/Vivado_HLS/2016.4/lnx64/tools/clang/bin/../lib/clang/3.1/include/stdarg.h" 1 3 4
/*===---- stdarg.h - Variable argument handling ----------------------------===
 *
 * Copyright (c) 2008 Eli Friedman
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 *===-----------------------------------------------------------------------===
 */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef __builtin_va_list va_list;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* GCC always defines __va_copy, but does not define va_copy unless in c99 mode
 * or -ansi is not specified, since it was not part of C90.
 */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Hack required to make standard headers work, at least on Ubuntu */
#pragma empty_line
typedef __builtin_va_list __gnuc_va_list;
#pragma line 50 "/usr/include/libio.h" 2 3 4
#pragma line 86 "/usr/include/libio.h" 3 4
/* Magic numbers and bits for the _flags field.
   The magic numbers use the high-order bits of _flags;
   the remaining bits are available for variable flags.
   Note: The magic numbers must all be negative if stdio
   emulation is desired. */
#pragma line 124 "/usr/include/libio.h" 3 4
/* These are "formatting flags" matching the iostream fmtflags enum values. */
#pragma line 144 "/usr/include/libio.h" 3 4
struct _IO_jump_t; struct _IO_FILE;
#pragma empty_line
/* Handle lock.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef void _IO_lock_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* A streammarker remembers a position in a buffer. */
#pragma empty_line
struct _IO_marker {
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;
  /* If _pos >= 0
 it points to _buf->Gbase()+_pos. FIXME comment */
  /* if _pos < 0, it points to _buf->eBptr()+_pos. FIXME comment */
  int _pos;
#pragma line 173 "/usr/include/libio.h" 3 4
};
#pragma empty_line
/* This is the structure from the libstdc++ codecvt class.  */
enum __codecvt_result
{
  __codecvt_ok,
  __codecvt_partial,
  __codecvt_error,
  __codecvt_noconv
};
#pragma line 241 "/usr/include/libio.h" 3 4
struct _IO_FILE {
  int _flags; /* High-order word is _IO_MAGIC; rest is flags. */
#pragma empty_line
#pragma empty_line
  /* The following pointers correspond to the C++ streambuf protocol. */
  /* Note:  Tk uses the _IO_read_ptr and _IO_read_end fields directly. */
  char* _IO_read_ptr; /* Current read pointer */
  char* _IO_read_end; /* End of get area. */
  char* _IO_read_base; /* Start of putback+get area. */
  char* _IO_write_base; /* Start of put area. */
  char* _IO_write_ptr; /* Current put pointer. */
  char* _IO_write_end; /* End of put area. */
  char* _IO_buf_base; /* Start of reserve area. */
  char* _IO_buf_end; /* End of reserve area. */
  /* The following fields are used to support backing up and undo. */
  char *_IO_save_base; /* Pointer to start of non-current get area. */
  char *_IO_backup_base; /* Pointer to first valid character of backup area */
  char *_IO_save_end; /* Pointer to end of non-current get area. */
#pragma empty_line
  struct _IO_marker *_markers;
#pragma empty_line
  struct _IO_FILE *_chain;
#pragma empty_line
  int _fileno;
#pragma empty_line
#pragma empty_line
#pragma empty_line
  int _flags2;
#pragma empty_line
  __off_t _old_offset; /* This used to be _offset but it's too small.  */
#pragma empty_line
#pragma empty_line
  /* 1+column number of pbase(); 0 is unknown. */
  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];
#pragma empty_line
  /*  char* _save_gptr;  char* _save_egptr; */
#pragma empty_line
  _IO_lock_t *_lock;
#pragma line 289 "/usr/include/libio.h" 3 4
  __off64_t _offset;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  void *__pad1;
  void *__pad2;
  void *__pad3;
  void *__pad4;
#pragma empty_line
  size_t __pad5;
  int _mode;
  /* Make sure we don't get into trouble again.  */
  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];
#pragma empty_line
};
#pragma empty_line
#pragma empty_line
typedef struct _IO_FILE _IO_FILE;
#pragma empty_line
#pragma empty_line
struct _IO_FILE_plus;
#pragma empty_line
extern struct _IO_FILE_plus _IO_2_1_stdin_;
extern struct _IO_FILE_plus _IO_2_1_stdout_;
extern struct _IO_FILE_plus _IO_2_1_stderr_;
#pragma line 329 "/usr/include/libio.h" 3 4
/* Functions to do I/O and file management for a stream.  */
#pragma empty_line
/* Read NBYTES bytes from COOKIE into a buffer pointed to by BUF.
   Return number of bytes read.  */
typedef __ssize_t __io_read_fn (void *__cookie, char *__buf, size_t __nbytes);
#pragma empty_line
/* Write N bytes pointed to by BUF to COOKIE.  Write all N bytes
   unless there is an error.  Return number of bytes written.  If
   there is an error, return 0 and do not write anything.  If the file
   has been opened for append (__mode.__append set), then set the file
   pointer to the end of the file and then do the write; if not, just
   write at the current file pointer.  */
typedef __ssize_t __io_write_fn (void *__cookie, const char *__buf,
     size_t __n);
#pragma empty_line
/* Move COOKIE's file position to *POS bytes from the
   beginning of the file (if W is SEEK_SET),
   the current position (if W is SEEK_CUR),
   or the end of the file (if W is SEEK_END).
   Set *POS to the new file position.
   Returns zero if successful, nonzero if not.  */
typedef int __io_seek_fn (void *__cookie, __off64_t *__pos, int __w);
#pragma empty_line
/* Close COOKIE.  */
typedef int __io_close_fn (void *__cookie);
#pragma line 385 "/usr/include/libio.h" 3 4
extern int __underflow (_IO_FILE *);
extern int __uflow (_IO_FILE *);
extern int __overflow (_IO_FILE *, int);
#pragma line 429 "/usr/include/libio.h" 3 4
extern int _IO_getc (_IO_FILE *__fp);
extern int _IO_putc (int __c, _IO_FILE *__fp);
extern int _IO_feof (_IO_FILE *__fp) __attribute__ ((__nothrow__ ));
extern int _IO_ferror (_IO_FILE *__fp) __attribute__ ((__nothrow__ ));
#pragma empty_line
extern int _IO_peekc_locked (_IO_FILE *__fp);
#pragma empty_line
/* This one is for Emacs. */
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern void _IO_flockfile (_IO_FILE *) __attribute__ ((__nothrow__ ));
extern void _IO_funlockfile (_IO_FILE *) __attribute__ ((__nothrow__ ));
extern int _IO_ftrylockfile (_IO_FILE *) __attribute__ ((__nothrow__ ));
#pragma line 459 "/usr/include/libio.h" 3 4
extern int _IO_vfscanf (_IO_FILE * __restrict, const char * __restrict,
   __gnuc_va_list, int *__restrict);
extern int _IO_vfprintf (_IO_FILE *__restrict, const char *__restrict,
    __gnuc_va_list);
extern __ssize_t _IO_padn (_IO_FILE *, int, __ssize_t);
extern size_t _IO_sgetn (_IO_FILE *, void *, size_t);
#pragma empty_line
extern __off64_t _IO_seekoff (_IO_FILE *, __off64_t, int, int);
extern __off64_t _IO_seekpos (_IO_FILE *, __off64_t, int);
#pragma empty_line
extern void _IO_free_backup_area (_IO_FILE *) __attribute__ ((__nothrow__ ));
#pragma line 75 "/usr/include/stdio.h" 2 3 4
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef __gnuc_va_list va_list;
#pragma line 90 "/usr/include/stdio.h" 3 4
typedef __off_t off_t;
#pragma line 102 "/usr/include/stdio.h" 3 4
typedef __ssize_t ssize_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* The type of the second argument to `fgetpos' and `fsetpos'.  */
#pragma empty_line
#pragma empty_line
typedef _G_fpos_t fpos_t;
#pragma line 119 "/usr/include/stdio.h" 3 4
/* The possibilities for the third argument to `setvbuf'.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Default buffer size.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* End of file character.
   Some things throughout the library rely on this being -1.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* The possibilities for the third argument to `fseek'.
   These values should not be changed.  */
#pragma line 150 "/usr/include/stdio.h" 3 4
/* Default path prefix for `tempnam' and `tmpnam'.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Get the values:
   L_tmpnam	How long an array of chars must be to be passed to `tmpnam'.
   TMP_MAX	The minimum number of unique filenames generated by tmpnam
		(and tempnam when it uses tmpnam's name space),
		or tempnam (the two are separate).
   L_ctermid	How long an array to pass to `ctermid'.
   L_cuserid	How long an array to pass to `cuserid'.
   FOPEN_MAX	Minimum number of files that can be open at once.
   FILENAME_MAX	Maximum length of a filename.  */
#pragma empty_line
#pragma line 1 "/usr/include/x86_64-linux-gnu/bits/stdio_lim.h" 1 3 4
/* Copyright (C) 1994-2016 Free Software Foundation, Inc.
   This file is part of the GNU C Library.
#pragma empty_line
   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.
#pragma empty_line
   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.
#pragma empty_line
   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */
#pragma line 165 "/usr/include/stdio.h" 2 3 4
#pragma empty_line
#pragma empty_line
/* Standard streams.  */
extern struct _IO_FILE *stdin; /* Standard input stream.  */
extern struct _IO_FILE *stdout; /* Standard output stream.  */
extern struct _IO_FILE *stderr; /* Standard error output stream.  */
/* C89/C99 say they're macros.  Make them happy.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Remove file FILENAME.  */
extern int remove (const char *__filename) __attribute__ ((__nothrow__ ));
/* Rename file OLD to NEW.  */
extern int rename (const char *__old, const char *__new) __attribute__ ((__nothrow__ ));
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Rename file OLD relative to OLDFD to NEW relative to NEWFD.  */
extern int renameat (int __oldfd, const char *__old, int __newfd,
       const char *__new) __attribute__ ((__nothrow__ ));
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Create a temporary file and open it read/write.
#pragma empty_line
   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
#pragma empty_line
extern FILE *tmpfile (void) /* Ignore */;
#pragma line 208 "/usr/include/stdio.h" 3 4
/* Generate a temporary filename.  */
extern char *tmpnam (char *__s) __attribute__ ((__nothrow__ )) /* Ignore */;
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* This is the reentrant variant of `tmpnam'.  The only difference is
   that it does not allow S to be NULL.  */
extern char *tmpnam_r (char *__s) __attribute__ ((__nothrow__ )) /* Ignore */;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Generate a unique temporary filename using up to five characters of PFX
   if it is not NULL.  The directory to put this file in is searched for
   as follows: First the environment variable "TMPDIR" is checked.
   If it contains the name of a writable directory, that directory is used.
   If not and if DIR is not NULL, that value is checked.  If that fails,
   P_tmpdir is tried and finally "/tmp".  The storage for the filename
   is allocated by `malloc'.  */
extern char *tempnam (const char *__dir, const char *__pfx)
     __attribute__ ((__nothrow__ )) __attribute__ ((__malloc__)) /* Ignore */;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Close STREAM.
#pragma empty_line
   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int fclose (FILE *__stream);
/* Flush STREAM, or all streams if STREAM is NULL.
#pragma empty_line
   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int fflush (FILE *__stream);
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Faster versions when locking is not required.
#pragma empty_line
   This function is not part of POSIX and therefore no official
   cancellation point.  But due to similarity with an POSIX interface
   or due to the implementation it is a cancellation point and
   therefore not marked with __THROW.  */
extern int fflush_unlocked (FILE *__stream);
#pragma line 268 "/usr/include/stdio.h" 3 4
/* Open a file and create a new stream for it.
#pragma empty_line
   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern FILE *fopen (const char *__restrict __filename,
      const char *__restrict __modes) /* Ignore */;
/* Open a file, replacing an existing stream with it.
#pragma empty_line
   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern FILE *freopen (const char *__restrict __filename,
        const char *__restrict __modes,
        FILE *__restrict __stream) /* Ignore */;
#pragma line 305 "/usr/include/stdio.h" 3 4
/* Create a new stream that refers to an existing system file descriptor.  */
extern FILE *fdopen (int __fd, const char *__modes) __attribute__ ((__nothrow__ )) /* Ignore */;
#pragma line 318 "/usr/include/stdio.h" 3 4
/* Create a new stream that refers to a memory buffer.  */
extern FILE *fmemopen (void *__s, size_t __len, const char *__modes)
  __attribute__ ((__nothrow__ )) /* Ignore */;
#pragma empty_line
/* Open a stream that writes into a malloc'd buffer that is expanded as
   necessary.  *BUFLOC and *SIZELOC are updated with the buffer's location
   and the number of characters written on fflush or fclose.  */
extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc) __attribute__ ((__nothrow__ )) /* Ignore */;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* If BUF is NULL, make STREAM unbuffered.
   Else make it use buffer BUF, of size BUFSIZ.  */
extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) __attribute__ ((__nothrow__ ));
/* Make STREAM use buffering mode MODE.
   If BUF is not NULL, use N bytes of it for buffering;
   else allocate an internal buffer N bytes long.  */
extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
      int __modes, size_t __n) __attribute__ ((__nothrow__ ));
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* If BUF is NULL, make STREAM unbuffered.
   Else make it use SIZE bytes of BUF for buffering.  */
extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
         size_t __size) __attribute__ ((__nothrow__ ));
#pragma empty_line
/* Make STREAM line-buffered.  */
extern void setlinebuf (FILE *__stream) __attribute__ ((__nothrow__ ));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Write formatted output to STREAM.
#pragma empty_line
   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int fprintf (FILE *__restrict __stream,
      const char *__restrict __format, ...);
/* Write formatted output to stdout.
#pragma empty_line
   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int printf (const char *__restrict __format, ...);
/* Write formatted output to S.  */
extern int sprintf (char *__restrict __s,
      const char *__restrict __format, ...) __attribute__ ((__nothrow__));
#pragma empty_line
/* Write formatted output to S from argument list ARG.
#pragma empty_line
   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int vfprintf (FILE *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg);
/* Write formatted output to stdout from argument list ARG.
#pragma empty_line
   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int vprintf (const char *__restrict __format, __gnuc_va_list __arg);
/* Write formatted output to S from argument list ARG.  */
extern int vsprintf (char *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg) __attribute__ ((__nothrow__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Maximum chars of output to write in MAXLEN.  */
extern int snprintf (char *__restrict __s, size_t __maxlen,
       const char *__restrict __format, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 4)));
#pragma empty_line
extern int vsnprintf (char *__restrict __s, size_t __maxlen,
        const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 0)));
#pragma line 411 "/usr/include/stdio.h" 3 4
/* Write formatted output to a file descriptor.  */
extern int vdprintf (int __fd, const char *__restrict __fmt,
       __gnuc_va_list __arg)
     __attribute__ ((__format__ (__printf__, 2, 0)));
extern int dprintf (int __fd, const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 2, 3)));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Read formatted input from STREAM.
#pragma empty_line
   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int fscanf (FILE *__restrict __stream,
     const char *__restrict __format, ...) /* Ignore */;
/* Read formatted input from stdin.
#pragma empty_line
   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int scanf (const char *__restrict __format, ...) /* Ignore */;
/* Read formatted input from S.  */
extern int sscanf (const char *__restrict __s,
     const char *__restrict __format, ...) __attribute__ ((__nothrow__ ));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* For strict ISO C99 or POSIX compliance disallow %as, %aS and %a[
   GNU extension which conflicts with valid %a followed by letter
   s, S or [.  */
extern int fscanf (FILE *__restrict __stream, const char *__restrict __format, ...) __asm__ ("" "__isoc99_fscanf") /* Ignore */;
#pragma empty_line
#pragma empty_line
extern int scanf (const char *__restrict __format, ...) __asm__ ("" "__isoc99_scanf") /* Ignore */;
#pragma empty_line
extern int sscanf (const char *__restrict __s, const char *__restrict __format, ...) __asm__ ("" "__isoc99_sscanf") __attribute__ ((__nothrow__ ));
#pragma line 467 "/usr/include/stdio.h" 3 4
/* Read formatted input from S into argument list ARG.
#pragma empty_line
   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int vfscanf (FILE *__restrict __s, const char *__restrict __format,
      __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0))) /* Ignore */;
#pragma empty_line
/* Read formatted input from stdin into argument list ARG.
#pragma empty_line
   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) /* Ignore */;
#pragma empty_line
/* Read formatted input from S into argument list ARG.  */
extern int vsscanf (const char *__restrict __s,
      const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__ )) __attribute__ ((__format__ (__scanf__, 2, 0)));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* For strict ISO C99 or POSIX compliance disallow %as, %aS and %a[
   GNU extension which conflicts with valid %a followed by letter
   s, S or [.  */
extern int vfscanf (FILE *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vfscanf")
#pragma empty_line
#pragma empty_line
#pragma empty_line
     __attribute__ ((__format__ (__scanf__, 2, 0))) /* Ignore */;
extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vscanf")
#pragma empty_line
     __attribute__ ((__format__ (__scanf__, 1, 0))) /* Ignore */;
extern int vsscanf (const char *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vsscanf") __attribute__ ((__nothrow__ ))
#pragma empty_line
#pragma empty_line
#pragma empty_line
     __attribute__ ((__format__ (__scanf__, 2, 0)));
#pragma line 527 "/usr/include/stdio.h" 3 4
/* Read a character from STREAM.
#pragma empty_line
   These functions are possible cancellation points and therefore not
   marked with __THROW.  */
extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);
#pragma empty_line
/* Read a character from stdin.
#pragma empty_line
   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int getchar (void);
#pragma empty_line
#pragma empty_line
/* The C standard explicitly says this is a macro, so we always do the
   optimization for it.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* These are defined in POSIX.1:1996.
#pragma empty_line
   These functions are possible cancellation points and therefore not
   marked with __THROW.  */
extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Faster version when locking is not necessary.
#pragma empty_line
   This function is not part of POSIX and therefore no official
   cancellation point.  But due to similarity with an POSIX interface
   or due to the implementation it is a cancellation point and
   therefore not marked with __THROW.  */
extern int fgetc_unlocked (FILE *__stream);
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Write a character to STREAM.
#pragma empty_line
   These functions are possible cancellation points and therefore not
   marked with __THROW.
#pragma empty_line
   These functions is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);
#pragma empty_line
/* Write a character to stdout.
#pragma empty_line
   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int putchar (int __c);
#pragma empty_line
#pragma empty_line
/* The C standard explicitly says this can be a macro,
   so we always do the optimization for it.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Faster version when locking is not necessary.
#pragma empty_line
   This function is not part of POSIX and therefore no official
   cancellation point.  But due to similarity with an POSIX interface
   or due to the implementation it is a cancellation point and
   therefore not marked with __THROW.  */
extern int fputc_unlocked (int __c, FILE *__stream);
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* These are defined in POSIX.1:1996.
#pragma empty_line
   These functions are possible cancellation points and therefore not
   marked with __THROW.  */
extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Get a word (int) from STREAM.  */
extern int getw (FILE *__stream);
#pragma empty_line
/* Write a word (int) to STREAM.  */
extern int putw (int __w, FILE *__stream);
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Get a newline-terminated string of finite length from STREAM.
#pragma empty_line
   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
     /* Ignore */;
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Get a newline-terminated string from stdin, removing the newline.
   DO NOT USE THIS FUNCTION!!  There is no limit on how much it will read.
#pragma empty_line
   The function has been officially removed in ISO C11.  This opportunity
   is used to also remove it from the GNU feature list.  It is now only
   available when explicitly using an old ISO C, Unix, or POSIX standard.
   GCC defines _GNU_SOURCE when building C++ code and the function is still
   in C++11, so it is also available for C++.
#pragma empty_line
   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern char *gets (char *__s) /* Ignore */ __attribute__ ((__deprecated__));
#pragma line 655 "/usr/include/stdio.h" 3 4
/* Read up to (and including) a DELIMITER from STREAM into *LINEPTR
   (and null-terminate it). *LINEPTR is a pointer returned from malloc (or
   NULL), pointing to *N characters of space.  It is realloc'd as
   necessary.  Returns the number of characters read (not including the
   null terminator), or -1 on error or EOF.
#pragma empty_line
   These functions are not part of POSIX and therefore no official
   cancellation point.  But due to similarity with an POSIX interface
   or due to the implementation they are cancellation points and
   therefore not marked with __THROW.  */
extern __ssize_t __getdelim (char **__restrict __lineptr,
          size_t *__restrict __n, int __delimiter,
          FILE *__restrict __stream) /* Ignore */;
extern __ssize_t getdelim (char **__restrict __lineptr,
        size_t *__restrict __n, int __delimiter,
        FILE *__restrict __stream) /* Ignore */;
#pragma empty_line
/* Like `getdelim', but reads up to a newline.
#pragma empty_line
   This function is not part of POSIX and therefore no official
   cancellation point.  But due to similarity with an POSIX interface
   or due to the implementation it is a cancellation point and
   therefore not marked with __THROW.  */
extern __ssize_t getline (char **__restrict __lineptr,
       size_t *__restrict __n,
       FILE *__restrict __stream) /* Ignore */;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Write a string to STREAM.
#pragma empty_line
   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int fputs (const char *__restrict __s, FILE *__restrict __stream);
#pragma empty_line
/* Write a string, followed by a newline, to stdout.
#pragma empty_line
   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int puts (const char *__s);
#pragma empty_line
#pragma empty_line
/* Push a character back onto the input buffer of STREAM.
#pragma empty_line
   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int ungetc (int __c, FILE *__stream);
#pragma empty_line
#pragma empty_line
/* Read chunks of generic data from STREAM.
#pragma empty_line
   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern size_t fread (void *__restrict __ptr, size_t __size,
       size_t __n, FILE *__restrict __stream) /* Ignore */;
/* Write chunks of generic data to STREAM.
#pragma empty_line
   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern size_t fwrite (const void *__restrict __ptr, size_t __size,
        size_t __n, FILE *__restrict __s);
#pragma line 731 "/usr/include/stdio.h" 3 4
/* Faster versions when locking is not necessary.
#pragma empty_line
   These functions are not part of POSIX and therefore no official
   cancellation point.  But due to similarity with an POSIX interface
   or due to the implementation they are cancellation points and
   therefore not marked with __THROW.  */
extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
         size_t __n, FILE *__restrict __stream) /* Ignore */;
extern size_t fwrite_unlocked (const void *__restrict __ptr, size_t __size,
          size_t __n, FILE *__restrict __stream);
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Seek to a certain position on STREAM.
#pragma empty_line
   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int fseek (FILE *__stream, long int __off, int __whence);
/* Return the current position of STREAM.
#pragma empty_line
   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern long int ftell (FILE *__stream) /* Ignore */;
/* Rewind to the beginning of STREAM.
#pragma empty_line
   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern void rewind (FILE *__stream);
#pragma empty_line
#pragma empty_line
/* The Single Unix Specification, Version 2, specifies an alternative,
   more adequate interface for the two functions above which deal with
   file offset.  `long int' is not the right type.  These definitions
   are originally defined in the Large File Support API.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Seek to a certain position on STREAM.
#pragma empty_line
   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int fseeko (FILE *__stream, __off_t __off, int __whence);
/* Return the current position of STREAM.
#pragma empty_line
   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern __off_t ftello (FILE *__stream) /* Ignore */;
#pragma line 794 "/usr/include/stdio.h" 3 4
/* Get STREAM's position.
#pragma empty_line
   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos);
/* Set STREAM's position.
#pragma empty_line
   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int fsetpos (FILE *__stream, const fpos_t *__pos);
#pragma line 825 "/usr/include/stdio.h" 3 4
/* Clear the error and EOF indicators for STREAM.  */
extern void clearerr (FILE *__stream) __attribute__ ((__nothrow__ ));
/* Return the EOF indicator for STREAM.  */
extern int feof (FILE *__stream) __attribute__ ((__nothrow__ )) /* Ignore */;
/* Return the error indicator for STREAM.  */
extern int ferror (FILE *__stream) __attribute__ ((__nothrow__ )) /* Ignore */;
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Faster versions when locking is not required.  */
extern void clearerr_unlocked (FILE *__stream) __attribute__ ((__nothrow__ ));
extern int feof_unlocked (FILE *__stream) __attribute__ ((__nothrow__ )) /* Ignore */;
extern int ferror_unlocked (FILE *__stream) __attribute__ ((__nothrow__ )) /* Ignore */;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Print a message describing the meaning of the value of errno.
#pragma empty_line
   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern void perror (const char *__s);
#pragma empty_line
#pragma empty_line
/* Provide the declarations for `sys_errlist' and `sys_nerr' if they
   are available on this system.  Even if available, these variables
   should not be used directly.  The `strerror' function provides
   all the necessary functionality.  */
#pragma empty_line
#pragma line 1 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 1 3 4
/* Declare sys_errlist and sys_nerr, or don't.  Compatibility (do) version.
   Copyright (C) 2002-2016 Free Software Foundation, Inc.
   This file is part of the GNU C Library.
#pragma empty_line
   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.
#pragma empty_line
   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.
#pragma empty_line
   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* sys_errlist and sys_nerr are deprecated.  Use strerror instead.  */
#pragma empty_line
#pragma empty_line
extern int sys_nerr;
extern const char *const sys_errlist[];
#pragma line 854 "/usr/include/stdio.h" 2 3 4
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Return the system file descriptor for STREAM.  */
extern int fileno (FILE *__stream) __attribute__ ((__nothrow__ )) /* Ignore */;
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Faster version when locking is not required.  */
extern int fileno_unlocked (FILE *__stream) __attribute__ ((__nothrow__ )) /* Ignore */;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Create a new stream connected to a pipe running the given command.
#pragma empty_line
   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern FILE *popen (const char *__command, const char *__modes) /* Ignore */;
#pragma empty_line
/* Close a stream opened by popen and return the status of its child.
#pragma empty_line
   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int pclose (FILE *__stream);
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Return the name of the controlling terminal.  */
extern char *ctermid (char *__s) __attribute__ ((__nothrow__ ));
#pragma line 909 "/usr/include/stdio.h" 3 4
/* These are defined in POSIX.1:1996.  */
#pragma empty_line
/* Acquire ownership of STREAM.  */
extern void flockfile (FILE *__stream) __attribute__ ((__nothrow__ ));
#pragma empty_line
/* Try to acquire ownership of STREAM but do not block if it is not
   possible.  */
extern int ftrylockfile (FILE *__stream) __attribute__ ((__nothrow__ )) /* Ignore */;
#pragma empty_line
/* Relinquish the ownership granted for STREAM.  */
extern void funlockfile (FILE *__stream) __attribute__ ((__nothrow__ ));
#pragma line 930 "/usr/include/stdio.h" 3 4
/* If we are compiling with optimizing read this file.  It contains
   several optimizing inline functions and macros.  */
#pragma line 13 "floyd-warshall.c" 2
#pragma line 1 "/usr/include/unistd.h" 1 3 4
/* Copyright (C) 1991-2016 Free Software Foundation, Inc.
   This file is part of the GNU C Library.
#pragma empty_line
   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.
#pragma empty_line
   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.
#pragma empty_line
   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */
#pragma empty_line
/*
 *	POSIX Standard: 2.10 Symbolic Constants		<unistd.h>
 */
#pragma line 29 "/usr/include/unistd.h" 3 4
/* These may be used to determine what facilities are present at compile time.
   Their values can be obtained at run time from `sysconf'.  */
#pragma empty_line
#pragma empty_line
/* POSIX Standard approved as ISO/IEC 9945-1 as of September 2008.  */
#pragma line 49 "/usr/include/unistd.h" 3 4
/* These are not #ifdef __USE_POSIX2 because they are
   in the theoretically application-owned namespace.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* The utilities on GNU systems also correspond to this version.  */
#pragma line 66 "/usr/include/unistd.h" 3 4
/* The utilities on GNU systems also correspond to this version.  */
#pragma empty_line
#pragma empty_line
/* This symbol was required until the 2001 edition of POSIX.  */
#pragma empty_line
#pragma empty_line
/* If defined, the implementation supports the
   C Language Bindings Option.  */
#pragma empty_line
#pragma empty_line
/* If defined, the implementation supports the
   C Language Development Utilities Option.  */
#pragma empty_line
#pragma empty_line
/* If defined, the implementation supports the
   Software Development Utilities Option.  */
#pragma empty_line
#pragma empty_line
/* If defined, the implementation supports the
   creation of locales with the localedef utility.  */
#pragma empty_line
#pragma empty_line
/* X/Open version number to which the library conforms.  It is selectable.  */
#pragma line 99 "/usr/include/unistd.h" 3 4
/* Commands and utilities from XPG4 are available.  */
#pragma empty_line
#pragma empty_line
/* We are compatible with the old published standards as well.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* The X/Open Unix extensions are available.  */
#pragma empty_line
#pragma empty_line
/* Encryption is present.  */
#pragma empty_line
#pragma empty_line
/* The enhanced internationalization capabilities according to XPG4.2
   are present.  */
#pragma empty_line
#pragma empty_line
/* The legacy interfaces are also available.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Get values of POSIX options:
#pragma empty_line
   If these symbols are defined, the corresponding features are
   always available.  If not, they may be available sometimes.
   The current values can be obtained with `sysconf'.
#pragma empty_line
   _POSIX_JOB_CONTROL		Job control is supported.
   _POSIX_SAVED_IDS		Processes have a saved set-user-ID
				and a saved set-group-ID.
   _POSIX_REALTIME_SIGNALS	Real-time, queued signals are supported.
   _POSIX_PRIORITY_SCHEDULING	Priority scheduling is supported.
   _POSIX_TIMERS		POSIX.4 clocks and timers are supported.
   _POSIX_ASYNCHRONOUS_IO	Asynchronous I/O is supported.
   _POSIX_PRIORITIZED_IO	Prioritized asynchronous I/O is supported.
   _POSIX_SYNCHRONIZED_IO	Synchronizing file data is supported.
   _POSIX_FSYNC			The fsync function is present.
   _POSIX_MAPPED_FILES		Mapping of files to memory is supported.
   _POSIX_MEMLOCK		Locking of all memory is supported.
   _POSIX_MEMLOCK_RANGE		Locking of ranges of memory is supported.
   _POSIX_MEMORY_PROTECTION	Setting of memory protections is supported.
   _POSIX_MESSAGE_PASSING	POSIX.4 message queues are supported.
   _POSIX_SEMAPHORES		POSIX.4 counting semaphores are supported.
   _POSIX_SHARED_MEMORY_OBJECTS	POSIX.4 shared memory objects are supported.
   _POSIX_THREADS		POSIX.1c pthreads are supported.
   _POSIX_THREAD_ATTR_STACKADDR	Thread stack address attribute option supported.
   _POSIX_THREAD_ATTR_STACKSIZE	Thread stack size attribute option supported.
   _POSIX_THREAD_SAFE_FUNCTIONS	Thread-safe functions are supported.
   _POSIX_THREAD_PRIORITY_SCHEDULING
				POSIX.1c thread execution scheduling supported.
   _POSIX_THREAD_PRIO_INHERIT	Thread priority inheritance option supported.
   _POSIX_THREAD_PRIO_PROTECT	Thread priority protection option supported.
   _POSIX_THREAD_PROCESS_SHARED	Process-shared synchronization supported.
   _POSIX_PII			Protocol-independent interfaces are supported.
   _POSIX_PII_XTI		XTI protocol-indep. interfaces are supported.
   _POSIX_PII_SOCKET		Socket protocol-indep. interfaces are supported.
   _POSIX_PII_INTERNET		Internet family of protocols supported.
   _POSIX_PII_INTERNET_STREAM	Connection-mode Internet protocol supported.
   _POSIX_PII_INTERNET_DGRAM	Connectionless Internet protocol supported.
   _POSIX_PII_OSI		ISO/OSI family of protocols supported.
   _POSIX_PII_OSI_COTS		Connection-mode ISO/OSI service supported.
   _POSIX_PII_OSI_CLTS		Connectionless ISO/OSI service supported.
   _POSIX_POLL			Implementation supports `poll' function.
   _POSIX_SELECT		Implementation supports `select' and `pselect'.
#pragma empty_line
   _XOPEN_REALTIME		X/Open realtime support is available.
   _XOPEN_REALTIME_THREADS	X/Open realtime thread support is available.
   _XOPEN_SHM			Shared memory interface according to XPG4.2.
#pragma empty_line
   _XBS5_ILP32_OFF32		Implementation provides environment with 32-bit
				int, long, pointer, and off_t types.
   _XBS5_ILP32_OFFBIG		Implementation provides environment with 32-bit
				int, long, and pointer and off_t with at least
				64 bits.
   _XBS5_LP64_OFF64		Implementation provides environment with 32-bit
				int, and 64-bit long, pointer, and off_t types.
   _XBS5_LPBIG_OFFBIG		Implementation provides environment with at
				least 32 bits int and long, pointer, and off_t
				with at least 64 bits.
#pragma empty_line
   If any of these symbols is defined as -1, the corresponding option is not
   true for any file.  If any is defined as other than -1, the corresponding
   option is true for all files.  If a symbol is not defined at all, the value
   for a specific file can be obtained from `pathconf' and `fpathconf'.
#pragma empty_line
   _POSIX_CHOWN_RESTRICTED	Only the super user can use `chown' to change
				the owner of a file.  `chown' can only be used
				to change the group ID of a file to a group of
				which the calling process is a member.
   _POSIX_NO_TRUNC		Pathname components longer than
				NAME_MAX generate an error.
   _POSIX_VDISABLE		If defined, if the value of an element of the
				`c_cc' member of `struct termios' is
				_POSIX_VDISABLE, no character will have the
				effect associated with that element.
   _POSIX_SYNC_IO		Synchronous I/O may be performed.
   _POSIX_ASYNC_IO		Asynchronous I/O may be performed.
   _POSIX_PRIO_IO		Prioritized Asynchronous I/O may be performed.
#pragma empty_line
   Support for the Large File Support interface is not generally available.
   If it is available the following constants are defined to one.
   _LFS64_LARGEFILE		Low-level I/O supports large files.
   _LFS64_STDIO			Standard I/O supports large files.
   */
#pragma empty_line
#pragma empty_line
#pragma line 1 "/usr/include/x86_64-linux-gnu/bits/posix_opt.h" 1 3 4
/* Define POSIX options for Linux.
   Copyright (C) 1996-2016 Free Software Foundation, Inc.
   This file is part of the GNU C Library.
#pragma empty_line
   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public License as
   published by the Free Software Foundation; either version 2.1 of the
   License, or (at your option) any later version.
#pragma empty_line
   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.
#pragma empty_line
   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; see the file COPYING.LIB.  If
   not, see <http://www.gnu.org/licenses/>.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Job control is supported.  */
#pragma empty_line
#pragma empty_line
/* Processes have a saved set-user-ID and a saved set-group-ID.  */
#pragma empty_line
#pragma empty_line
/* Priority scheduling is supported.  */
#pragma empty_line
#pragma empty_line
/* Synchronizing file data is supported.  */
#pragma empty_line
#pragma empty_line
/* The fsync function is present.  */
#pragma empty_line
#pragma empty_line
/* Mapping of files to memory is supported.  */
#pragma empty_line
#pragma empty_line
/* Locking of all memory is supported.  */
#pragma empty_line
#pragma empty_line
/* Locking of ranges of memory is supported.  */
#pragma empty_line
#pragma empty_line
/* Setting of memory protections is supported.  */
#pragma empty_line
#pragma empty_line
/* Some filesystems allow all users to change file ownership.  */
#pragma empty_line
#pragma empty_line
/* `c_cc' member of 'struct termios' structure can be disabled by
   using the value _POSIX_VDISABLE.  */
#pragma empty_line
#pragma empty_line
/* Filenames are not silently truncated.  */
#pragma empty_line
#pragma empty_line
/* X/Open realtime support is available.  */
#pragma empty_line
#pragma empty_line
/* X/Open thread realtime support is available.  */
#pragma empty_line
#pragma empty_line
/* XPG4.2 shared memory is supported.  */
#pragma empty_line
#pragma empty_line
/* Tell we have POSIX threads.  */
#pragma empty_line
#pragma empty_line
/* We have the reentrant functions described in POSIX.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* We provide priority scheduling for threads.  */
#pragma empty_line
#pragma empty_line
/* We support user-defined stack sizes.  */
#pragma empty_line
#pragma empty_line
/* We support user-defined stacks.  */
#pragma empty_line
#pragma empty_line
/* We support priority inheritence.  */
#pragma empty_line
#pragma empty_line
/* We support priority protection, though only for non-robust
   mutexes.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* We support priority inheritence for robust mutexes.  */
#pragma empty_line
#pragma empty_line
/* We do not support priority protection for robust mutexes.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* We support POSIX.1b semaphores.  */
#pragma empty_line
#pragma empty_line
/* Real-time signals are supported.  */
#pragma empty_line
#pragma empty_line
/* We support asynchronous I/O.  */
#pragma empty_line
#pragma empty_line
/* Alternative name for Unix98.  */
#pragma empty_line
/* Support for prioritization is also available.  */
#pragma empty_line
#pragma empty_line
/* The LFS support in asynchronous I/O is also available.  */
#pragma empty_line
#pragma empty_line
/* The rest of the LFS is also available.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* POSIX shared memory objects are implemented.  */
#pragma empty_line
#pragma empty_line
/* CPU-time clocks support needs to be checked at runtime.  */
#pragma empty_line
#pragma empty_line
/* Clock support in threads must be also checked at runtime.  */
#pragma empty_line
#pragma empty_line
/* GNU libc provides regular expression handling.  */
#pragma empty_line
#pragma empty_line
/* Reader/Writer locks are available.  */
#pragma empty_line
#pragma empty_line
/* We have a POSIX shell.  */
#pragma empty_line
#pragma empty_line
/* We support the Timeouts option.  */
#pragma empty_line
#pragma empty_line
/* We support spinlocks.  */
#pragma empty_line
#pragma empty_line
/* The `spawn' function family is supported.  */
#pragma empty_line
#pragma empty_line
/* We have POSIX timers.  */
#pragma empty_line
#pragma empty_line
/* The barrier functions are available.  */
#pragma empty_line
#pragma empty_line
/* POSIX message queues are available.  */
#pragma empty_line
#pragma empty_line
/* Thread process-shared synchronization is supported.  */
#pragma empty_line
#pragma empty_line
/* The monotonic clock might be available.  */
#pragma empty_line
#pragma empty_line
/* The clock selection interfaces are available.  */
#pragma empty_line
#pragma empty_line
/* Advisory information interfaces are available.  */
#pragma empty_line
#pragma empty_line
/* IPv6 support is available.  */
#pragma empty_line
#pragma empty_line
/* Raw socket support is available.  */
#pragma empty_line
#pragma empty_line
/* We have at least one terminal.  */
#pragma empty_line
#pragma empty_line
/* Neither process nor thread sporadic server interfaces is available.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* trace.h is not available.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Typed memory objects are not available.  */
#pragma line 206 "/usr/include/unistd.h" 2 3 4
#pragma empty_line
/* Get the environment definitions from Unix98.  */
#pragma empty_line
#pragma empty_line
#pragma line 1 "/usr/include/x86_64-linux-gnu/bits/environments.h" 1 3 4
/* Copyright (C) 1999-2016 Free Software Foundation, Inc.
   This file is part of the GNU C Library.
#pragma empty_line
   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.
#pragma empty_line
   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.
#pragma empty_line
   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
/* Determine the wordsize from the preprocessor defines.  */
#pragma line 11 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 3 4
/* Both x86-64 and x32 use the 64-bit system call interface.  */
#pragma line 23 "/usr/include/x86_64-linux-gnu/bits/environments.h" 2 3 4
#pragma empty_line
/* This header should define the following symbols under the described
   situations.  A value `1' means that the model is always supported,
   `-1' means it is never supported.  Undefined means it cannot be
   statically decided.
#pragma empty_line
   _POSIX_V7_ILP32_OFF32   32bit int, long, pointers, and off_t type
   _POSIX_V7_ILP32_OFFBIG  32bit int, long, and pointers and larger off_t type
#pragma empty_line
   _POSIX_V7_LP64_OFF32	   64bit long and pointers and 32bit off_t type
   _POSIX_V7_LPBIG_OFFBIG  64bit long and pointers and large off_t type
#pragma empty_line
   The macros _POSIX_V6_ILP32_OFF32, _POSIX_V6_ILP32_OFFBIG,
   _POSIX_V6_LP64_OFF32, _POSIX_V6_LPBIG_OFFBIG, _XBS5_ILP32_OFF32,
   _XBS5_ILP32_OFFBIG, _XBS5_LP64_OFF32, and _XBS5_LPBIG_OFFBIG were
   used in previous versions of the Unix standard and are available
   only for compatibility.
*/
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Environments with 32-bit wide pointers are optionally provided.
   Therefore following macros aren't defined:
   # undef _POSIX_V7_ILP32_OFF32
   # undef _POSIX_V7_ILP32_OFFBIG
   # undef _POSIX_V6_ILP32_OFF32
   # undef _POSIX_V6_ILP32_OFFBIG
   # undef _XBS5_ILP32_OFF32
   # undef _XBS5_ILP32_OFFBIG
   and users need to check at runtime.  */
#pragma empty_line
/* We also have no use (for now) for an environment with bigger pointers
   and offsets.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* By default we have 64-bit wide `long int', pointers and `off_t'.  */
#pragma line 210 "/usr/include/unistd.h" 2 3 4
#pragma empty_line
#pragma empty_line
/* Standard file descriptors.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* All functions that are not declared anywhere else.  */
#pragma line 229 "/usr/include/unistd.h" 3 4
#pragma line 1 "/opt/Xilinx/Vivado_HLS/2016.4/lnx64/tools/clang/bin/../lib/clang/3.1/include/stddef.h" 1 3 4
/*===---- stddef.h - Basic type definitions --------------------------------===
 *
 * Copyright (c) 2008 Eli Friedman
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 *===-----------------------------------------------------------------------===
 */
#pragma line 56 "/opt/Xilinx/Vivado_HLS/2016.4/lnx64/tools/clang/bin/../lib/clang/3.1/include/stddef.h" 3 4
/* Some C libraries expect to see a wint_t here. Others (notably MinGW) will use
__WINT_TYPE__ directly; accommodate both by requiring __need_wint_t */
#pragma line 230 "/usr/include/unistd.h" 2 3 4
#pragma empty_line
#pragma empty_line
/* The Single Unix specification says that some more types are
   available here.  */
#pragma empty_line
typedef __gid_t gid_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef __uid_t uid_t;
#pragma line 258 "/usr/include/unistd.h" 3 4
typedef __useconds_t useconds_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef __pid_t pid_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef __intptr_t intptr_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef __socklen_t socklen_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Values for the second argument to access.
   These may be OR'd together.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Test for access to NAME using the real UID and real GID.  */
extern int access (const char *__name, int __type) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));
#pragma line 304 "/usr/include/unistd.h" 3 4
/* Test for access to FILE relative to the directory FD is open on.
   If AT_EACCESS is set in FLAG, then use effective IDs like `eaccess',
   otherwise use real IDs like `access'.  */
extern int faccessat (int __fd, const char *__file, int __type, int __flag)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2))) /* Ignore */;
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Values for the WHENCE argument to lseek.  */
#pragma line 324 "/usr/include/unistd.h" 3 4
/* Old BSD names for the same constants; just for compatibility.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Move FD's file position to OFFSET bytes from the
   beginning of the file (if WHENCE is SEEK_SET),
   the current position (if WHENCE is SEEK_CUR),
   or the end of the file (if WHENCE is SEEK_END).
   Return the new file position.  */
#pragma empty_line
extern __off_t lseek (int __fd, __off_t __offset, int __whence) __attribute__ ((__nothrow__ ));
#pragma line 352 "/usr/include/unistd.h" 3 4
/* Close the file descriptor FD.
#pragma empty_line
   This function is a cancellation point and therefore not marked with
   __THROW.  */
extern int close (int __fd);
#pragma empty_line
/* Read NBYTES into BUF from FD.  Return the
   number read, -1 for errors or 0 for EOF.
#pragma empty_line
   This function is a cancellation point and therefore not marked with
   __THROW.  */
extern ssize_t read (int __fd, void *__buf, size_t __nbytes) /* Ignore */;
#pragma empty_line
/* Write N bytes of BUF to FD.  Return the number written, or -1.
#pragma empty_line
   This function is a cancellation point and therefore not marked with
   __THROW.  */
extern ssize_t write (int __fd, const void *__buf, size_t __n) /* Ignore */;
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Read NBYTES into BUF from FD at the given position OFFSET without
   changing the file pointer.  Return the number read, -1 for errors
   or 0 for EOF.
#pragma empty_line
   This function is a cancellation point and therefore not marked with
   __THROW.  */
extern ssize_t pread (int __fd, void *__buf, size_t __nbytes,
        __off_t __offset) /* Ignore */;
#pragma empty_line
/* Write N bytes of BUF to FD at the given position OFFSET without
   changing the file pointer.  Return the number written, or -1.
#pragma empty_line
   This function is a cancellation point and therefore not marked with
   __THROW.  */
extern ssize_t pwrite (int __fd, const void *__buf, size_t __n,
         __off_t __offset) /* Ignore */;
#pragma line 416 "/usr/include/unistd.h" 3 4
/* Create a one-way communication channel (pipe).
   If successful, two file descriptors are stored in PIPEDES;
   bytes written on PIPEDES[1] can be read from PIPEDES[0].
   Returns 0 if successful, -1 if not.  */
extern int pipe (int __pipedes[2]) __attribute__ ((__nothrow__ )) /* Ignore */;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Schedule an alarm.  In SECONDS seconds, the process will get a SIGALRM.
   If SECONDS is zero, any currently scheduled alarm will be cancelled.
   The function returns the number of seconds remaining until the last
   alarm scheduled would have signaled, or zero if there wasn't one.
   There is no return value to indicate an error, but you can set `errno'
   to 0 and check its value after calling `alarm', and this might tell you.
   The signal may come late due to processor scheduling.  */
extern unsigned int alarm (unsigned int __seconds) __attribute__ ((__nothrow__ ));
#pragma empty_line
/* Make the process sleep for SECONDS seconds, or until a signal arrives
   and is not ignored.  The function returns the number of seconds less
   than SECONDS which it actually slept (thus zero if it slept the full time).
   If a signal handler does a `longjmp' or modifies the handling of the
   SIGALRM signal while inside `sleep' call, the handling of the SIGALRM
   signal afterwards is undefined.  There is no return value to indicate
   error, but if `sleep' returns SECONDS, it probably didn't work.
#pragma empty_line
   This function is a cancellation point and therefore not marked with
   __THROW.  */
extern unsigned int sleep (unsigned int __seconds);
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Set an alarm to go off (generating a SIGALRM signal) in VALUE
   microseconds.  If INTERVAL is nonzero, when the alarm goes off, the
   timer is reset to go off every INTERVAL microseconds thereafter.
   Returns the number of microseconds remaining before the alarm.  */
extern __useconds_t ualarm (__useconds_t __value, __useconds_t __interval)
     __attribute__ ((__nothrow__ ));
#pragma empty_line
/* Sleep USECONDS microseconds, or until a signal arrives that is not blocked
   or ignored.
#pragma empty_line
   This function is a cancellation point and therefore not marked with
   __THROW.  */
extern int usleep (__useconds_t __useconds);
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Suspend the process until a signal arrives.
   This always returns -1 and sets `errno' to EINTR.
#pragma empty_line
   This function is a cancellation point and therefore not marked with
   __THROW.  */
extern int pause (void);
#pragma empty_line
#pragma empty_line
/* Change the owner and group of FILE.  */
extern int chown (const char *__file, __uid_t __owner, __gid_t __group)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1))) /* Ignore */;
#pragma empty_line
#pragma empty_line
/* Change the owner and group of the file that FD is open on.  */
extern int fchown (int __fd, __uid_t __owner, __gid_t __group) __attribute__ ((__nothrow__ )) /* Ignore */;
#pragma empty_line
#pragma empty_line
/* Change owner and group of FILE, if it is a symbolic
   link the ownership of the symbolic link is changed.  */
extern int lchown (const char *__file, __uid_t __owner, __gid_t __group)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1))) /* Ignore */;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Change the owner and group of FILE relative to the directory FD is open
   on.  */
extern int fchownat (int __fd, const char *__file, __uid_t __owner,
       __gid_t __group, int __flag)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2))) /* Ignore */;
#pragma empty_line
#pragma empty_line
/* Change the process's working directory to PATH.  */
extern int chdir (const char *__path) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1))) /* Ignore */;
#pragma empty_line
#pragma empty_line
/* Change the process's working directory to the one FD is open on.  */
extern int fchdir (int __fd) __attribute__ ((__nothrow__ )) /* Ignore */;
#pragma empty_line
#pragma empty_line
/* Get the pathname of the current working directory,
   and put it in SIZE bytes of BUF.  Returns NULL if the
   directory couldn't be determined or SIZE was too small.
   If successful, returns BUF.  In GNU, if BUF is NULL,
   an array is allocated with `malloc'; the array is SIZE
   bytes long, unless SIZE == 0, in which case it is as
   big as necessary.  */
extern char *getcwd (char *__buf, size_t __size) __attribute__ ((__nothrow__ )) /* Ignore */;
#pragma line 525 "/usr/include/unistd.h" 3 4
/* Put the absolute pathname of the current working directory in BUF.
   If successful, return BUF.  If not, put an error message in
   BUF and return NULL.  BUF should be at least PATH_MAX bytes long.  */
extern char *getwd (char *__buf)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1))) __attribute__ ((__deprecated__)) /* Ignore */;
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Duplicate FD, returning a new file descriptor on the same file.  */
extern int dup (int __fd) __attribute__ ((__nothrow__ )) /* Ignore */;
#pragma empty_line
/* Duplicate FD to FD2, closing FD2 and making it open on the same file.  */
extern int dup2 (int __fd, int __fd2) __attribute__ ((__nothrow__ ));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* NULL-terminated array of "NAME=VALUE" environment variables.  */
extern char **__environ;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Replace the current process, executing PATH with arguments ARGV and
   environment ENVP.  ARGV and ENVP are terminated by NULL pointers.  */
extern int execve (const char *__path, char *const __argv[],
     char *const __envp[]) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
#pragma empty_line
#pragma empty_line
/* Execute the file FD refers to, overlaying the running program image.
   ARGV and ENVP are passed to the new program, as for `execve'.  */
extern int fexecve (int __fd, char *const __argv[], char *const __envp[])
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Execute PATH with arguments ARGV and environment from `environ'.  */
extern int execv (const char *__path, char *const __argv[])
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
#pragma empty_line
/* Execute PATH with all arguments after PATH until a NULL pointer,
   and the argument after that for environment.  */
extern int execle (const char *__path, const char *__arg, ...)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
#pragma empty_line
/* Execute PATH with all arguments after PATH until
   a NULL pointer and environment from `environ'.  */
extern int execl (const char *__path, const char *__arg, ...)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
#pragma empty_line
/* Execute FILE, searching in the `PATH' environment variable if it contains
   no slashes, with arguments ARGV and environment from `environ'.  */
extern int execvp (const char *__file, char *const __argv[])
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
#pragma empty_line
/* Execute FILE, searching in the `PATH' environment variable if
   it contains no slashes, with all arguments after FILE until a
   NULL pointer and environment from `environ'.  */
extern int execlp (const char *__file, const char *__arg, ...)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
#pragma line 600 "/usr/include/unistd.h" 3 4
/* Add INC to priority of the current process.  */
extern int nice (int __inc) __attribute__ ((__nothrow__ )) /* Ignore */;
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Terminate program execution with the low-order 8 bits of STATUS.  */
extern void _exit (int __status) __attribute__ ((__noreturn__));
#pragma empty_line
#pragma empty_line
/* Get the `_PC_*' symbols for the NAME argument to `pathconf' and `fpathconf';
   the `_SC_*' symbols for the NAME argument to `sysconf';
   and the `_CS_*' symbols for the NAME argument to `confstr'.  */
#pragma empty_line
#pragma line 1 "/usr/include/x86_64-linux-gnu/bits/confname.h" 1 3 4
/* `sysconf', `pathconf', and `confstr' NAME values.  Generic version.
   Copyright (C) 1993-2016 Free Software Foundation, Inc.
   This file is part of the GNU C Library.
#pragma empty_line
   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.
#pragma empty_line
   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.
#pragma empty_line
   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Values for the NAME argument to `pathconf' and `fpathconf'.  */
enum
  {
    _PC_LINK_MAX,
#pragma empty_line
    _PC_MAX_CANON,
#pragma empty_line
    _PC_MAX_INPUT,
#pragma empty_line
    _PC_NAME_MAX,
#pragma empty_line
    _PC_PATH_MAX,
#pragma empty_line
    _PC_PIPE_BUF,
#pragma empty_line
    _PC_CHOWN_RESTRICTED,
#pragma empty_line
    _PC_NO_TRUNC,
#pragma empty_line
    _PC_VDISABLE,
#pragma empty_line
    _PC_SYNC_IO,
#pragma empty_line
    _PC_ASYNC_IO,
#pragma empty_line
    _PC_PRIO_IO,
#pragma empty_line
    _PC_SOCK_MAXBUF,
#pragma empty_line
    _PC_FILESIZEBITS,
#pragma empty_line
    _PC_REC_INCR_XFER_SIZE,
#pragma empty_line
    _PC_REC_MAX_XFER_SIZE,
#pragma empty_line
    _PC_REC_MIN_XFER_SIZE,
#pragma empty_line
    _PC_REC_XFER_ALIGN,
#pragma empty_line
    _PC_ALLOC_SIZE_MIN,
#pragma empty_line
    _PC_SYMLINK_MAX,
#pragma empty_line
    _PC_2_SYMLINKS
#pragma empty_line
  };
#pragma empty_line
/* Values for the argument to `sysconf'.  */
enum
  {
    _SC_ARG_MAX,
#pragma empty_line
    _SC_CHILD_MAX,
#pragma empty_line
    _SC_CLK_TCK,
#pragma empty_line
    _SC_NGROUPS_MAX,
#pragma empty_line
    _SC_OPEN_MAX,
#pragma empty_line
    _SC_STREAM_MAX,
#pragma empty_line
    _SC_TZNAME_MAX,
#pragma empty_line
    _SC_JOB_CONTROL,
#pragma empty_line
    _SC_SAVED_IDS,
#pragma empty_line
    _SC_REALTIME_SIGNALS,
#pragma empty_line
    _SC_PRIORITY_SCHEDULING,
#pragma empty_line
    _SC_TIMERS,
#pragma empty_line
    _SC_ASYNCHRONOUS_IO,
#pragma empty_line
    _SC_PRIORITIZED_IO,
#pragma empty_line
    _SC_SYNCHRONIZED_IO,
#pragma empty_line
    _SC_FSYNC,
#pragma empty_line
    _SC_MAPPED_FILES,
#pragma empty_line
    _SC_MEMLOCK,
#pragma empty_line
    _SC_MEMLOCK_RANGE,
#pragma empty_line
    _SC_MEMORY_PROTECTION,
#pragma empty_line
    _SC_MESSAGE_PASSING,
#pragma empty_line
    _SC_SEMAPHORES,
#pragma empty_line
    _SC_SHARED_MEMORY_OBJECTS,
#pragma empty_line
    _SC_AIO_LISTIO_MAX,
#pragma empty_line
    _SC_AIO_MAX,
#pragma empty_line
    _SC_AIO_PRIO_DELTA_MAX,
#pragma empty_line
    _SC_DELAYTIMER_MAX,
#pragma empty_line
    _SC_MQ_OPEN_MAX,
#pragma empty_line
    _SC_MQ_PRIO_MAX,
#pragma empty_line
    _SC_VERSION,
#pragma empty_line
    _SC_PAGESIZE,
#pragma empty_line
#pragma empty_line
    _SC_RTSIG_MAX,
#pragma empty_line
    _SC_SEM_NSEMS_MAX,
#pragma empty_line
    _SC_SEM_VALUE_MAX,
#pragma empty_line
    _SC_SIGQUEUE_MAX,
#pragma empty_line
    _SC_TIMER_MAX,
#pragma empty_line
#pragma empty_line
    /* Values for the argument to `sysconf'
       corresponding to _POSIX2_* symbols.  */
    _SC_BC_BASE_MAX,
#pragma empty_line
    _SC_BC_DIM_MAX,
#pragma empty_line
    _SC_BC_SCALE_MAX,
#pragma empty_line
    _SC_BC_STRING_MAX,
#pragma empty_line
    _SC_COLL_WEIGHTS_MAX,
#pragma empty_line
    _SC_EQUIV_CLASS_MAX,
#pragma empty_line
    _SC_EXPR_NEST_MAX,
#pragma empty_line
    _SC_LINE_MAX,
#pragma empty_line
    _SC_RE_DUP_MAX,
#pragma empty_line
    _SC_CHARCLASS_NAME_MAX,
#pragma empty_line
#pragma empty_line
    _SC_2_VERSION,
#pragma empty_line
    _SC_2_C_BIND,
#pragma empty_line
    _SC_2_C_DEV,
#pragma empty_line
    _SC_2_FORT_DEV,
#pragma empty_line
    _SC_2_FORT_RUN,
#pragma empty_line
    _SC_2_SW_DEV,
#pragma empty_line
    _SC_2_LOCALEDEF,
#pragma empty_line
#pragma empty_line
    _SC_PII,
#pragma empty_line
    _SC_PII_XTI,
#pragma empty_line
    _SC_PII_SOCKET,
#pragma empty_line
    _SC_PII_INTERNET,
#pragma empty_line
    _SC_PII_OSI,
#pragma empty_line
    _SC_POLL,
#pragma empty_line
    _SC_SELECT,
#pragma empty_line
    _SC_UIO_MAXIOV,
#pragma empty_line
    _SC_IOV_MAX = _SC_UIO_MAXIOV,
#pragma empty_line
    _SC_PII_INTERNET_STREAM,
#pragma empty_line
    _SC_PII_INTERNET_DGRAM,
#pragma empty_line
    _SC_PII_OSI_COTS,
#pragma empty_line
    _SC_PII_OSI_CLTS,
#pragma empty_line
    _SC_PII_OSI_M,
#pragma empty_line
    _SC_T_IOV_MAX,
#pragma empty_line
#pragma empty_line
    /* Values according to POSIX 1003.1c (POSIX threads).  */
    _SC_THREADS,
#pragma empty_line
    _SC_THREAD_SAFE_FUNCTIONS,
#pragma empty_line
    _SC_GETGR_R_SIZE_MAX,
#pragma empty_line
    _SC_GETPW_R_SIZE_MAX,
#pragma empty_line
    _SC_LOGIN_NAME_MAX,
#pragma empty_line
    _SC_TTY_NAME_MAX,
#pragma empty_line
    _SC_THREAD_DESTRUCTOR_ITERATIONS,
#pragma empty_line
    _SC_THREAD_KEYS_MAX,
#pragma empty_line
    _SC_THREAD_STACK_MIN,
#pragma empty_line
    _SC_THREAD_THREADS_MAX,
#pragma empty_line
    _SC_THREAD_ATTR_STACKADDR,
#pragma empty_line
    _SC_THREAD_ATTR_STACKSIZE,
#pragma empty_line
    _SC_THREAD_PRIORITY_SCHEDULING,
#pragma empty_line
    _SC_THREAD_PRIO_INHERIT,
#pragma empty_line
    _SC_THREAD_PRIO_PROTECT,
#pragma empty_line
    _SC_THREAD_PROCESS_SHARED,
#pragma empty_line
#pragma empty_line
    _SC_NPROCESSORS_CONF,
#pragma empty_line
    _SC_NPROCESSORS_ONLN,
#pragma empty_line
    _SC_PHYS_PAGES,
#pragma empty_line
    _SC_AVPHYS_PAGES,
#pragma empty_line
    _SC_ATEXIT_MAX,
#pragma empty_line
    _SC_PASS_MAX,
#pragma empty_line
#pragma empty_line
    _SC_XOPEN_VERSION,
#pragma empty_line
    _SC_XOPEN_XCU_VERSION,
#pragma empty_line
    _SC_XOPEN_UNIX,
#pragma empty_line
    _SC_XOPEN_CRYPT,
#pragma empty_line
    _SC_XOPEN_ENH_I18N,
#pragma empty_line
    _SC_XOPEN_SHM,
#pragma empty_line
#pragma empty_line
    _SC_2_CHAR_TERM,
#pragma empty_line
    _SC_2_C_VERSION,
#pragma empty_line
    _SC_2_UPE,
#pragma empty_line
#pragma empty_line
    _SC_XOPEN_XPG2,
#pragma empty_line
    _SC_XOPEN_XPG3,
#pragma empty_line
    _SC_XOPEN_XPG4,
#pragma empty_line
#pragma empty_line
    _SC_CHAR_BIT,
#pragma empty_line
    _SC_CHAR_MAX,
#pragma empty_line
    _SC_CHAR_MIN,
#pragma empty_line
    _SC_INT_MAX,
#pragma empty_line
    _SC_INT_MIN,
#pragma empty_line
    _SC_LONG_BIT,
#pragma empty_line
    _SC_WORD_BIT,
#pragma empty_line
    _SC_MB_LEN_MAX,
#pragma empty_line
    _SC_NZERO,
#pragma empty_line
    _SC_SSIZE_MAX,
#pragma empty_line
    _SC_SCHAR_MAX,
#pragma empty_line
    _SC_SCHAR_MIN,
#pragma empty_line
    _SC_SHRT_MAX,
#pragma empty_line
    _SC_SHRT_MIN,
#pragma empty_line
    _SC_UCHAR_MAX,
#pragma empty_line
    _SC_UINT_MAX,
#pragma empty_line
    _SC_ULONG_MAX,
#pragma empty_line
    _SC_USHRT_MAX,
#pragma empty_line
#pragma empty_line
    _SC_NL_ARGMAX,
#pragma empty_line
    _SC_NL_LANGMAX,
#pragma empty_line
    _SC_NL_MSGMAX,
#pragma empty_line
    _SC_NL_NMAX,
#pragma empty_line
    _SC_NL_SETMAX,
#pragma empty_line
    _SC_NL_TEXTMAX,
#pragma empty_line
#pragma empty_line
    _SC_XBS5_ILP32_OFF32,
#pragma empty_line
    _SC_XBS5_ILP32_OFFBIG,
#pragma empty_line
    _SC_XBS5_LP64_OFF64,
#pragma empty_line
    _SC_XBS5_LPBIG_OFFBIG,
#pragma empty_line
#pragma empty_line
    _SC_XOPEN_LEGACY,
#pragma empty_line
    _SC_XOPEN_REALTIME,
#pragma empty_line
    _SC_XOPEN_REALTIME_THREADS,
#pragma empty_line
#pragma empty_line
    _SC_ADVISORY_INFO,
#pragma empty_line
    _SC_BARRIERS,
#pragma empty_line
    _SC_BASE,
#pragma empty_line
    _SC_C_LANG_SUPPORT,
#pragma empty_line
    _SC_C_LANG_SUPPORT_R,
#pragma empty_line
    _SC_CLOCK_SELECTION,
#pragma empty_line
    _SC_CPUTIME,
#pragma empty_line
    _SC_THREAD_CPUTIME,
#pragma empty_line
    _SC_DEVICE_IO,
#pragma empty_line
    _SC_DEVICE_SPECIFIC,
#pragma empty_line
    _SC_DEVICE_SPECIFIC_R,
#pragma empty_line
    _SC_FD_MGMT,
#pragma empty_line
    _SC_FIFO,
#pragma empty_line
    _SC_PIPE,
#pragma empty_line
    _SC_FILE_ATTRIBUTES,
#pragma empty_line
    _SC_FILE_LOCKING,
#pragma empty_line
    _SC_FILE_SYSTEM,
#pragma empty_line
    _SC_MONOTONIC_CLOCK,
#pragma empty_line
    _SC_MULTI_PROCESS,
#pragma empty_line
    _SC_SINGLE_PROCESS,
#pragma empty_line
    _SC_NETWORKING,
#pragma empty_line
    _SC_READER_WRITER_LOCKS,
#pragma empty_line
    _SC_SPIN_LOCKS,
#pragma empty_line
    _SC_REGEXP,
#pragma empty_line
    _SC_REGEX_VERSION,
#pragma empty_line
    _SC_SHELL,
#pragma empty_line
    _SC_SIGNALS,
#pragma empty_line
    _SC_SPAWN,
#pragma empty_line
    _SC_SPORADIC_SERVER,
#pragma empty_line
    _SC_THREAD_SPORADIC_SERVER,
#pragma empty_line
    _SC_SYSTEM_DATABASE,
#pragma empty_line
    _SC_SYSTEM_DATABASE_R,
#pragma empty_line
    _SC_TIMEOUTS,
#pragma empty_line
    _SC_TYPED_MEMORY_OBJECTS,
#pragma empty_line
    _SC_USER_GROUPS,
#pragma empty_line
    _SC_USER_GROUPS_R,
#pragma empty_line
    _SC_2_PBS,
#pragma empty_line
    _SC_2_PBS_ACCOUNTING,
#pragma empty_line
    _SC_2_PBS_LOCATE,
#pragma empty_line
    _SC_2_PBS_MESSAGE,
#pragma empty_line
    _SC_2_PBS_TRACK,
#pragma empty_line
    _SC_SYMLOOP_MAX,
#pragma empty_line
    _SC_STREAMS,
#pragma empty_line
    _SC_2_PBS_CHECKPOINT,
#pragma empty_line
#pragma empty_line
    _SC_V6_ILP32_OFF32,
#pragma empty_line
    _SC_V6_ILP32_OFFBIG,
#pragma empty_line
    _SC_V6_LP64_OFF64,
#pragma empty_line
    _SC_V6_LPBIG_OFFBIG,
#pragma empty_line
#pragma empty_line
    _SC_HOST_NAME_MAX,
#pragma empty_line
    _SC_TRACE,
#pragma empty_line
    _SC_TRACE_EVENT_FILTER,
#pragma empty_line
    _SC_TRACE_INHERIT,
#pragma empty_line
    _SC_TRACE_LOG,
#pragma empty_line
#pragma empty_line
    _SC_LEVEL1_ICACHE_SIZE,
#pragma empty_line
    _SC_LEVEL1_ICACHE_ASSOC,
#pragma empty_line
    _SC_LEVEL1_ICACHE_LINESIZE,
#pragma empty_line
    _SC_LEVEL1_DCACHE_SIZE,
#pragma empty_line
    _SC_LEVEL1_DCACHE_ASSOC,
#pragma empty_line
    _SC_LEVEL1_DCACHE_LINESIZE,
#pragma empty_line
    _SC_LEVEL2_CACHE_SIZE,
#pragma empty_line
    _SC_LEVEL2_CACHE_ASSOC,
#pragma empty_line
    _SC_LEVEL2_CACHE_LINESIZE,
#pragma empty_line
    _SC_LEVEL3_CACHE_SIZE,
#pragma empty_line
    _SC_LEVEL3_CACHE_ASSOC,
#pragma empty_line
    _SC_LEVEL3_CACHE_LINESIZE,
#pragma empty_line
    _SC_LEVEL4_CACHE_SIZE,
#pragma empty_line
    _SC_LEVEL4_CACHE_ASSOC,
#pragma empty_line
    _SC_LEVEL4_CACHE_LINESIZE,
#pragma empty_line
    /* Leave room here, maybe we need a few more cache levels some day.  */
#pragma empty_line
    _SC_IPV6 = _SC_LEVEL1_ICACHE_SIZE + 50,
#pragma empty_line
    _SC_RAW_SOCKETS,
#pragma empty_line
#pragma empty_line
    _SC_V7_ILP32_OFF32,
#pragma empty_line
    _SC_V7_ILP32_OFFBIG,
#pragma empty_line
    _SC_V7_LP64_OFF64,
#pragma empty_line
    _SC_V7_LPBIG_OFFBIG,
#pragma empty_line
#pragma empty_line
    _SC_SS_REPL_MAX,
#pragma empty_line
#pragma empty_line
    _SC_TRACE_EVENT_NAME_MAX,
#pragma empty_line
    _SC_TRACE_NAME_MAX,
#pragma empty_line
    _SC_TRACE_SYS_MAX,
#pragma empty_line
    _SC_TRACE_USER_EVENT_MAX,
#pragma empty_line
#pragma empty_line
    _SC_XOPEN_STREAMS,
#pragma empty_line
#pragma empty_line
    _SC_THREAD_ROBUST_PRIO_INHERIT,
#pragma empty_line
    _SC_THREAD_ROBUST_PRIO_PROTECT
#pragma empty_line
  };
#pragma empty_line
/* Values for the NAME argument to `confstr'.  */
enum
  {
    _CS_PATH, /* The default search path.  */
#pragma empty_line
#pragma empty_line
    _CS_V6_WIDTH_RESTRICTED_ENVS,
#pragma empty_line
#pragma empty_line
#pragma empty_line
    _CS_GNU_LIBC_VERSION,
#pragma empty_line
    _CS_GNU_LIBPTHREAD_VERSION,
#pragma empty_line
#pragma empty_line
    _CS_V5_WIDTH_RESTRICTED_ENVS,
#pragma empty_line
#pragma empty_line
#pragma empty_line
    _CS_V7_WIDTH_RESTRICTED_ENVS,
#pragma empty_line
#pragma empty_line
#pragma empty_line
    _CS_LFS_CFLAGS = 1000,
#pragma empty_line
    _CS_LFS_LDFLAGS,
#pragma empty_line
    _CS_LFS_LIBS,
#pragma empty_line
    _CS_LFS_LINTFLAGS,
#pragma empty_line
    _CS_LFS64_CFLAGS,
#pragma empty_line
    _CS_LFS64_LDFLAGS,
#pragma empty_line
    _CS_LFS64_LIBS,
#pragma empty_line
    _CS_LFS64_LINTFLAGS,
#pragma empty_line
#pragma empty_line
    _CS_XBS5_ILP32_OFF32_CFLAGS = 1100,
#pragma empty_line
    _CS_XBS5_ILP32_OFF32_LDFLAGS,
#pragma empty_line
    _CS_XBS5_ILP32_OFF32_LIBS,
#pragma empty_line
    _CS_XBS5_ILP32_OFF32_LINTFLAGS,
#pragma empty_line
    _CS_XBS5_ILP32_OFFBIG_CFLAGS,
#pragma empty_line
    _CS_XBS5_ILP32_OFFBIG_LDFLAGS,
#pragma empty_line
    _CS_XBS5_ILP32_OFFBIG_LIBS,
#pragma empty_line
    _CS_XBS5_ILP32_OFFBIG_LINTFLAGS,
#pragma empty_line
    _CS_XBS5_LP64_OFF64_CFLAGS,
#pragma empty_line
    _CS_XBS5_LP64_OFF64_LDFLAGS,
#pragma empty_line
    _CS_XBS5_LP64_OFF64_LIBS,
#pragma empty_line
    _CS_XBS5_LP64_OFF64_LINTFLAGS,
#pragma empty_line
    _CS_XBS5_LPBIG_OFFBIG_CFLAGS,
#pragma empty_line
    _CS_XBS5_LPBIG_OFFBIG_LDFLAGS,
#pragma empty_line
    _CS_XBS5_LPBIG_OFFBIG_LIBS,
#pragma empty_line
    _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS,
#pragma empty_line
#pragma empty_line
    _CS_POSIX_V6_ILP32_OFF32_CFLAGS,
#pragma empty_line
    _CS_POSIX_V6_ILP32_OFF32_LDFLAGS,
#pragma empty_line
    _CS_POSIX_V6_ILP32_OFF32_LIBS,
#pragma empty_line
    _CS_POSIX_V6_ILP32_OFF32_LINTFLAGS,
#pragma empty_line
    _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS,
#pragma empty_line
    _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS,
#pragma empty_line
    _CS_POSIX_V6_ILP32_OFFBIG_LIBS,
#pragma empty_line
    _CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS,
#pragma empty_line
    _CS_POSIX_V6_LP64_OFF64_CFLAGS,
#pragma empty_line
    _CS_POSIX_V6_LP64_OFF64_LDFLAGS,
#pragma empty_line
    _CS_POSIX_V6_LP64_OFF64_LIBS,
#pragma empty_line
    _CS_POSIX_V6_LP64_OFF64_LINTFLAGS,
#pragma empty_line
    _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS,
#pragma empty_line
    _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS,
#pragma empty_line
    _CS_POSIX_V6_LPBIG_OFFBIG_LIBS,
#pragma empty_line
    _CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS,
#pragma empty_line
#pragma empty_line
    _CS_POSIX_V7_ILP32_OFF32_CFLAGS,
#pragma empty_line
    _CS_POSIX_V7_ILP32_OFF32_LDFLAGS,
#pragma empty_line
    _CS_POSIX_V7_ILP32_OFF32_LIBS,
#pragma empty_line
    _CS_POSIX_V7_ILP32_OFF32_LINTFLAGS,
#pragma empty_line
    _CS_POSIX_V7_ILP32_OFFBIG_CFLAGS,
#pragma empty_line
    _CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS,
#pragma empty_line
    _CS_POSIX_V7_ILP32_OFFBIG_LIBS,
#pragma empty_line
    _CS_POSIX_V7_ILP32_OFFBIG_LINTFLAGS,
#pragma empty_line
    _CS_POSIX_V7_LP64_OFF64_CFLAGS,
#pragma empty_line
    _CS_POSIX_V7_LP64_OFF64_LDFLAGS,
#pragma empty_line
    _CS_POSIX_V7_LP64_OFF64_LIBS,
#pragma empty_line
    _CS_POSIX_V7_LP64_OFF64_LINTFLAGS,
#pragma empty_line
    _CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS,
#pragma empty_line
    _CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS,
#pragma empty_line
    _CS_POSIX_V7_LPBIG_OFFBIG_LIBS,
#pragma empty_line
    _CS_POSIX_V7_LPBIG_OFFBIG_LINTFLAGS,
#pragma empty_line
#pragma empty_line
    _CS_V6_ENV,
#pragma empty_line
    _CS_V7_ENV
#pragma empty_line
  };
#pragma line 613 "/usr/include/unistd.h" 2 3 4
#pragma empty_line
/* Get file-specific configuration information about PATH.  */
extern long int pathconf (const char *__path, int __name)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));
#pragma empty_line
/* Get file-specific configuration about descriptor FD.  */
extern long int fpathconf (int __fd, int __name) __attribute__ ((__nothrow__ ));
#pragma empty_line
/* Get the value of the system variable NAME.  */
extern long int sysconf (int __name) __attribute__ ((__nothrow__ ));
#pragma empty_line
#pragma empty_line
/* Get the value of the string-valued system variable NAME.  */
extern size_t confstr (int __name, char *__buf, size_t __len) __attribute__ ((__nothrow__ ));
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Get the process ID of the calling process.  */
extern __pid_t getpid (void) __attribute__ ((__nothrow__ ));
#pragma empty_line
/* Get the process ID of the calling process's parent.  */
extern __pid_t getppid (void) __attribute__ ((__nothrow__ ));
#pragma empty_line
/* Get the process group ID of the calling process.  */
extern __pid_t getpgrp (void) __attribute__ ((__nothrow__ ));
#pragma empty_line
/* Get the process group ID of process PID.  */
extern __pid_t __getpgid (__pid_t __pid) __attribute__ ((__nothrow__ ));
#pragma empty_line
extern __pid_t getpgid (__pid_t __pid) __attribute__ ((__nothrow__ ));
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Set the process group ID of the process matching PID to PGID.
   If PID is zero, the current process's process group ID is set.
   If PGID is zero, the process ID of the process is used.  */
extern int setpgid (__pid_t __pid, __pid_t __pgid) __attribute__ ((__nothrow__ ));
#pragma empty_line
#pragma empty_line
/* Both System V and BSD have `setpgrp' functions, but with different
   calling conventions.  The BSD function is the same as POSIX.1 `setpgid'
   (above).  The System V function takes no arguments and puts the calling
   process in its on group like `setpgid (0, 0)'.
#pragma empty_line
   New programs should always use `setpgid' instead.
#pragma empty_line
   GNU provides the POSIX.1 function.  */
#pragma empty_line
/* Set the process group ID of the calling process to its own PID.
   This is exactly the same as `setpgid (0, 0)'.  */
extern int setpgrp (void) __attribute__ ((__nothrow__ ));
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Create a new session with the calling process as its leader.
   The process group IDs of the session and the calling process
   are set to the process ID of the calling process, which is returned.  */
extern __pid_t setsid (void) __attribute__ ((__nothrow__ ));
#pragma empty_line
#pragma empty_line
/* Return the session ID of the given process.  */
extern __pid_t getsid (__pid_t __pid) __attribute__ ((__nothrow__ ));
#pragma empty_line
#pragma empty_line
/* Get the real user ID of the calling process.  */
extern __uid_t getuid (void) __attribute__ ((__nothrow__ ));
#pragma empty_line
/* Get the effective user ID of the calling process.  */
extern __uid_t geteuid (void) __attribute__ ((__nothrow__ ));
#pragma empty_line
/* Get the real group ID of the calling process.  */
extern __gid_t getgid (void) __attribute__ ((__nothrow__ ));
#pragma empty_line
/* Get the effective group ID of the calling process.  */
extern __gid_t getegid (void) __attribute__ ((__nothrow__ ));
#pragma empty_line
/* If SIZE is zero, return the number of supplementary groups
   the calling process is in.  Otherwise, fill in the group IDs
   of its supplementary groups in LIST and return the number written.  */
extern int getgroups (int __size, __gid_t __list[]) __attribute__ ((__nothrow__ )) /* Ignore */;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Set the user ID of the calling process to UID.
   If the calling process is the super-user, set the real
   and effective user IDs, and the saved set-user-ID to UID;
   if not, the effective user ID is set to UID.  */
extern int setuid (__uid_t __uid) __attribute__ ((__nothrow__ )) /* Ignore */;
#pragma empty_line
#pragma empty_line
/* Set the real user ID of the calling process to RUID,
   and the effective user ID of the calling process to EUID.  */
extern int setreuid (__uid_t __ruid, __uid_t __euid) __attribute__ ((__nothrow__ )) /* Ignore */;
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Set the effective user ID of the calling process to UID.  */
extern int seteuid (__uid_t __uid) __attribute__ ((__nothrow__ )) /* Ignore */;
#pragma empty_line
#pragma empty_line
/* Set the group ID of the calling process to GID.
   If the calling process is the super-user, set the real
   and effective group IDs, and the saved set-group-ID to GID;
   if not, the effective group ID is set to GID.  */
extern int setgid (__gid_t __gid) __attribute__ ((__nothrow__ )) /* Ignore */;
#pragma empty_line
#pragma empty_line
/* Set the real group ID of the calling process to RGID,
   and the effective group ID of the calling process to EGID.  */
extern int setregid (__gid_t __rgid, __gid_t __egid) __attribute__ ((__nothrow__ )) /* Ignore */;
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Set the effective group ID of the calling process to GID.  */
extern int setegid (__gid_t __gid) __attribute__ ((__nothrow__ )) /* Ignore */;
#pragma line 756 "/usr/include/unistd.h" 3 4
/* Clone the calling process, creating an exact copy.
   Return -1 for errors, 0 to the new process,
   and the process ID of the new process to the old process.  */
extern __pid_t fork (void) __attribute__ ((__nothrow__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Clone the calling process, but without copying the whole address space.
   The calling process is suspended until the new process exits or is
   replaced by a call to `execve'.  Return -1 for errors, 0 to the new process,
   and the process ID of the new process to the old process.  */
extern __pid_t vfork (void) __attribute__ ((__nothrow__ ));
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Return the pathname of the terminal FD is open on, or NULL on errors.
   The returned storage is good only until the next call to this function.  */
extern char *ttyname (int __fd) __attribute__ ((__nothrow__ ));
#pragma empty_line
/* Store at most BUFLEN characters of the pathname of the terminal FD is
   open on in BUF.  Return 0 on success, otherwise an error number.  */
extern int ttyname_r (int __fd, char *__buf, size_t __buflen)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2))) /* Ignore */;
#pragma empty_line
/* Return 1 if FD is a valid descriptor associated
   with a terminal, zero if not.  */
extern int isatty (int __fd) __attribute__ ((__nothrow__ ));
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Return the index into the active-logins file (utmp) for
   the controlling terminal.  */
extern int ttyslot (void) __attribute__ ((__nothrow__ ));
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Make a link to FROM named TO.  */
extern int link (const char *__from, const char *__to)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2))) /* Ignore */;
#pragma empty_line
#pragma empty_line
/* Like link but relative paths in TO and FROM are interpreted relative
   to FROMFD and TOFD respectively.  */
extern int linkat (int __fromfd, const char *__from, int __tofd,
     const char *__to, int __flags)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2, 4))) /* Ignore */;
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Make a symbolic link to FROM named TO.  */
extern int symlink (const char *__from, const char *__to)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2))) /* Ignore */;
#pragma empty_line
/* Read the contents of the symbolic link PATH into no more than
   LEN bytes of BUF.  The contents are not null-terminated.
   Returns the number of characters read, or -1 for errors.  */
extern ssize_t readlink (const char *__restrict __path,
    char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2))) /* Ignore */;
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Like symlink but a relative path in TO is interpreted relative to TOFD.  */
extern int symlinkat (const char *__from, int __tofd,
        const char *__to) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 3))) /* Ignore */;
#pragma empty_line
/* Like readlink but a relative PATH is interpreted relative to FD.  */
extern ssize_t readlinkat (int __fd, const char *__restrict __path,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2, 3))) /* Ignore */;
#pragma empty_line
#pragma empty_line
/* Remove the link NAME.  */
extern int unlink (const char *__name) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));
#pragma empty_line
#pragma empty_line
/* Remove the link NAME relative to FD.  */
extern int unlinkat (int __fd, const char *__name, int __flag)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));
#pragma empty_line
#pragma empty_line
/* Remove the directory PATH.  */
extern int rmdir (const char *__path) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));
#pragma empty_line
#pragma empty_line
/* Return the foreground process group ID of FD.  */
extern __pid_t tcgetpgrp (int __fd) __attribute__ ((__nothrow__ ));
#pragma empty_line
/* Set the foreground process group ID of FD set PGRP_ID.  */
extern int tcsetpgrp (int __fd, __pid_t __pgrp_id) __attribute__ ((__nothrow__ ));
#pragma empty_line
#pragma empty_line
/* Return the login name of the user.
#pragma empty_line
   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern char *getlogin (void);
#pragma empty_line
/* Return at most NAME_LEN characters of the login name of the user in NAME.
   If it cannot be determined or some other error occurred, return the error
   code.  Otherwise return 0.
#pragma empty_line
   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int getlogin_r (char *__name, size_t __name_len) __attribute__ ((__nonnull__ (1)));
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Set the login name returned by `getlogin'.  */
extern int setlogin (const char *__name) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Get definitions and prototypes for functions to process the
   arguments in ARGV (ARGC of them, minus the program name) for
   options given in OPTS.  */
#pragma empty_line
#pragma empty_line
#pragma line 1 "/usr/include/getopt.h" 1 3 4
/* Declarations for getopt.
   Copyright (C) 1989-2016 Free Software Foundation, Inc.
   This file is part of the GNU C Library.
#pragma empty_line
   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.
#pragma empty_line
   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.
#pragma empty_line
   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* If __GNU_LIBRARY__ is not already defined, either we are being used
   standalone, or this is the first header included in the source file.
   If we are being used with glibc, we need to include <features.h>, but
   that does not exist if we are standalone.  So: if __GNU_LIBRARY__ is
   not defined, include <ctype.h>, which will pull in <features.h> for us
   if it's from glibc.  (Why ctype.h?  It's guaranteed to exist and it
   doesn't flood the namespace with stuff the way some other headers do.)  */
#pragma line 51 "/usr/include/getopt.h" 3 4
/* For communication from `getopt' to the caller.
   When `getopt' finds an option that takes an argument,
   the argument value is returned here.
   Also, when `ordering' is RETURN_IN_ORDER,
   each non-option ARGV-element is returned here.  */
#pragma empty_line
extern char *optarg;
#pragma empty_line
/* Index in ARGV of the next element to be scanned.
   This is used for communication to and from the caller
   and for communication between successive calls to `getopt'.
#pragma empty_line
   On entry to `getopt', zero means this is the first call; initialize.
#pragma empty_line
   When `getopt' returns -1, this is the index of the first of the
   non-option elements that the caller should itself scan.
#pragma empty_line
   Otherwise, `optind' communicates from one call to the next
   how much of ARGV has been scanned so far.  */
#pragma empty_line
extern int optind;
#pragma empty_line
/* Callers store zero here to inhibit the error message `getopt' prints
   for unrecognized options.  */
#pragma empty_line
extern int opterr;
#pragma empty_line
/* Set to an option character which was unrecognized.  */
#pragma empty_line
extern int optopt;
#pragma line 122 "/usr/include/getopt.h" 3 4
/* Get definitions and prototypes for functions to process the
   arguments in ARGV (ARGC of them, minus the program name) for
   options given in OPTS.
#pragma empty_line
   Return the option character from OPTS just read.  Return -1 when
   there are no more options.  For unrecognized options, or options
   missing arguments, `optopt' is set to the option letter, and '?' is
   returned.
#pragma empty_line
   The OPTS string is a list of characters which are recognized option
   letters, optionally followed by colons, specifying that that letter
   takes an argument, to be placed in `optarg'.
#pragma empty_line
   If a letter in OPTS is followed by two colons, its argument is
   optional.  This behavior is specific to the GNU `getopt'.
#pragma empty_line
   The argument `--' causes premature termination of argument
   scanning, explicitly telling `getopt' that there are no more
   options.
#pragma empty_line
   If OPTS begins with `--', then non-option arguments are treated as
   arguments to the option '\0'.  This behavior is specific to the GNU
   `getopt'.  */
#pragma empty_line
#pragma empty_line
/* Many other libraries have conflicting prototypes for getopt, with
   differences in the consts, in stdlib.h.  To avoid compilation
   errors, only prototype getopt for the GNU C library.  */
extern int getopt (int ___argc, char *const *___argv, const char *__shortopts)
       __attribute__ ((__nothrow__ ));
#pragma line 188 "/usr/include/getopt.h" 3 4
/* Make sure we later can get all the definitions and declarations.  */
#pragma line 875 "/usr/include/unistd.h" 2 3 4
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Put the name of the current host in no more than LEN bytes of NAME.
   The result is null-terminated if LEN is large enough for the full
   name and the terminator.  */
extern int gethostname (char *__name, size_t __len) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Set the name of the current host to NAME, which is LEN bytes long.
   This call is restricted to the super-user.  */
extern int sethostname (const char *__name, size_t __len)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1))) /* Ignore */;
#pragma empty_line
/* Set the current machine's Internet number to ID.
   This call is restricted to the super-user.  */
extern int sethostid (long int __id) __attribute__ ((__nothrow__ )) /* Ignore */;
#pragma empty_line
#pragma empty_line
/* Get and set the NIS (aka YP) domain name, if any.
   Called just like `gethostname' and `sethostname'.
   The NIS domain name is usually the empty string when not using NIS.  */
extern int getdomainname (char *__name, size_t __len)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1))) /* Ignore */;
extern int setdomainname (const char *__name, size_t __len)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1))) /* Ignore */;
#pragma empty_line
#pragma empty_line
/* Revoke access permissions to all processes currently communicating
   with the control terminal, and then send a SIGHUP signal to the process
   group of the control terminal.  */
extern int vhangup (void) __attribute__ ((__nothrow__ ));
#pragma empty_line
/* Revoke the access of all descriptors currently open on FILE.  */
extern int revoke (const char *__file) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1))) /* Ignore */;
#pragma empty_line
#pragma empty_line
/* Enable statistical profiling, writing samples of the PC into at most
   SIZE bytes of SAMPLE_BUFFER; every processor clock tick while profiling
   is enabled, the system examines the user PC and increments
   SAMPLE_BUFFER[((PC - OFFSET) / 2) * SCALE / 65536].  If SCALE is zero,
   disable profiling.  Returns zero on success, -1 on error.  */
extern int profil (unsigned short int *__sample_buffer, size_t __size,
     size_t __offset, unsigned int __scale)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));
#pragma empty_line
#pragma empty_line
/* Turn accounting on if NAME is an existing file.  The system will then write
   a record for each process as it terminates, to this file.  If NAME is NULL,
   turn accounting off.  This call is restricted to the super-user.  */
extern int acct (const char *__name) __attribute__ ((__nothrow__ ));
#pragma empty_line
#pragma empty_line
/* Successive calls return the shells listed in `/etc/shells'.  */
extern char *getusershell (void) __attribute__ ((__nothrow__ ));
extern void endusershell (void) __attribute__ ((__nothrow__ )); /* Discard cached info.  */
extern void setusershell (void) __attribute__ ((__nothrow__ )); /* Rewind and re-read the file.  */
#pragma empty_line
#pragma empty_line
/* Put the program in the background, and dissociate from the controlling
   terminal.  If NOCHDIR is zero, do `chdir ("/")'.  If NOCLOSE is zero,
   redirects stdin, stdout, and stderr to /dev/null.  */
extern int daemon (int __nochdir, int __noclose) __attribute__ ((__nothrow__ )) /* Ignore */;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Make PATH be the root directory (the starting point for absolute paths).
   This call is restricted to the super-user.  */
extern int chroot (const char *__path) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1))) /* Ignore */;
#pragma empty_line
/* Prompt with PROMPT and read a string from the terminal without echoing.
   Uses /dev/tty if possible; otherwise stderr and stdin.  */
extern char *getpass (const char *__prompt) __attribute__ ((__nonnull__ (1)));
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Make all changes done to FD actually appear on disk.
#pragma empty_line
   This function is a cancellation point and therefore not marked with
   __THROW.  */
extern int fsync (int __fd);
#pragma line 971 "/usr/include/unistd.h" 3 4
/* Return identifier for the current host.  */
extern long int gethostid (void);
#pragma empty_line
/* Make all changes done to all files actually appear on disk.  */
extern void sync (void) __attribute__ ((__nothrow__ ));
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Return the number of bytes in a page.  This is the system's page size,
   which is not necessarily the same as the hardware page size.  */
extern int getpagesize (void) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
/* Return the maximum number of file descriptors
   the current process could possibly have.  */
extern int getdtablesize (void) __attribute__ ((__nothrow__ ));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Truncate FILE to LENGTH bytes.  */
#pragma empty_line
extern int truncate (const char *__file, __off_t __length)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1))) /* Ignore */;
#pragma line 1017 "/usr/include/unistd.h" 3 4
/* Truncate the file FD is open on to LENGTH bytes.  */
#pragma empty_line
extern int ftruncate (int __fd, __off_t __length) __attribute__ ((__nothrow__ )) /* Ignore */;
#pragma line 1038 "/usr/include/unistd.h" 3 4
/* Set the end of accessible data space (aka "the break") to ADDR.
   Returns zero on success and -1 for errors (with errno set).  */
extern int brk (void *__addr) __attribute__ ((__nothrow__ )) /* Ignore */;
#pragma empty_line
/* Increase or decrease the end of accessible data space by DELTA bytes.
   If successful, returns the address the previous end of data space
   (i.e. the beginning of the new space, if DELTA > 0);
   returns (void *) -1 for errors (with errno set).  */
extern void *sbrk (intptr_t __delta) __attribute__ ((__nothrow__ ));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Invoke `system call' number SYSNO, passing it the remaining arguments.
   This is completely system-dependent, and not often useful.
#pragma empty_line
   In Unix, `syscall' sets `errno' for all errors and most calls return -1
   for errors; in many systems you cannot pass arguments or get return
   values for all system calls (`pipe', `fork', and `getppid' typically
   among them).
#pragma empty_line
   In Mach, all system calls take normal arguments and always return an
   error code (zero for success).  */
extern long int syscall (long int __sysno, ...) __attribute__ ((__nothrow__ ));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* NOTE: These declarations also appear in <fcntl.h>; be sure to keep both
   files consistent.  Some systems have them there and some here, and some
   software depends on the macros being defined without including both.  */
#pragma empty_line
/* `lockf' is a simpler interface to the locking facilities of `fcntl'.
   LEN is always relative to the current file position.
   The CMD argument is one of the following.
#pragma empty_line
   This function is a cancellation point and therefore not marked with
   __THROW.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern int lockf (int __fd, int __cmd, __off_t __len) /* Ignore */;
#pragma line 1113 "/usr/include/unistd.h" 3 4
/* Synchronize at least the data part of a file with the underlying
   media.  */
extern int fdatasync (int __fildes);
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* XPG4.2 specifies that prototypes for the encryption functions must
   be defined here.  */
#pragma line 1141 "/usr/include/unistd.h" 3 4
/* The Single Unix specification demands this prototype to be here.
   It is also found in <stdio.h>.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Define some macros helping to catch buffer overflows.  */
#pragma line 14 "floyd-warshall.c" 2
#pragma line 1 "/usr/include/string.h" 1 3 4
/* Copyright (C) 1991-2016 Free Software Foundation, Inc.
   This file is part of the GNU C Library.
#pragma empty_line
   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.
#pragma empty_line
   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.
#pragma empty_line
   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */
#pragma empty_line
/*
 *	ISO C99 Standard: 7.21 String handling	<string.h>
 */
#pragma line 29 "/usr/include/string.h" 3 4
/* Get size_t and NULL from <stddef.h>.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 1 "/opt/Xilinx/Vivado_HLS/2016.4/lnx64/tools/clang/bin/../lib/clang/3.1/include/stddef.h" 1 3 4
/*===---- stddef.h - Basic type definitions --------------------------------===
 *
 * Copyright (c) 2008 Eli Friedman
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 *===-----------------------------------------------------------------------===
 */
#pragma line 56 "/opt/Xilinx/Vivado_HLS/2016.4/lnx64/tools/clang/bin/../lib/clang/3.1/include/stddef.h" 3 4
/* Some C libraries expect to see a wint_t here. Others (notably MinGW) will use
__WINT_TYPE__ directly; accommodate both by requiring __need_wint_t */
#pragma line 33 "/usr/include/string.h" 2 3 4
#pragma empty_line
/* Tell the caller that we provide correct C++ prototypes.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Copy N bytes of SRC to DEST.  */
extern void *memcpy (void *__restrict __dest, const void *__restrict __src,
       size_t __n) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
/* Copy N bytes of SRC to DEST, guaranteeing
   correct behavior for overlapping strings.  */
extern void *memmove (void *__dest, const void *__src, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
#pragma empty_line
#pragma empty_line
/* Copy no more than N bytes of SRC to DEST, stopping when C is found.
   Return the position in DEST one byte past where C was copied,
   or NULL if C was not found in the first N bytes of SRC.  */
#pragma empty_line
extern void *memccpy (void *__restrict __dest, const void *__restrict __src,
        int __c, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Set N bytes of S to C.  */
extern void *memset (void *__s, int __c, size_t __n) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));
#pragma empty_line
/* Compare N bytes of S1 and S2.  */
extern int memcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
#pragma empty_line
/* Search N bytes of S for C.  */
#pragma line 92 "/usr/include/string.h" 3 4
extern void *memchr (const void *__s, int __c, size_t __n)
      __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
#pragma line 124 "/usr/include/string.h" 3 4
/* Copy SRC to DEST.  */
extern char *strcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
/* Copy no more than N characters of SRC to DEST.  */
extern char *strncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
#pragma empty_line
/* Append SRC onto DEST.  */
extern char *strcat (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
/* Append no more than N characters from SRC onto DEST.  */
extern char *strncat (char *__restrict __dest, const char *__restrict __src,
        size_t __n) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
#pragma empty_line
/* Compare S1 and S2.  */
extern int strcmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
/* Compare N characters of S1 and S2.  */
extern int strncmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
#pragma empty_line
/* Compare the collated forms of S1 and S2.  */
extern int strcoll (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
/* Put a transformation of SRC into no more than N bytes of DEST.  */
extern size_t strxfrm (char *__restrict __dest,
         const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* The following functions are equivalent to the both above but they
   take the locale they use for the collation as an extra argument.
   This is not standardsized but something like will come.  */
#pragma empty_line
#pragma line 1 "/usr/include/xlocale.h" 1 3 4
/* Definition of locale datatype.
   Copyright (C) 1997-2016 Free Software Foundation, Inc.
   This file is part of the GNU C Library.
   Contributed by Ulrich Drepper <drepper@cygnus.com>, 1997.
#pragma empty_line
   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.
#pragma empty_line
   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.
#pragma empty_line
   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Structure for reentrant locale using functions.  This is an
   (almost) opaque type for the user level programs.  The file and
   this data structure is not standardized.  Don't rely on it.  It can
   go away without warning.  */
typedef struct __locale_struct
{
  /* Note: LC_ALL is not a valid index into this array.  */
  struct __locale_data *__locales[13]; /* 13 = __LC_LAST. */
#pragma empty_line
  /* To increase the speed of this solution we add some special members.  */
  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;
#pragma empty_line
  /* Note: LC_ALL is not a valid index into this array.  */
  const char *__names[13];
} *__locale_t;
#pragma empty_line
/* POSIX 2008 makes locale_t official.  */
typedef __locale_t locale_t;
#pragma line 160 "/usr/include/string.h" 2 3 4
#pragma empty_line
/* Compare the collated forms of S1 and S2 using rules from L.  */
extern int strcoll_l (const char *__s1, const char *__s2, __locale_t __l)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));
/* Put a transformation of SRC into no more than N bytes of DEST.  */
extern size_t strxfrm_l (char *__dest, const char *__src, size_t __n,
    __locale_t __l) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2, 4)));
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Duplicate S, returning an identical malloc'd string.  */
extern char *strdup (const char *__s)
     __attribute__ ((__nothrow__ )) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));
#pragma empty_line
#pragma empty_line
/* Return a malloc'd copy of at most N bytes of STRING.  The
   resultant string is terminated even if no null terminator
   appears before STRING[N].  */
#pragma empty_line
extern char *strndup (const char *__string, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));
#pragma line 207 "/usr/include/string.h" 3 4
/* Find the first occurrence of C in S.  */
#pragma line 231 "/usr/include/string.h" 3 4
extern char *strchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
#pragma empty_line
/* Find the last occurrence of C in S.  */
#pragma line 258 "/usr/include/string.h" 3 4
extern char *strrchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
#pragma line 278 "/usr/include/string.h" 3 4
/* Return the length of the initial segment of S which
   consists entirely of characters not in REJECT.  */
extern size_t strcspn (const char *__s, const char *__reject)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
/* Return the length of the initial segment of S which
   consists entirely of characters in ACCEPT.  */
extern size_t strspn (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
/* Find the first occurrence in S of any character in ACCEPT.  */
#pragma line 310 "/usr/include/string.h" 3 4
extern char *strpbrk (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
#pragma empty_line
/* Find the first occurrence of NEEDLE in HAYSTACK.  */
#pragma line 337 "/usr/include/string.h" 3 4
extern char *strstr (const char *__haystack, const char *__needle)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Divide S into tokens separated by characters in DELIM.  */
extern char *strtok (char *__restrict __s, const char *__restrict __delim)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));
#pragma empty_line
#pragma empty_line
/* Divide S into tokens separated by characters in DELIM.  Information
   passed between calls are stored in SAVE_PTR.  */
extern char *__strtok_r (char *__restrict __s,
    const char *__restrict __delim,
    char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2, 3)));
#pragma empty_line
extern char *strtok_r (char *__restrict __s, const char *__restrict __delim,
         char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2, 3)));
#pragma line 393 "/usr/include/string.h" 3 4
/* Return the length of S.  */
extern size_t strlen (const char *__s)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Find the length of STRING, but scan at most MAXLEN characters.
   If no '\0' terminator is found in that many characters, return MAXLEN.  */
extern size_t strnlen (const char *__string, size_t __maxlen)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Return a string describing the meaning of the `errno' code in ERRNUM.  */
extern char *strerror (int __errnum) __attribute__ ((__nothrow__ ));
#pragma empty_line
#pragma empty_line
/* Reentrant version of `strerror'.
   There are 2 flavors of `strerror_r', GNU which returns the string
   and may or may not use the supplied temporary buffer and POSIX one
   which fills the string into the buffer.
   To use the POSIX version, -D_XOPEN_SOURCE=600 or -D_POSIX_C_SOURCE=200112L
   without -D_GNU_SOURCE is needed, otherwise the GNU version is
   preferred.  */
#pragma empty_line
/* Fill BUF with a string describing the meaning of the `errno' code in
   ERRNUM.  */
#pragma empty_line
extern int strerror_r (int __errnum, char *__buf, size_t __buflen) __asm__ ("" "__xpg_strerror_r") __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));
#pragma line 439 "/usr/include/string.h" 3 4
/* Translate error number to string according to the locale L.  */
extern char *strerror_l (int __errnum, __locale_t __l) __attribute__ ((__nothrow__ ));
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* We define this function always since `bzero' is sometimes needed when
   the namespace rules does not allow this.  */
extern void __bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));
#pragma empty_line
#pragma empty_line
/* Copy N bytes of SRC to DEST (like memmove, but args reversed).  */
extern void bcopy (const void *__src, void *__dest, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
#pragma empty_line
/* Set N bytes of S to 0.  */
extern void bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));
#pragma empty_line
/* Compare N bytes of S1 and S2 (same as memcmp).  */
extern int bcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
#pragma empty_line
/* Find the first occurrence of C in S (same as strchr).  */
#pragma line 484 "/usr/include/string.h" 3 4
extern char *index (const char *__s, int __c)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
#pragma empty_line
#pragma empty_line
/* Find the last occurrence of C in S (same as strrchr).  */
#pragma line 512 "/usr/include/string.h" 3 4
extern char *rindex (const char *__s, int __c)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
#pragma empty_line
#pragma empty_line
/* Return the position of the first bit set in I, or 0 if none are set.
   The least-significant bit is position 1, the most-significant 32.  */
extern int ffs (int __i) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
#pragma empty_line
/* The following two functions are non-standard but necessary for non-32 bit
   platforms.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Compare S1 and S2, ignoring case.  */
extern int strcasecmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
#pragma empty_line
/* Compare no more than N chars of S1 and S2, ignoring case.  */
extern int strncasecmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
#pragma line 550 "/usr/include/string.h" 3 4
/* Return the next DELIM-delimited token from *STRINGP,
   terminating it with a '\0', and update *STRINGP to point past it.  */
extern char *strsep (char **__restrict __stringp,
       const char *__restrict __delim)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Return a string describing the meaning of the signal number in SIG.  */
extern char *strsignal (int __sig) __attribute__ ((__nothrow__ ));
#pragma empty_line
/* Copy SRC to DEST, returning the address of the terminating '\0' in DEST.  */
extern char *__stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
#pragma empty_line
/* Copy no more than N characters of SRC to DEST, returning the address of
   the last character written into DEST.  */
extern char *__stpncpy (char *__restrict __dest,
   const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
#pragma line 15 "floyd-warshall.c" 2
#pragma line 1 "/usr/include/math.h" 1 3 4
/* Declarations for math functions.
   Copyright (C) 1991-2016 Free Software Foundation, Inc.
   This file is part of the GNU C Library.
#pragma empty_line
   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.
#pragma empty_line
   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.
#pragma empty_line
   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */
#pragma empty_line
/*
 *	ISO C99 Standard: 7.12 Mathematics	<math.h>
 */
#pragma line 30 "/usr/include/math.h" 3 4
/* Get machine-dependent vector math functions declarations.  */
#pragma empty_line
#pragma line 1 "/usr/include/x86_64-linux-gnu/bits/math-vector.h" 1 3 4
/* Platform-specific SIMD declarations of math functions.
   Copyright (C) 2014-2016 Free Software Foundation, Inc.
   This file is part of the GNU C Library.
#pragma empty_line
   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.
#pragma empty_line
   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.
#pragma empty_line
   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Get default empty definitions for simd declarations.  */
#pragma empty_line
#pragma line 1 "/usr/include/x86_64-linux-gnu/bits/libm-simd-decl-stubs.h" 1 3 4
/* Empty definitions required for __MATHCALL_VEC unfolding in mathcalls.h.
   Copyright (C) 2014-2016 Free Software Foundation, Inc.
   This file is part of the GNU C Library.
#pragma empty_line
   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.
#pragma empty_line
   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.
#pragma empty_line
   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Needed definitions could be generated with:
   for func in $(grep __MATHCALL_VEC math/bits/mathcalls.h |\
		 sed -r "s|__MATHCALL_VEC.?\(||; s|,.*||"); do
     echo "#define __DECL_SIMD_${func}";
     echo "#define __DECL_SIMD_${func}f";
     echo "#define __DECL_SIMD_${func}l";
   done
 */
#pragma line 26 "/usr/include/x86_64-linux-gnu/bits/math-vector.h" 2 3 4
#pragma line 32 "/usr/include/math.h" 2 3 4
#pragma empty_line
/* Get machine-dependent HUGE_VAL value (returned on overflow).
   On all IEEE754 machines, this is +Infinity.  */
#pragma empty_line
#pragma line 1 "/usr/include/x86_64-linux-gnu/bits/huge_val.h" 1 3 4
/* `HUGE_VAL' constant for IEEE 754 machines (where it is infinity).
   Used by <stdlib.h> and <math.h> functions for overflow.
   Copyright (C) 1992-2016 Free Software Foundation, Inc.
   This file is part of the GNU C Library.
#pragma empty_line
   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.
#pragma empty_line
   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.
#pragma empty_line
   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* IEEE positive infinity (-HUGE_VAL is negative infinity).  */
#pragma line 36 "/usr/include/math.h" 2 3 4
#pragma empty_line
#pragma line 1 "/usr/include/x86_64-linux-gnu/bits/huge_valf.h" 1 3 4
/* `HUGE_VALF' constant for IEEE 754 machines (where it is infinity).
   Used by <stdlib.h> and <math.h> functions for overflow.
   Copyright (C) 1992-2016 Free Software Foundation, Inc.
   This file is part of the GNU C Library.
#pragma empty_line
   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.
#pragma empty_line
   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.
#pragma empty_line
   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* IEEE positive infinity (-HUGE_VAL is negative infinity).  */
#pragma line 38 "/usr/include/math.h" 2 3 4
#pragma line 1 "/usr/include/x86_64-linux-gnu/bits/huge_vall.h" 1 3 4
/* `HUGE_VALL' constant for ix86 (where it is infinity).
   Used by <stdlib.h> and <math.h> functions for overflow.
   Copyright (C) 1992-2016 Free Software Foundation, Inc.
   This file is part of the GNU C Library.
#pragma empty_line
   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.
#pragma empty_line
   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.
#pragma empty_line
   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */
#pragma line 39 "/usr/include/math.h" 2 3 4
#pragma empty_line
/* Get machine-dependent INFINITY value.  */
#pragma empty_line
#pragma line 1 "/usr/include/x86_64-linux-gnu/bits/inf.h" 1 3 4
/* `INFINITY' constant for IEEE 754 machines.
   Copyright (C) 2004-2016 Free Software Foundation, Inc.
   This file is part of the GNU C Library.
#pragma empty_line
   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.
#pragma empty_line
   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.
#pragma empty_line
   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* IEEE positive infinity.  */
#pragma line 42 "/usr/include/math.h" 2 3 4
#pragma empty_line
/* Get machine-dependent NAN value (returned for some domain errors).  */
#pragma empty_line
#pragma line 1 "/usr/include/x86_64-linux-gnu/bits/nan.h" 1 3 4
/* `NAN' constant for IEEE 754 machines.
   Copyright (C) 1992-2016 Free Software Foundation, Inc.
   This file is part of the GNU C Library.
#pragma empty_line
   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.
#pragma empty_line
   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.
#pragma empty_line
   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* IEEE Not A Number.  */
#pragma line 45 "/usr/include/math.h" 2 3 4
#pragma empty_line
#pragma empty_line
/* Get general and ISO C99 specific information.  */
#pragma empty_line
#pragma line 1 "/usr/include/x86_64-linux-gnu/bits/mathdef.h" 1 3 4
/* Copyright (C) 2001-2016 Free Software Foundation, Inc.
   This file is part of the GNU C Library.
#pragma empty_line
   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.
#pragma empty_line
   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.
#pragma empty_line
   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */
#pragma line 26 "/usr/include/x86_64-linux-gnu/bits/mathdef.h" 3 4
/* The x86-64 architecture computes values with the precission of the
   used type.  Similarly for -m32 -mfpmath=sse.  */
typedef float float_t; /* `float' expressions are evaluated as `float'.  */
typedef double double_t; /* `double' expressions are evaluated
				   as `double'.  */
#pragma line 41 "/usr/include/x86_64-linux-gnu/bits/mathdef.h" 3 4
/* The values returned by `ilogb' for 0 and NaN respectively.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* The GCC 4.6 compiler will define __FP_FAST_FMA{,F,L} if the fma{,f,l}
   builtins are supported.  */
#pragma line 49 "/usr/include/math.h" 2 3 4
#pragma empty_line
/* The file <bits/mathcalls.h> contains the prototypes for all the
   actual math functions.  These macros are used for those prototypes,
   so we can easily declare each function as both `name' and `__name',
   and can declare the float versions `namef' and `__namef'.  */
#pragma line 83 "/usr/include/math.h" 3 4
#pragma line 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 1 3 4
/* Prototype declarations for math functions; helper file for <math.h>.
   Copyright (C) 1996-2016 Free Software Foundation, Inc.
   This file is part of the GNU C Library.
#pragma empty_line
   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.
#pragma empty_line
   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.
#pragma empty_line
   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */
#pragma empty_line
/* NOTE: Because of the special way this file is used by <math.h>, this
   file must NOT be protected from multiple inclusion as header files
   usually are.
#pragma empty_line
   This file provides prototype declarations for the math functions.
   Most functions are declared using the macro:
#pragma empty_line
   __MATHCALL (NAME,[_r], (ARGS...));
#pragma empty_line
   This means there is a function `NAME' returning `double' and a function
   `NAMEf' returning `float'.  Each place `_Mdouble_' appears in the
   prototype, that is actually `double' in the prototype for `NAME' and
   `float' in the prototype for `NAMEf'.  Reentrant variant functions are
   called `NAME_r' and `NAMEf_r'.
#pragma empty_line
   Functions returning other types like `int' are declared using the macro:
#pragma empty_line
   __MATHDECL (TYPE, NAME,[_r], (ARGS...));
#pragma empty_line
   This is just like __MATHCALL but for a function returning `TYPE'
   instead of `_Mdouble_'.  In all of these cases, there is still
   both a `NAME' and a `NAMEf' that takes `float' arguments.
#pragma empty_line
   Note that there must be no whitespace before the argument passed for
   NAME, to make token pasting work with -traditional.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Trigonometric functions.  */
#pragma empty_line
#pragma empty_line
/* Arc cosine of X.  */
extern double acos (double __x) __attribute__ ((__nothrow__ )); extern double __acos (double __x) __attribute__ ((__nothrow__ ));
/* Arc sine of X.  */
extern double asin (double __x) __attribute__ ((__nothrow__ )); extern double __asin (double __x) __attribute__ ((__nothrow__ ));
/* Arc tangent of X.  */
extern double atan (double __x) __attribute__ ((__nothrow__ )); extern double __atan (double __x) __attribute__ ((__nothrow__ ));
/* Arc tangent of Y/X.  */
extern double atan2 (double __y, double __x) __attribute__ ((__nothrow__ )); extern double __atan2 (double __y, double __x) __attribute__ ((__nothrow__ ));
#pragma empty_line
/* Cosine of X.  */
extern double cos (double __x) __attribute__ ((__nothrow__ )); extern double __cos (double __x) __attribute__ ((__nothrow__ ));
/* Sine of X.  */
extern double sin (double __x) __attribute__ ((__nothrow__ )); extern double __sin (double __x) __attribute__ ((__nothrow__ ));
/* Tangent of X.  */
extern double tan (double __x) __attribute__ ((__nothrow__ )); extern double __tan (double __x) __attribute__ ((__nothrow__ ));
#pragma empty_line
/* Hyperbolic functions.  */
#pragma empty_line
/* Hyperbolic cosine of X.  */
extern double cosh (double __x) __attribute__ ((__nothrow__ )); extern double __cosh (double __x) __attribute__ ((__nothrow__ ));
/* Hyperbolic sine of X.  */
extern double sinh (double __x) __attribute__ ((__nothrow__ )); extern double __sinh (double __x) __attribute__ ((__nothrow__ ));
/* Hyperbolic tangent of X.  */
extern double tanh (double __x) __attribute__ ((__nothrow__ )); extern double __tanh (double __x) __attribute__ ((__nothrow__ ));
#pragma line 87 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
/* Hyperbolic arc cosine of X.  */
extern double acosh (double __x) __attribute__ ((__nothrow__ )); extern double __acosh (double __x) __attribute__ ((__nothrow__ ));
/* Hyperbolic arc sine of X.  */
extern double asinh (double __x) __attribute__ ((__nothrow__ )); extern double __asinh (double __x) __attribute__ ((__nothrow__ ));
/* Hyperbolic arc tangent of X.  */
extern double atanh (double __x) __attribute__ ((__nothrow__ )); extern double __atanh (double __x) __attribute__ ((__nothrow__ ));
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Exponential and logarithmic functions.  */
#pragma empty_line
#pragma empty_line
/* Exponential function of X.  */
extern double exp (double __x) __attribute__ ((__nothrow__ )); extern double __exp (double __x) __attribute__ ((__nothrow__ ));
#pragma empty_line
/* Break VALUE into a normalized fraction and an integral power of 2.  */
extern double frexp (double __x, int *__exponent) __attribute__ ((__nothrow__ )); extern double __frexp (double __x, int *__exponent) __attribute__ ((__nothrow__ ));
#pragma empty_line
/* X times (two to the EXP power).  */
extern double ldexp (double __x, int __exponent) __attribute__ ((__nothrow__ )); extern double __ldexp (double __x, int __exponent) __attribute__ ((__nothrow__ ));
#pragma empty_line
/* Natural logarithm of X.  */
extern double log (double __x) __attribute__ ((__nothrow__ )); extern double __log (double __x) __attribute__ ((__nothrow__ ));
#pragma empty_line
/* Base-ten logarithm of X.  */
extern double log10 (double __x) __attribute__ ((__nothrow__ )); extern double __log10 (double __x) __attribute__ ((__nothrow__ ));
#pragma empty_line
/* Break VALUE into integral and fractional parts.  */
extern double modf (double __x, double *__iptr) __attribute__ ((__nothrow__ )); extern double __modf (double __x, double *__iptr) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));
#pragma line 127 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
/* Return exp(X) - 1.  */
extern double expm1 (double __x) __attribute__ ((__nothrow__ )); extern double __expm1 (double __x) __attribute__ ((__nothrow__ ));
#pragma empty_line
/* Return log(1 + X).  */
extern double log1p (double __x) __attribute__ ((__nothrow__ )); extern double __log1p (double __x) __attribute__ ((__nothrow__ ));
#pragma empty_line
/* Return the base 2 signed integral exponent of X.  */
extern double logb (double __x) __attribute__ ((__nothrow__ )); extern double __logb (double __x) __attribute__ ((__nothrow__ ));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Compute base-2 exponential of X.  */
extern double exp2 (double __x) __attribute__ ((__nothrow__ )); extern double __exp2 (double __x) __attribute__ ((__nothrow__ ));
#pragma empty_line
/* Compute base-2 logarithm of X.  */
extern double log2 (double __x) __attribute__ ((__nothrow__ )); extern double __log2 (double __x) __attribute__ ((__nothrow__ ));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Power functions.  */
#pragma empty_line
#pragma empty_line
/* Return X to the Y power.  */
extern double pow (double __x, double __y) __attribute__ ((__nothrow__ )); extern double __pow (double __x, double __y) __attribute__ ((__nothrow__ ));
#pragma empty_line
/* Return the square root of X.  */
extern double sqrt (double __x) __attribute__ ((__nothrow__ )); extern double __sqrt (double __x) __attribute__ ((__nothrow__ ));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Return `sqrt(X*X + Y*Y)'.  */
extern double hypot (double __x, double __y) __attribute__ ((__nothrow__ )); extern double __hypot (double __x, double __y) __attribute__ ((__nothrow__ ));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Return the cube root of X.  */
extern double cbrt (double __x) __attribute__ ((__nothrow__ )); extern double __cbrt (double __x) __attribute__ ((__nothrow__ ));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Nearest integer, absolute value, and remainder functions.  */
#pragma empty_line
#pragma empty_line
/* Smallest integral value not less than X.  */
extern double ceil (double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern double __ceil (double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
#pragma empty_line
/* Absolute value of X.  */
extern double fabs (double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern double __fabs (double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
#pragma empty_line
/* Largest integer not greater than X.  */
extern double floor (double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern double __floor (double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
#pragma empty_line
/* Floating-point modulo remainder of X/Y.  */
extern double fmod (double __x, double __y) __attribute__ ((__nothrow__ )); extern double __fmod (double __x, double __y) __attribute__ ((__nothrow__ ));
#pragma empty_line
#pragma empty_line
/* Return 0 if VALUE is finite or NaN, +1 if it
   is +Infinity, -1 if it is -Infinity.  */
extern int __isinf (double __value) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
#pragma empty_line
/* Return nonzero if VALUE is finite and not NaN.  */
extern int __finite (double __value) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Return 0 if VALUE is finite or NaN, +1 if it
   is +Infinity, -1 if it is -Infinity.  */
extern int isinf (double __value) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
/* Return nonzero if VALUE is finite and not NaN.  */
extern int finite (double __value) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
#pragma empty_line
/* Return the remainder of X/Y.  */
extern double drem (double __x, double __y) __attribute__ ((__nothrow__ )); extern double __drem (double __x, double __y) __attribute__ ((__nothrow__ ));
#pragma empty_line
#pragma empty_line
/* Return the fractional part of X after dividing out `ilogb (X)'.  */
extern double significand (double __x) __attribute__ ((__nothrow__ )); extern double __significand (double __x) __attribute__ ((__nothrow__ ));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Return X with its signed changed to Y's.  */
extern double copysign (double __x, double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern double __copysign (double __x, double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Return representation of qNaN for double type.  */
extern double nan (const char *__tagb) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern double __nan (const char *__tagb) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Return nonzero if VALUE is not a number.  */
extern int __isnan (double __value) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Return nonzero if VALUE is not a number.  */
extern int isnan (double __value) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Bessel functions.  */
extern double j0 (double) __attribute__ ((__nothrow__ )); extern double __j0 (double) __attribute__ ((__nothrow__ ));
extern double j1 (double) __attribute__ ((__nothrow__ )); extern double __j1 (double) __attribute__ ((__nothrow__ ));
extern double jn (int, double) __attribute__ ((__nothrow__ )); extern double __jn (int, double) __attribute__ ((__nothrow__ ));
extern double y0 (double) __attribute__ ((__nothrow__ )); extern double __y0 (double) __attribute__ ((__nothrow__ ));
extern double y1 (double) __attribute__ ((__nothrow__ )); extern double __y1 (double) __attribute__ ((__nothrow__ ));
extern double yn (int, double) __attribute__ ((__nothrow__ )); extern double __yn (int, double) __attribute__ ((__nothrow__ ));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Error and gamma functions.  */
extern double erf (double) __attribute__ ((__nothrow__ )); extern double __erf (double) __attribute__ ((__nothrow__ ));
extern double erfc (double) __attribute__ ((__nothrow__ )); extern double __erfc (double) __attribute__ ((__nothrow__ ));
extern double lgamma (double) __attribute__ ((__nothrow__ )); extern double __lgamma (double) __attribute__ ((__nothrow__ ));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* True gamma function.  */
extern double tgamma (double) __attribute__ ((__nothrow__ )); extern double __tgamma (double) __attribute__ ((__nothrow__ ));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Obsolete alias for `lgamma'.  */
extern double gamma (double) __attribute__ ((__nothrow__ )); extern double __gamma (double) __attribute__ ((__nothrow__ ));
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Reentrant version of lgamma.  This function uses the global variable
   `signgam'.  The reentrant version instead takes a pointer and stores
   the value through it.  */
extern double lgamma_r (double, int *__signgamp) __attribute__ ((__nothrow__ )); extern double __lgamma_r (double, int *__signgamp) __attribute__ ((__nothrow__ ));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Return the integer nearest X in the direction of the
   prevailing rounding mode.  */
extern double rint (double __x) __attribute__ ((__nothrow__ )); extern double __rint (double __x) __attribute__ ((__nothrow__ ));
#pragma empty_line
/* Return X + epsilon if X < Y, X - epsilon if X > Y.  */
extern double nextafter (double __x, double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern double __nextafter (double __x, double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
#pragma empty_line
extern double nexttoward (double __x, long double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern double __nexttoward (double __x, long double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
/* Return the remainder of integer divison X / Y with infinite precision.  */
extern double remainder (double __x, double __y) __attribute__ ((__nothrow__ )); extern double __remainder (double __x, double __y) __attribute__ ((__nothrow__ ));
#pragma empty_line
#pragma empty_line
/* Return X times (2 to the Nth power).  */
extern double scalbn (double __x, int __n) __attribute__ ((__nothrow__ )); extern double __scalbn (double __x, int __n) __attribute__ ((__nothrow__ ));
#pragma empty_line
#pragma empty_line
/* Return the binary exponent of X, which must be nonzero.  */
extern int ilogb (double __x) __attribute__ ((__nothrow__ )); extern int __ilogb (double __x) __attribute__ ((__nothrow__ ));
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Return X times (2 to the Nth power).  */
extern double scalbln (double __x, long int __n) __attribute__ ((__nothrow__ )); extern double __scalbln (double __x, long int __n) __attribute__ ((__nothrow__ ));
#pragma empty_line
/* Round X to integral value in floating-point format using current
   rounding direction, but do not raise inexact exception.  */
extern double nearbyint (double __x) __attribute__ ((__nothrow__ )); extern double __nearbyint (double __x) __attribute__ ((__nothrow__ ));
#pragma empty_line
/* Round X to nearest integral value, rounding halfway cases away from
   zero.  */
extern double round (double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern double __round (double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
#pragma empty_line
/* Round X to the integral value in floating-point format nearest but
   not larger in magnitude.  */
extern double trunc (double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern double __trunc (double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
#pragma empty_line
/* Compute remainder of X and Y and put in *QUO a value with sign of x/y
   and magnitude congruent `mod 2^n' to the magnitude of the integral
   quotient x/y, with n >= 3.  */
extern double remquo (double __x, double __y, int *__quo) __attribute__ ((__nothrow__ )); extern double __remquo (double __x, double __y, int *__quo) __attribute__ ((__nothrow__ ));
#pragma empty_line
#pragma empty_line
/* Conversion functions.  */
#pragma empty_line
/* Round X to nearest integral value according to current rounding
   direction.  */
extern long int lrint (double __x) __attribute__ ((__nothrow__ )); extern long int __lrint (double __x) __attribute__ ((__nothrow__ ));
__extension__
extern long long int llrint (double __x) __attribute__ ((__nothrow__ )); extern long long int __llrint (double __x) __attribute__ ((__nothrow__ ));
#pragma empty_line
/* Round X to nearest integral value, rounding halfway cases away from
   zero.  */
extern long int lround (double __x) __attribute__ ((__nothrow__ )); extern long int __lround (double __x) __attribute__ ((__nothrow__ ));
__extension__
extern long long int llround (double __x) __attribute__ ((__nothrow__ )); extern long long int __llround (double __x) __attribute__ ((__nothrow__ ));
#pragma empty_line
#pragma empty_line
/* Return positive difference between X and Y.  */
extern double fdim (double __x, double __y) __attribute__ ((__nothrow__ )); extern double __fdim (double __x, double __y) __attribute__ ((__nothrow__ ));
#pragma empty_line
/* Return maximum numeric value from X and Y.  */
extern double fmax (double __x, double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern double __fmax (double __x, double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
#pragma empty_line
/* Return minimum numeric value from X and Y.  */
extern double fmin (double __x, double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern double __fmin (double __x, double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
/* Classify given number.  */
extern int __fpclassify (double __value) __attribute__ ((__nothrow__ ))
     __attribute__ ((__const__));
#pragma empty_line
/* Test for negative number.  */
extern int __signbit (double __value) __attribute__ ((__nothrow__ ))
     __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
/* Multiply-add function computed as a ternary operation.  */
extern double fma (double __x, double __y, double __z) __attribute__ ((__nothrow__ )); extern double __fma (double __x, double __y, double __z) __attribute__ ((__nothrow__ ));
#pragma line 382 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
/* Return X times (2 to the Nth power).  */
extern double scalb (double __x, double __n) __attribute__ ((__nothrow__ )); extern double __scalb (double __x, double __n) __attribute__ ((__nothrow__ ));
#pragma line 84 "/usr/include/math.h" 2 3 4
#pragma line 93 "/usr/include/math.h" 3 4
/* Include the file of declarations again, this time using `float'
   instead of `double' and appending f to each function name.  */
#pragma line 104 "/usr/include/math.h" 3 4
#pragma line 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 1 3 4
/* Prototype declarations for math functions; helper file for <math.h>.
   Copyright (C) 1996-2016 Free Software Foundation, Inc.
   This file is part of the GNU C Library.
#pragma empty_line
   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.
#pragma empty_line
   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.
#pragma empty_line
   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */
#pragma empty_line
/* NOTE: Because of the special way this file is used by <math.h>, this
   file must NOT be protected from multiple inclusion as header files
   usually are.
#pragma empty_line
   This file provides prototype declarations for the math functions.
   Most functions are declared using the macro:
#pragma empty_line
   __MATHCALL (NAME,[_r], (ARGS...));
#pragma empty_line
   This means there is a function `NAME' returning `double' and a function
   `NAMEf' returning `float'.  Each place `_Mdouble_' appears in the
   prototype, that is actually `double' in the prototype for `NAME' and
   `float' in the prototype for `NAMEf'.  Reentrant variant functions are
   called `NAME_r' and `NAMEf_r'.
#pragma empty_line
   Functions returning other types like `int' are declared using the macro:
#pragma empty_line
   __MATHDECL (TYPE, NAME,[_r], (ARGS...));
#pragma empty_line
   This is just like __MATHCALL but for a function returning `TYPE'
   instead of `_Mdouble_'.  In all of these cases, there is still
   both a `NAME' and a `NAMEf' that takes `float' arguments.
#pragma empty_line
   Note that there must be no whitespace before the argument passed for
   NAME, to make token pasting work with -traditional.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Trigonometric functions.  */
#pragma empty_line
#pragma empty_line
/* Arc cosine of X.  */
extern float acosf (float __x) __attribute__ ((__nothrow__ )); extern float __acosf (float __x) __attribute__ ((__nothrow__ ));
/* Arc sine of X.  */
extern float asinf (float __x) __attribute__ ((__nothrow__ )); extern float __asinf (float __x) __attribute__ ((__nothrow__ ));
/* Arc tangent of X.  */
extern float atanf (float __x) __attribute__ ((__nothrow__ )); extern float __atanf (float __x) __attribute__ ((__nothrow__ ));
/* Arc tangent of Y/X.  */
extern float atan2f (float __y, float __x) __attribute__ ((__nothrow__ )); extern float __atan2f (float __y, float __x) __attribute__ ((__nothrow__ ));
#pragma empty_line
/* Cosine of X.  */
extern float cosf (float __x) __attribute__ ((__nothrow__ )); extern float __cosf (float __x) __attribute__ ((__nothrow__ ));
/* Sine of X.  */
extern float sinf (float __x) __attribute__ ((__nothrow__ )); extern float __sinf (float __x) __attribute__ ((__nothrow__ ));
/* Tangent of X.  */
extern float tanf (float __x) __attribute__ ((__nothrow__ )); extern float __tanf (float __x) __attribute__ ((__nothrow__ ));
#pragma empty_line
/* Hyperbolic functions.  */
#pragma empty_line
/* Hyperbolic cosine of X.  */
extern float coshf (float __x) __attribute__ ((__nothrow__ )); extern float __coshf (float __x) __attribute__ ((__nothrow__ ));
/* Hyperbolic sine of X.  */
extern float sinhf (float __x) __attribute__ ((__nothrow__ )); extern float __sinhf (float __x) __attribute__ ((__nothrow__ ));
/* Hyperbolic tangent of X.  */
extern float tanhf (float __x) __attribute__ ((__nothrow__ )); extern float __tanhf (float __x) __attribute__ ((__nothrow__ ));
#pragma line 87 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
/* Hyperbolic arc cosine of X.  */
extern float acoshf (float __x) __attribute__ ((__nothrow__ )); extern float __acoshf (float __x) __attribute__ ((__nothrow__ ));
/* Hyperbolic arc sine of X.  */
extern float asinhf (float __x) __attribute__ ((__nothrow__ )); extern float __asinhf (float __x) __attribute__ ((__nothrow__ ));
/* Hyperbolic arc tangent of X.  */
extern float atanhf (float __x) __attribute__ ((__nothrow__ )); extern float __atanhf (float __x) __attribute__ ((__nothrow__ ));
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Exponential and logarithmic functions.  */
#pragma empty_line
#pragma empty_line
/* Exponential function of X.  */
extern float expf (float __x) __attribute__ ((__nothrow__ )); extern float __expf (float __x) __attribute__ ((__nothrow__ ));
#pragma empty_line
/* Break VALUE into a normalized fraction and an integral power of 2.  */
extern float frexpf (float __x, int *__exponent) __attribute__ ((__nothrow__ )); extern float __frexpf (float __x, int *__exponent) __attribute__ ((__nothrow__ ));
#pragma empty_line
/* X times (two to the EXP power).  */
extern float ldexpf (float __x, int __exponent) __attribute__ ((__nothrow__ )); extern float __ldexpf (float __x, int __exponent) __attribute__ ((__nothrow__ ));
#pragma empty_line
/* Natural logarithm of X.  */
extern float logf (float __x) __attribute__ ((__nothrow__ )); extern float __logf (float __x) __attribute__ ((__nothrow__ ));
#pragma empty_line
/* Base-ten logarithm of X.  */
extern float log10f (float __x) __attribute__ ((__nothrow__ )); extern float __log10f (float __x) __attribute__ ((__nothrow__ ));
#pragma empty_line
/* Break VALUE into integral and fractional parts.  */
extern float modff (float __x, float *__iptr) __attribute__ ((__nothrow__ )); extern float __modff (float __x, float *__iptr) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));
#pragma line 127 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
/* Return exp(X) - 1.  */
extern float expm1f (float __x) __attribute__ ((__nothrow__ )); extern float __expm1f (float __x) __attribute__ ((__nothrow__ ));
#pragma empty_line
/* Return log(1 + X).  */
extern float log1pf (float __x) __attribute__ ((__nothrow__ )); extern float __log1pf (float __x) __attribute__ ((__nothrow__ ));
#pragma empty_line
/* Return the base 2 signed integral exponent of X.  */
extern float logbf (float __x) __attribute__ ((__nothrow__ )); extern float __logbf (float __x) __attribute__ ((__nothrow__ ));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Compute base-2 exponential of X.  */
extern float exp2f (float __x) __attribute__ ((__nothrow__ )); extern float __exp2f (float __x) __attribute__ ((__nothrow__ ));
#pragma empty_line
/* Compute base-2 logarithm of X.  */
extern float log2f (float __x) __attribute__ ((__nothrow__ )); extern float __log2f (float __x) __attribute__ ((__nothrow__ ));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Power functions.  */
#pragma empty_line
#pragma empty_line
/* Return X to the Y power.  */
extern float powf (float __x, float __y) __attribute__ ((__nothrow__ )); extern float __powf (float __x, float __y) __attribute__ ((__nothrow__ ));
#pragma empty_line
/* Return the square root of X.  */
extern float sqrtf (float __x) __attribute__ ((__nothrow__ )); extern float __sqrtf (float __x) __attribute__ ((__nothrow__ ));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Return `sqrt(X*X + Y*Y)'.  */
extern float hypotf (float __x, float __y) __attribute__ ((__nothrow__ )); extern float __hypotf (float __x, float __y) __attribute__ ((__nothrow__ ));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Return the cube root of X.  */
extern float cbrtf (float __x) __attribute__ ((__nothrow__ )); extern float __cbrtf (float __x) __attribute__ ((__nothrow__ ));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Nearest integer, absolute value, and remainder functions.  */
#pragma empty_line
#pragma empty_line
/* Smallest integral value not less than X.  */
extern float ceilf (float __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern float __ceilf (float __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
#pragma empty_line
/* Absolute value of X.  */
extern float fabsf (float __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern float __fabsf (float __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
#pragma empty_line
/* Largest integer not greater than X.  */
extern float floorf (float __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern float __floorf (float __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
#pragma empty_line
/* Floating-point modulo remainder of X/Y.  */
extern float fmodf (float __x, float __y) __attribute__ ((__nothrow__ )); extern float __fmodf (float __x, float __y) __attribute__ ((__nothrow__ ));
#pragma empty_line
#pragma empty_line
/* Return 0 if VALUE is finite or NaN, +1 if it
   is +Infinity, -1 if it is -Infinity.  */
extern int __isinff (float __value) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
#pragma empty_line
/* Return nonzero if VALUE is finite and not NaN.  */
extern int __finitef (float __value) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Return 0 if VALUE is finite or NaN, +1 if it
   is +Infinity, -1 if it is -Infinity.  */
extern int isinff (float __value) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
/* Return nonzero if VALUE is finite and not NaN.  */
extern int finitef (float __value) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
#pragma empty_line
/* Return the remainder of X/Y.  */
extern float dremf (float __x, float __y) __attribute__ ((__nothrow__ )); extern float __dremf (float __x, float __y) __attribute__ ((__nothrow__ ));
#pragma empty_line
#pragma empty_line
/* Return the fractional part of X after dividing out `ilogb (X)'.  */
extern float significandf (float __x) __attribute__ ((__nothrow__ )); extern float __significandf (float __x) __attribute__ ((__nothrow__ ));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Return X with its signed changed to Y's.  */
extern float copysignf (float __x, float __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern float __copysignf (float __x, float __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Return representation of qNaN for double type.  */
extern float nanf (const char *__tagb) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern float __nanf (const char *__tagb) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Return nonzero if VALUE is not a number.  */
extern int __isnanf (float __value) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Return nonzero if VALUE is not a number.  */
extern int isnanf (float __value) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Bessel functions.  */
extern float j0f (float) __attribute__ ((__nothrow__ )); extern float __j0f (float) __attribute__ ((__nothrow__ ));
extern float j1f (float) __attribute__ ((__nothrow__ )); extern float __j1f (float) __attribute__ ((__nothrow__ ));
extern float jnf (int, float) __attribute__ ((__nothrow__ )); extern float __jnf (int, float) __attribute__ ((__nothrow__ ));
extern float y0f (float) __attribute__ ((__nothrow__ )); extern float __y0f (float) __attribute__ ((__nothrow__ ));
extern float y1f (float) __attribute__ ((__nothrow__ )); extern float __y1f (float) __attribute__ ((__nothrow__ ));
extern float ynf (int, float) __attribute__ ((__nothrow__ )); extern float __ynf (int, float) __attribute__ ((__nothrow__ ));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Error and gamma functions.  */
extern float erff (float) __attribute__ ((__nothrow__ )); extern float __erff (float) __attribute__ ((__nothrow__ ));
extern float erfcf (float) __attribute__ ((__nothrow__ )); extern float __erfcf (float) __attribute__ ((__nothrow__ ));
extern float lgammaf (float) __attribute__ ((__nothrow__ )); extern float __lgammaf (float) __attribute__ ((__nothrow__ ));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* True gamma function.  */
extern float tgammaf (float) __attribute__ ((__nothrow__ )); extern float __tgammaf (float) __attribute__ ((__nothrow__ ));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Obsolete alias for `lgamma'.  */
extern float gammaf (float) __attribute__ ((__nothrow__ )); extern float __gammaf (float) __attribute__ ((__nothrow__ ));
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Reentrant version of lgamma.  This function uses the global variable
   `signgam'.  The reentrant version instead takes a pointer and stores
   the value through it.  */
extern float lgammaf_r (float, int *__signgamp) __attribute__ ((__nothrow__ )); extern float __lgammaf_r (float, int *__signgamp) __attribute__ ((__nothrow__ ));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Return the integer nearest X in the direction of the
   prevailing rounding mode.  */
extern float rintf (float __x) __attribute__ ((__nothrow__ )); extern float __rintf (float __x) __attribute__ ((__nothrow__ ));
#pragma empty_line
/* Return X + epsilon if X < Y, X - epsilon if X > Y.  */
extern float nextafterf (float __x, float __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern float __nextafterf (float __x, float __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
#pragma empty_line
extern float nexttowardf (float __x, long double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern float __nexttowardf (float __x, long double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
/* Return the remainder of integer divison X / Y with infinite precision.  */
extern float remainderf (float __x, float __y) __attribute__ ((__nothrow__ )); extern float __remainderf (float __x, float __y) __attribute__ ((__nothrow__ ));
#pragma empty_line
#pragma empty_line
/* Return X times (2 to the Nth power).  */
extern float scalbnf (float __x, int __n) __attribute__ ((__nothrow__ )); extern float __scalbnf (float __x, int __n) __attribute__ ((__nothrow__ ));
#pragma empty_line
#pragma empty_line
/* Return the binary exponent of X, which must be nonzero.  */
extern int ilogbf (float __x) __attribute__ ((__nothrow__ )); extern int __ilogbf (float __x) __attribute__ ((__nothrow__ ));
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Return X times (2 to the Nth power).  */
extern float scalblnf (float __x, long int __n) __attribute__ ((__nothrow__ )); extern float __scalblnf (float __x, long int __n) __attribute__ ((__nothrow__ ));
#pragma empty_line
/* Round X to integral value in floating-point format using current
   rounding direction, but do not raise inexact exception.  */
extern float nearbyintf (float __x) __attribute__ ((__nothrow__ )); extern float __nearbyintf (float __x) __attribute__ ((__nothrow__ ));
#pragma empty_line
/* Round X to nearest integral value, rounding halfway cases away from
   zero.  */
extern float roundf (float __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern float __roundf (float __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
#pragma empty_line
/* Round X to the integral value in floating-point format nearest but
   not larger in magnitude.  */
extern float truncf (float __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern float __truncf (float __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
#pragma empty_line
/* Compute remainder of X and Y and put in *QUO a value with sign of x/y
   and magnitude congruent `mod 2^n' to the magnitude of the integral
   quotient x/y, with n >= 3.  */
extern float remquof (float __x, float __y, int *__quo) __attribute__ ((__nothrow__ )); extern float __remquof (float __x, float __y, int *__quo) __attribute__ ((__nothrow__ ));
#pragma empty_line
#pragma empty_line
/* Conversion functions.  */
#pragma empty_line
/* Round X to nearest integral value according to current rounding
   direction.  */
extern long int lrintf (float __x) __attribute__ ((__nothrow__ )); extern long int __lrintf (float __x) __attribute__ ((__nothrow__ ));
__extension__
extern long long int llrintf (float __x) __attribute__ ((__nothrow__ )); extern long long int __llrintf (float __x) __attribute__ ((__nothrow__ ));
#pragma empty_line
/* Round X to nearest integral value, rounding halfway cases away from
   zero.  */
extern long int lroundf (float __x) __attribute__ ((__nothrow__ )); extern long int __lroundf (float __x) __attribute__ ((__nothrow__ ));
__extension__
extern long long int llroundf (float __x) __attribute__ ((__nothrow__ )); extern long long int __llroundf (float __x) __attribute__ ((__nothrow__ ));
#pragma empty_line
#pragma empty_line
/* Return positive difference between X and Y.  */
extern float fdimf (float __x, float __y) __attribute__ ((__nothrow__ )); extern float __fdimf (float __x, float __y) __attribute__ ((__nothrow__ ));
#pragma empty_line
/* Return maximum numeric value from X and Y.  */
extern float fmaxf (float __x, float __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern float __fmaxf (float __x, float __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
#pragma empty_line
/* Return minimum numeric value from X and Y.  */
extern float fminf (float __x, float __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern float __fminf (float __x, float __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
/* Classify given number.  */
extern int __fpclassifyf (float __value) __attribute__ ((__nothrow__ ))
     __attribute__ ((__const__));
#pragma empty_line
/* Test for negative number.  */
extern int __signbitf (float __value) __attribute__ ((__nothrow__ ))
     __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
/* Multiply-add function computed as a ternary operation.  */
extern float fmaf (float __x, float __y, float __z) __attribute__ ((__nothrow__ )); extern float __fmaf (float __x, float __y, float __z) __attribute__ ((__nothrow__ ));
#pragma line 382 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
/* Return X times (2 to the Nth power).  */
extern float scalbf (float __x, float __n) __attribute__ ((__nothrow__ )); extern float __scalbf (float __x, float __n) __attribute__ ((__nothrow__ ));
#pragma line 105 "/usr/include/math.h" 2 3 4
#pragma line 139 "/usr/include/math.h" 3 4
/* Include the file of declarations again, this time using `long double'
   instead of `double' and appending l to each function name.  */
#pragma line 151 "/usr/include/math.h" 3 4
#pragma line 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 1 3 4
/* Prototype declarations for math functions; helper file for <math.h>.
   Copyright (C) 1996-2016 Free Software Foundation, Inc.
   This file is part of the GNU C Library.
#pragma empty_line
   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.
#pragma empty_line
   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.
#pragma empty_line
   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */
#pragma empty_line
/* NOTE: Because of the special way this file is used by <math.h>, this
   file must NOT be protected from multiple inclusion as header files
   usually are.
#pragma empty_line
   This file provides prototype declarations for the math functions.
   Most functions are declared using the macro:
#pragma empty_line
   __MATHCALL (NAME,[_r], (ARGS...));
#pragma empty_line
   This means there is a function `NAME' returning `double' and a function
   `NAMEf' returning `float'.  Each place `_Mdouble_' appears in the
   prototype, that is actually `double' in the prototype for `NAME' and
   `float' in the prototype for `NAMEf'.  Reentrant variant functions are
   called `NAME_r' and `NAMEf_r'.
#pragma empty_line
   Functions returning other types like `int' are declared using the macro:
#pragma empty_line
   __MATHDECL (TYPE, NAME,[_r], (ARGS...));
#pragma empty_line
   This is just like __MATHCALL but for a function returning `TYPE'
   instead of `_Mdouble_'.  In all of these cases, there is still
   both a `NAME' and a `NAMEf' that takes `float' arguments.
#pragma empty_line
   Note that there must be no whitespace before the argument passed for
   NAME, to make token pasting work with -traditional.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Trigonometric functions.  */
#pragma empty_line
#pragma empty_line
/* Arc cosine of X.  */
extern long double acosl (long double __x) __attribute__ ((__nothrow__ )); extern long double __acosl (long double __x) __attribute__ ((__nothrow__ ));
/* Arc sine of X.  */
extern long double asinl (long double __x) __attribute__ ((__nothrow__ )); extern long double __asinl (long double __x) __attribute__ ((__nothrow__ ));
/* Arc tangent of X.  */
extern long double atanl (long double __x) __attribute__ ((__nothrow__ )); extern long double __atanl (long double __x) __attribute__ ((__nothrow__ ));
/* Arc tangent of Y/X.  */
extern long double atan2l (long double __y, long double __x) __attribute__ ((__nothrow__ )); extern long double __atan2l (long double __y, long double __x) __attribute__ ((__nothrow__ ));
#pragma empty_line
/* Cosine of X.  */
extern long double cosl (long double __x) __attribute__ ((__nothrow__ )); extern long double __cosl (long double __x) __attribute__ ((__nothrow__ ));
/* Sine of X.  */
extern long double sinl (long double __x) __attribute__ ((__nothrow__ )); extern long double __sinl (long double __x) __attribute__ ((__nothrow__ ));
/* Tangent of X.  */
extern long double tanl (long double __x) __attribute__ ((__nothrow__ )); extern long double __tanl (long double __x) __attribute__ ((__nothrow__ ));
#pragma empty_line
/* Hyperbolic functions.  */
#pragma empty_line
/* Hyperbolic cosine of X.  */
extern long double coshl (long double __x) __attribute__ ((__nothrow__ )); extern long double __coshl (long double __x) __attribute__ ((__nothrow__ ));
/* Hyperbolic sine of X.  */
extern long double sinhl (long double __x) __attribute__ ((__nothrow__ )); extern long double __sinhl (long double __x) __attribute__ ((__nothrow__ ));
/* Hyperbolic tangent of X.  */
extern long double tanhl (long double __x) __attribute__ ((__nothrow__ )); extern long double __tanhl (long double __x) __attribute__ ((__nothrow__ ));
#pragma line 87 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
/* Hyperbolic arc cosine of X.  */
extern long double acoshl (long double __x) __attribute__ ((__nothrow__ )); extern long double __acoshl (long double __x) __attribute__ ((__nothrow__ ));
/* Hyperbolic arc sine of X.  */
extern long double asinhl (long double __x) __attribute__ ((__nothrow__ )); extern long double __asinhl (long double __x) __attribute__ ((__nothrow__ ));
/* Hyperbolic arc tangent of X.  */
extern long double atanhl (long double __x) __attribute__ ((__nothrow__ )); extern long double __atanhl (long double __x) __attribute__ ((__nothrow__ ));
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Exponential and logarithmic functions.  */
#pragma empty_line
#pragma empty_line
/* Exponential function of X.  */
extern long double expl (long double __x) __attribute__ ((__nothrow__ )); extern long double __expl (long double __x) __attribute__ ((__nothrow__ ));
#pragma empty_line
/* Break VALUE into a normalized fraction and an integral power of 2.  */
extern long double frexpl (long double __x, int *__exponent) __attribute__ ((__nothrow__ )); extern long double __frexpl (long double __x, int *__exponent) __attribute__ ((__nothrow__ ));
#pragma empty_line
/* X times (two to the EXP power).  */
extern long double ldexpl (long double __x, int __exponent) __attribute__ ((__nothrow__ )); extern long double __ldexpl (long double __x, int __exponent) __attribute__ ((__nothrow__ ));
#pragma empty_line
/* Natural logarithm of X.  */
extern long double logl (long double __x) __attribute__ ((__nothrow__ )); extern long double __logl (long double __x) __attribute__ ((__nothrow__ ));
#pragma empty_line
/* Base-ten logarithm of X.  */
extern long double log10l (long double __x) __attribute__ ((__nothrow__ )); extern long double __log10l (long double __x) __attribute__ ((__nothrow__ ));
#pragma empty_line
/* Break VALUE into integral and fractional parts.  */
extern long double modfl (long double __x, long double *__iptr) __attribute__ ((__nothrow__ )); extern long double __modfl (long double __x, long double *__iptr) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));
#pragma line 127 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
/* Return exp(X) - 1.  */
extern long double expm1l (long double __x) __attribute__ ((__nothrow__ )); extern long double __expm1l (long double __x) __attribute__ ((__nothrow__ ));
#pragma empty_line
/* Return log(1 + X).  */
extern long double log1pl (long double __x) __attribute__ ((__nothrow__ )); extern long double __log1pl (long double __x) __attribute__ ((__nothrow__ ));
#pragma empty_line
/* Return the base 2 signed integral exponent of X.  */
extern long double logbl (long double __x) __attribute__ ((__nothrow__ )); extern long double __logbl (long double __x) __attribute__ ((__nothrow__ ));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Compute base-2 exponential of X.  */
extern long double exp2l (long double __x) __attribute__ ((__nothrow__ )); extern long double __exp2l (long double __x) __attribute__ ((__nothrow__ ));
#pragma empty_line
/* Compute base-2 logarithm of X.  */
extern long double log2l (long double __x) __attribute__ ((__nothrow__ )); extern long double __log2l (long double __x) __attribute__ ((__nothrow__ ));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Power functions.  */
#pragma empty_line
#pragma empty_line
/* Return X to the Y power.  */
extern long double powl (long double __x, long double __y) __attribute__ ((__nothrow__ )); extern long double __powl (long double __x, long double __y) __attribute__ ((__nothrow__ ));
#pragma empty_line
/* Return the square root of X.  */
extern long double sqrtl (long double __x) __attribute__ ((__nothrow__ )); extern long double __sqrtl (long double __x) __attribute__ ((__nothrow__ ));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Return `sqrt(X*X + Y*Y)'.  */
extern long double hypotl (long double __x, long double __y) __attribute__ ((__nothrow__ )); extern long double __hypotl (long double __x, long double __y) __attribute__ ((__nothrow__ ));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Return the cube root of X.  */
extern long double cbrtl (long double __x) __attribute__ ((__nothrow__ )); extern long double __cbrtl (long double __x) __attribute__ ((__nothrow__ ));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Nearest integer, absolute value, and remainder functions.  */
#pragma empty_line
#pragma empty_line
/* Smallest integral value not less than X.  */
extern long double ceill (long double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern long double __ceill (long double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
#pragma empty_line
/* Absolute value of X.  */
extern long double fabsl (long double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern long double __fabsl (long double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
#pragma empty_line
/* Largest integer not greater than X.  */
extern long double floorl (long double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern long double __floorl (long double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
#pragma empty_line
/* Floating-point modulo remainder of X/Y.  */
extern long double fmodl (long double __x, long double __y) __attribute__ ((__nothrow__ )); extern long double __fmodl (long double __x, long double __y) __attribute__ ((__nothrow__ ));
#pragma empty_line
#pragma empty_line
/* Return 0 if VALUE is finite or NaN, +1 if it
   is +Infinity, -1 if it is -Infinity.  */
extern int __isinfl (long double __value) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
#pragma empty_line
/* Return nonzero if VALUE is finite and not NaN.  */
extern int __finitel (long double __value) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Return 0 if VALUE is finite or NaN, +1 if it
   is +Infinity, -1 if it is -Infinity.  */
extern int isinfl (long double __value) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
/* Return nonzero if VALUE is finite and not NaN.  */
extern int finitel (long double __value) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
#pragma empty_line
/* Return the remainder of X/Y.  */
extern long double dreml (long double __x, long double __y) __attribute__ ((__nothrow__ )); extern long double __dreml (long double __x, long double __y) __attribute__ ((__nothrow__ ));
#pragma empty_line
#pragma empty_line
/* Return the fractional part of X after dividing out `ilogb (X)'.  */
extern long double significandl (long double __x) __attribute__ ((__nothrow__ )); extern long double __significandl (long double __x) __attribute__ ((__nothrow__ ));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Return X with its signed changed to Y's.  */
extern long double copysignl (long double __x, long double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern long double __copysignl (long double __x, long double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Return representation of qNaN for double type.  */
extern long double nanl (const char *__tagb) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern long double __nanl (const char *__tagb) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Return nonzero if VALUE is not a number.  */
extern int __isnanl (long double __value) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Return nonzero if VALUE is not a number.  */
extern int isnanl (long double __value) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Bessel functions.  */
extern long double j0l (long double) __attribute__ ((__nothrow__ )); extern long double __j0l (long double) __attribute__ ((__nothrow__ ));
extern long double j1l (long double) __attribute__ ((__nothrow__ )); extern long double __j1l (long double) __attribute__ ((__nothrow__ ));
extern long double jnl (int, long double) __attribute__ ((__nothrow__ )); extern long double __jnl (int, long double) __attribute__ ((__nothrow__ ));
extern long double y0l (long double) __attribute__ ((__nothrow__ )); extern long double __y0l (long double) __attribute__ ((__nothrow__ ));
extern long double y1l (long double) __attribute__ ((__nothrow__ )); extern long double __y1l (long double) __attribute__ ((__nothrow__ ));
extern long double ynl (int, long double) __attribute__ ((__nothrow__ )); extern long double __ynl (int, long double) __attribute__ ((__nothrow__ ));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Error and gamma functions.  */
extern long double erfl (long double) __attribute__ ((__nothrow__ )); extern long double __erfl (long double) __attribute__ ((__nothrow__ ));
extern long double erfcl (long double) __attribute__ ((__nothrow__ )); extern long double __erfcl (long double) __attribute__ ((__nothrow__ ));
extern long double lgammal (long double) __attribute__ ((__nothrow__ )); extern long double __lgammal (long double) __attribute__ ((__nothrow__ ));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* True gamma function.  */
extern long double tgammal (long double) __attribute__ ((__nothrow__ )); extern long double __tgammal (long double) __attribute__ ((__nothrow__ ));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Obsolete alias for `lgamma'.  */
extern long double gammal (long double) __attribute__ ((__nothrow__ )); extern long double __gammal (long double) __attribute__ ((__nothrow__ ));
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Reentrant version of lgamma.  This function uses the global variable
   `signgam'.  The reentrant version instead takes a pointer and stores
   the value through it.  */
extern long double lgammal_r (long double, int *__signgamp) __attribute__ ((__nothrow__ )); extern long double __lgammal_r (long double, int *__signgamp) __attribute__ ((__nothrow__ ));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Return the integer nearest X in the direction of the
   prevailing rounding mode.  */
extern long double rintl (long double __x) __attribute__ ((__nothrow__ )); extern long double __rintl (long double __x) __attribute__ ((__nothrow__ ));
#pragma empty_line
/* Return X + epsilon if X < Y, X - epsilon if X > Y.  */
extern long double nextafterl (long double __x, long double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern long double __nextafterl (long double __x, long double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
#pragma empty_line
extern long double nexttowardl (long double __x, long double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern long double __nexttowardl (long double __x, long double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
/* Return the remainder of integer divison X / Y with infinite precision.  */
extern long double remainderl (long double __x, long double __y) __attribute__ ((__nothrow__ )); extern long double __remainderl (long double __x, long double __y) __attribute__ ((__nothrow__ ));
#pragma empty_line
#pragma empty_line
/* Return X times (2 to the Nth power).  */
extern long double scalbnl (long double __x, int __n) __attribute__ ((__nothrow__ )); extern long double __scalbnl (long double __x, int __n) __attribute__ ((__nothrow__ ));
#pragma empty_line
#pragma empty_line
/* Return the binary exponent of X, which must be nonzero.  */
extern int ilogbl (long double __x) __attribute__ ((__nothrow__ )); extern int __ilogbl (long double __x) __attribute__ ((__nothrow__ ));
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Return X times (2 to the Nth power).  */
extern long double scalblnl (long double __x, long int __n) __attribute__ ((__nothrow__ )); extern long double __scalblnl (long double __x, long int __n) __attribute__ ((__nothrow__ ));
#pragma empty_line
/* Round X to integral value in floating-point format using current
   rounding direction, but do not raise inexact exception.  */
extern long double nearbyintl (long double __x) __attribute__ ((__nothrow__ )); extern long double __nearbyintl (long double __x) __attribute__ ((__nothrow__ ));
#pragma empty_line
/* Round X to nearest integral value, rounding halfway cases away from
   zero.  */
extern long double roundl (long double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern long double __roundl (long double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
#pragma empty_line
/* Round X to the integral value in floating-point format nearest but
   not larger in magnitude.  */
extern long double truncl (long double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern long double __truncl (long double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
#pragma empty_line
/* Compute remainder of X and Y and put in *QUO a value with sign of x/y
   and magnitude congruent `mod 2^n' to the magnitude of the integral
   quotient x/y, with n >= 3.  */
extern long double remquol (long double __x, long double __y, int *__quo) __attribute__ ((__nothrow__ )); extern long double __remquol (long double __x, long double __y, int *__quo) __attribute__ ((__nothrow__ ));
#pragma empty_line
#pragma empty_line
/* Conversion functions.  */
#pragma empty_line
/* Round X to nearest integral value according to current rounding
   direction.  */
extern long int lrintl (long double __x) __attribute__ ((__nothrow__ )); extern long int __lrintl (long double __x) __attribute__ ((__nothrow__ ));
__extension__
extern long long int llrintl (long double __x) __attribute__ ((__nothrow__ )); extern long long int __llrintl (long double __x) __attribute__ ((__nothrow__ ));
#pragma empty_line
/* Round X to nearest integral value, rounding halfway cases away from
   zero.  */
extern long int lroundl (long double __x) __attribute__ ((__nothrow__ )); extern long int __lroundl (long double __x) __attribute__ ((__nothrow__ ));
__extension__
extern long long int llroundl (long double __x) __attribute__ ((__nothrow__ )); extern long long int __llroundl (long double __x) __attribute__ ((__nothrow__ ));
#pragma empty_line
#pragma empty_line
/* Return positive difference between X and Y.  */
extern long double fdiml (long double __x, long double __y) __attribute__ ((__nothrow__ )); extern long double __fdiml (long double __x, long double __y) __attribute__ ((__nothrow__ ));
#pragma empty_line
/* Return maximum numeric value from X and Y.  */
extern long double fmaxl (long double __x, long double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern long double __fmaxl (long double __x, long double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
#pragma empty_line
/* Return minimum numeric value from X and Y.  */
extern long double fminl (long double __x, long double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern long double __fminl (long double __x, long double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
/* Classify given number.  */
extern int __fpclassifyl (long double __value) __attribute__ ((__nothrow__ ))
     __attribute__ ((__const__));
#pragma empty_line
/* Test for negative number.  */
extern int __signbitl (long double __value) __attribute__ ((__nothrow__ ))
     __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
/* Multiply-add function computed as a ternary operation.  */
extern long double fmal (long double __x, long double __y, long double __z) __attribute__ ((__nothrow__ )); extern long double __fmal (long double __x, long double __y, long double __z) __attribute__ ((__nothrow__ ));
#pragma line 382 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
/* Return X times (2 to the Nth power).  */
extern long double scalbl (long double __x, long double __n) __attribute__ ((__nothrow__ )); extern long double __scalbl (long double __x, long double __n) __attribute__ ((__nothrow__ ));
#pragma line 152 "/usr/include/math.h" 2 3 4
#pragma line 167 "/usr/include/math.h" 3 4
/* This variable is used by `gamma' and `lgamma'.  */
extern int signgam;
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* ISO C99 defines some generic macros which work on any data type.  */
#pragma empty_line
#pragma empty_line
/* Get the architecture specific values describing the floating-point
   evaluation.  The following symbols will get defined:
#pragma empty_line
    float_t	floating-point type at least as wide as `float' used
		to evaluate `float' expressions
    double_t	floating-point type at least as wide as `double' used
		to evaluate `double' expressions
#pragma empty_line
    FLT_EVAL_METHOD
		Defined to
		  0	if `float_t' is `float' and `double_t' is `double'
		  1	if `float_t' and `double_t' are `double'
		  2	if `float_t' and `double_t' are `long double'
		  else	`float_t' and `double_t' are unspecified
#pragma empty_line
    INFINITY	representation of the infinity value of type `float'
#pragma empty_line
    FP_FAST_FMA
    FP_FAST_FMAF
    FP_FAST_FMAL
		If defined it indicates that the `fma' function
		generally executes about as fast as a multiply and an add.
		This macro is defined only iff the `fma' function is
		implemented directly with a hardware multiply-add instructions.
#pragma empty_line
    FP_ILOGB0	Expands to a value returned by `ilogb (0.0)'.
    FP_ILOGBNAN	Expands to a value returned by `ilogb (NAN)'.
#pragma empty_line
    DECIMAL_DIG	Number of decimal digits supported by conversion between
		decimal and all internal floating-point formats.
#pragma empty_line
*/
#pragma empty_line
/* All floating-point numbers can be put in one of these categories.  */
enum
  {
    FP_NAN =
#pragma empty_line
      0,
    FP_INFINITE =
#pragma empty_line
      1,
    FP_ZERO =
#pragma empty_line
      2,
    FP_SUBNORMAL =
#pragma empty_line
      3,
    FP_NORMAL =
#pragma empty_line
      4
  };
#pragma empty_line
/* GCC bug 66462 means we cannot use the math builtins with -fsignaling-nan,
   so disable builtins if this is enabled.  When fixed in a newer GCC,
   the __SUPPORT_SNAN__ check may be skipped for those versions.  */
#pragma empty_line
/* Return number of classification appropriate for X.  */
#pragma line 248 "/usr/include/math.h" 3 4
/* Return nonzero value if sign of X is negative.  */
#pragma line 268 "/usr/include/math.h" 3 4
/* Return nonzero value if X is not +-Inf or NaN.  */
#pragma line 282 "/usr/include/math.h" 3 4
/* Return nonzero value if X is neither zero, subnormal, Inf, nor NaN.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Return nonzero value if X is a NaN.  We could use `fpclassify' but
   we already have this functions `__isnan' and it is faster.  */
#pragma line 304 "/usr/include/math.h" 3 4
/* Return nonzero value if X is positive or negative infinity.  */
#pragma line 318 "/usr/include/math.h" 3 4
/* Bitmasks for the math_errhandling macro.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* By default all functions support both errno and exception handling.
   In gcc's fast math mode and if inline functions are defined this
   might not be true.  */
#pragma line 346 "/usr/include/math.h" 3 4
/* Support for various different standard error handling behaviors.  */
typedef enum
{
  _IEEE_ = -1, /* According to IEEE 754/IEEE 854.  */
  _SVID_, /* According to System V, release 4.  */
  _XOPEN_, /* Nowadays also Unix98.  */
  _POSIX_,
  _ISOC_ /* Actually this is ISO C99.  */
} _LIB_VERSION_TYPE;
#pragma empty_line
/* This variable can be changed at run-time to any of the values above to
   affect floating point error handling behavior (it may also be necessary
   to change the hardware FPU exception settings).  */
extern _LIB_VERSION_TYPE _LIB_VERSION;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* In SVID error handling, `matherr' is called with this description
   of the exceptional condition.
#pragma empty_line
   We have a problem when using C++ since `exception' is a reserved
   name in C++.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
struct exception
#pragma empty_line
  {
    int type;
    char *name;
    double arg1;
    double arg2;
    double retval;
  };
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern int matherr (struct exception *__exc);
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Types of exceptions in the `type' field.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* SVID mode specifies returning this large value instead of infinity.  */
#pragma line 411 "/usr/include/math.h" 3 4
/* Some useful constants.  */
#pragma line 428 "/usr/include/math.h" 3 4
/* The above constants are not adequate for computation using `long double's.
   Therefore we provide as an extension constants with similar names as a
   GNU extension.  Provide enough digits for the 128-bit IEEE quad.  */
#pragma line 448 "/usr/include/math.h" 3 4
/* When compiling in strict ISO C compatible mode we must not use the
   inline functions since they, among other things, do not set the
   `errno' variable correctly.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* ISO C99 defines some macros to compare number while taking care for
   unordered numbers.  Many FPUs provide special instructions to support
   these operations.  Generic support in GCC for these as builtins went
   in before 3.0.0, but not all cpus added their patterns.  We define
   versions that use the builtins here, and <bits/mathinline.h> will
   undef/redefine as appropriate for the specific GCC version in use.  */
#pragma line 470 "/usr/include/math.h" 3 4
/* Get machine-dependent inline versions (if there are any).  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Define special entry points to use when the compiler got told to
   only expect finite results.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* If we've still got undefined comparison macros, provide defaults.  */
#pragma empty_line
/* Return nonzero value if X is greater than Y.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Return nonzero value if X is greater than or equal to Y.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Return nonzero value if X is less than Y.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Return nonzero value if X is less than or equal to Y.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Return nonzero value if either X is less than Y or Y is less than X.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Return nonzero value if arguments are unordered.  */
#pragma line 16 "floyd-warshall.c" 2
#pragma empty_line
/* Include polybench common header. */
#pragma empty_line
#pragma line 1 "./../../utilities/polybench.h" 1
/**
 * This version is stamped on May 10, 2016
 *
 * Contact:
 *   Louis-Noel Pouchet <pouchet.ohio-state.edu>
 *   Tomofumi Yuki <tomofumi.yuki.fr>
 *
 * Web address: http://polybench.sourceforge.net
 */
/*
 * polybench.h: this file is part of PolyBench/C
 *
 * Polybench header for instrumentation.
 *
 * Programs must be compiled with `-I utilities utilities/polybench.c'
 *
 * Optionally, one can define:
 *
 * -DPOLYBENCH_TIME, to report the execution time,
 *   OR (exclusive):
 * -DPOLYBENCH_PAPI, to use PAPI H/W counters (defined in polybench.c)
 *
 *
 * See README or utilities/polybench.c for additional options.
 *
 */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 1 "/usr/include/stdlib.h" 1 3 4
/* Copyright (C) 1991-2016 Free Software Foundation, Inc.
   This file is part of the GNU C Library.
#pragma empty_line
   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.
#pragma empty_line
   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.
#pragma empty_line
   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */
#pragma empty_line
/*
 *	ISO C99 Standard: 7.20 General utilities	<stdlib.h>
 */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Get size_t, wchar_t and NULL from <stddef.h>.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 1 "/opt/Xilinx/Vivado_HLS/2016.4/lnx64/tools/clang/bin/../lib/clang/3.1/include/stddef.h" 1 3 4
/*===---- stddef.h - Basic type definitions --------------------------------===
 *
 * Copyright (c) 2008 Eli Friedman
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 *===-----------------------------------------------------------------------===
 */
#pragma line 56 "/opt/Xilinx/Vivado_HLS/2016.4/lnx64/tools/clang/bin/../lib/clang/3.1/include/stddef.h" 3 4
/* Some C libraries expect to see a wint_t here. Others (notably MinGW) will use
__WINT_TYPE__ directly; accommodate both by requiring __need_wint_t */
#pragma line 33 "/usr/include/stdlib.h" 2 3 4
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* XPG requires a few symbols from <sys/wait.h> being defined.  */
#pragma empty_line
#pragma line 1 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" 1 3 4
/* Definitions of flag bits for `waitpid' et al.
   Copyright (C) 1992-2016 Free Software Foundation, Inc.
   This file is part of the GNU C Library.
#pragma empty_line
   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.
#pragma empty_line
   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.
#pragma empty_line
   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Bits in the third argument to `waitpid'.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Bits in the fourth argument to `waitid'.  */
#pragma line 39 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" 3 4
/* The following values are used by the `waitid' function.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* The Linux kernel defines these bare, rather than an enum,
   which causes a conflict if the include order is reversed. */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef enum
{
  P_ALL, /* Wait for any child.  */
  P_PID, /* Wait for specified process.  */
  P_PGID /* Wait for members of process group.  */
} idtype_t;
#pragma line 42 "/usr/include/stdlib.h" 2 3 4
#pragma line 1 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 1 3 4
/* Definitions of status bits for `wait' et al.
   Copyright (C) 1992-2016 Free Software Foundation, Inc.
   This file is part of the GNU C Library.
#pragma empty_line
   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.
#pragma empty_line
   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.
#pragma empty_line
   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Everything extant so far uses these same bits.  */
#pragma empty_line
#pragma empty_line
/* If WIFEXITED(STATUS), the low-order 8 bits of the status.  */
#pragma empty_line
#pragma empty_line
/* If WIFSIGNALED(STATUS), the terminating signal.  */
#pragma empty_line
#pragma empty_line
/* If WIFSTOPPED(STATUS), the signal that stopped the child.  */
#pragma empty_line
#pragma empty_line
/* Nonzero if STATUS indicates normal termination.  */
#pragma empty_line
#pragma empty_line
/* Nonzero if STATUS indicates termination by a signal.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Nonzero if STATUS indicates the child is stopped.  */
#pragma empty_line
#pragma empty_line
/* Nonzero if STATUS indicates the child continued after a stop.  We only
   define this if <bits/waitflags.h> provides the WCONTINUED flag bit.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Nonzero if STATUS indicates the child dumped core.  */
#pragma empty_line
#pragma empty_line
/* Macros for constructing status values.  */
#pragma line 64 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 3 4
#pragma line 1 "/usr/include/endian.h" 1 3 4
/* Copyright (C) 1992-2016 Free Software Foundation, Inc.
   This file is part of the GNU C Library.
#pragma empty_line
   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.
#pragma empty_line
   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.
#pragma empty_line
   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Definitions for byte order, according to significance of bytes,
   from low addresses to high addresses.  The value is what you get by
   putting '4' in the most significant byte, '3' in the second most
   significant byte, '2' in the second least significant byte, and '1'
   in the least significant byte, and then writing down one digit for
   each byte, starting with the byte at the lowest address at the left,
   and proceeding to the byte with the highest address at the right.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* This file defines `__BYTE_ORDER' for the particular machine.  */
#pragma empty_line
#pragma line 1 "/usr/include/x86_64-linux-gnu/bits/endian.h" 1 3 4
/* i386/x86_64 are little-endian.  */
#pragma line 37 "/usr/include/endian.h" 2 3 4
#pragma empty_line
/* Some machines may need to use a different endianness for floating point
   values.  */
#pragma line 59 "/usr/include/endian.h" 3 4
/* Conversion interfaces.  */
#pragma empty_line
#pragma line 1 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 1 3 4
/* Macros to swap the order of bytes in integer values.
   Copyright (C) 1997-2016 Free Software Foundation, Inc.
   This file is part of the GNU C Library.
#pragma empty_line
   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.
#pragma empty_line
   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.
#pragma empty_line
   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */
#pragma line 28 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
#pragma line 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
/* Determine the wordsize from the preprocessor defines.  */
#pragma line 11 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 3 4
/* Both x86-64 and x32 use the 64-bit system call interface.  */
#pragma line 29 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 2 3 4
#pragma empty_line
/* Swap bytes in 16 bit value.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Get __bswap_16.  */
#pragma empty_line
#pragma line 1 "/usr/include/x86_64-linux-gnu/bits/byteswap-16.h" 1 3 4
/* Macros to swap the order of bytes in 16-bit integer values.
   Copyright (C) 2012-2016 Free Software Foundation, Inc.
   This file is part of the GNU C Library.
#pragma empty_line
   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.
#pragma empty_line
   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.
#pragma empty_line
   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */
#pragma line 36 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 2 3 4
#pragma empty_line
/* Swap bytes in 32 bit value.  */
#pragma line 56 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
/* To swap the bytes in a word the i486 processors and up provide the
   `bswap' opcode.  On i386 we have to use three instructions.  */
#pragma line 96 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
/* Swap bytes in 64 bit value.  */
#pragma line 61 "/usr/include/endian.h" 2 3 4
#pragma line 65 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 2 3 4
#pragma empty_line
union wait
  {
    int w_status;
    struct
      {
#pragma empty_line
 unsigned int __w_termsig:7; /* Terminating signal.  */
 unsigned int __w_coredump:1; /* Set if dumped core.  */
 unsigned int __w_retcode:8; /* Return code if exited normally.  */
 unsigned int:16;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
      } __wait_terminated;
    struct
      {
#pragma empty_line
 unsigned int __w_stopval:8; /* W_STOPPED if stopped.  */
 unsigned int __w_stopsig:8; /* Stopping signal.  */
 unsigned int:16;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
      } __wait_stopped;
  };
#pragma line 43 "/usr/include/stdlib.h" 2 3 4
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Lots of hair to allow traditional BSD use of `union wait'
   as well as POSIX.1 use of `int' for the status word.  */
#pragma line 57 "/usr/include/stdlib.h" 3 4
/* This is the type of the argument to `wait'.  The funky union
   causes redeclarations with either `int *' or `union wait *' to be
   allowed without complaint.  __WAIT_STATUS_DEFN is the type used in
   the actual function definitions.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* This works in GCC 2.6.1 and later.  */
typedef union
  {
    union wait *__uptr;
    int *__iptr;
  } __WAIT_STATUS __attribute__ ((__transparent_union__));
#pragma line 83 "/usr/include/stdlib.h" 3 4
/* Define the macros <sys/wait.h> also would define this way.  */
#pragma line 96 "/usr/include/stdlib.h" 3 4
/* Returned by `div'.  */
typedef struct
  {
    int quot; /* Quotient.  */
    int rem; /* Remainder.  */
  } div_t;
#pragma empty_line
/* Returned by `ldiv'.  */
#pragma empty_line
typedef struct
  {
    long int quot; /* Quotient.  */
    long int rem; /* Remainder.  */
  } ldiv_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Returned by `lldiv'.  */
__extension__ typedef struct
  {
    long long int quot; /* Quotient.  */
    long long int rem; /* Remainder.  */
  } lldiv_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* The largest number rand will return (same as INT_MAX).  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* We define these the same for all machines.
   Changes from this to the outside world should be done in `_exit'.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Maximum length of a multibyte character in the current locale.  */
#pragma empty_line
extern size_t __ctype_get_mb_cur_max (void) __attribute__ ((__nothrow__ )) /* Ignore */;
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Convert a string to a floating-point number.  */
extern double atof (const char *__nptr)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) /* Ignore */;
/* Convert a string to an integer.  */
extern int atoi (const char *__nptr)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) /* Ignore */;
/* Convert a string to a long integer.  */
extern long int atol (const char *__nptr)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) /* Ignore */;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Convert a string to a long long integer.  */
__extension__ extern long long int atoll (const char *__nptr)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) /* Ignore */;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Convert a string to a floating-point number.  */
extern double strtod (const char *__restrict __nptr,
        char **__restrict __endptr)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Likewise for `float' and `long double' sizes of floating-point numbers.  */
extern float strtof (const char *__restrict __nptr,
       char **__restrict __endptr) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));
#pragma empty_line
extern long double strtold (const char *__restrict __nptr,
       char **__restrict __endptr)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Convert a string to a long integer.  */
extern long int strtol (const char *__restrict __nptr,
   char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));
/* Convert a string to an unsigned long integer.  */
extern unsigned long int strtoul (const char *__restrict __nptr,
      char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Convert a string to a quadword integer.  */
__extension__
extern long long int strtoq (const char *__restrict __nptr,
        char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));
/* Convert a string to an unsigned quadword integer.  */
__extension__
extern unsigned long long int strtouq (const char *__restrict __nptr,
           char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Convert a string to a quadword integer.  */
__extension__
extern long long int strtoll (const char *__restrict __nptr,
         char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));
/* Convert a string to an unsigned quadword integer.  */
__extension__
extern unsigned long long int strtoull (const char *__restrict __nptr,
     char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));
#pragma line 302 "/usr/include/stdlib.h" 3 4
/* Convert N to base 64 using the digits "./0-9A-Za-z", least-significant
   digit first.  Returns a pointer to static storage overwritten by the
   next call.  */
extern char *l64a (long int __n) __attribute__ ((__nothrow__ )) /* Ignore */;
#pragma empty_line
/* Read a number from a string S in base 64 as above.  */
extern long int a64l (const char *__s)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) /* Ignore */;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 1 "/usr/include/x86_64-linux-gnu/sys/types.h" 1 3 4
/* Copyright (C) 1991-2016 Free Software Foundation, Inc.
   This file is part of the GNU C Library.
#pragma empty_line
   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.
#pragma empty_line
   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.
#pragma empty_line
   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */
#pragma empty_line
/*
 *	POSIX Standard: 2.6 Primitive System Data Types	<sys/types.h>
 */
#pragma line 33 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef __loff_t loff_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef __ino_t ino_t;
#pragma line 60 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __dev_t dev_t;
#pragma line 70 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __mode_t mode_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef __nlink_t nlink_t;
#pragma line 104 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __id_t id_t;
#pragma line 115 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef __key_t key_t;
#pragma line 132 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
#pragma line 1 "/usr/include/time.h" 1 3 4
/* Copyright (C) 1991-2016 Free Software Foundation, Inc.
   This file is part of the GNU C Library.
#pragma empty_line
   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.
#pragma empty_line
   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.
#pragma empty_line
   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */
#pragma empty_line
/*
 *	ISO C99 Standard: 7.23 Date and time	<time.h>
 */
#pragma line 58 "/usr/include/time.h" 3 4
/* Returned by `clock'.  */
typedef __clock_t clock_t;
#pragma line 74 "/usr/include/time.h" 3 4
/* Returned by `time'.  */
typedef __time_t time_t;
#pragma line 90 "/usr/include/time.h" 3 4
/* Clock ID used in clock and timer functions.  */
typedef __clockid_t clockid_t;
#pragma line 102 "/usr/include/time.h" 3 4
/* Timer ID returned by `timer_create'.  */
typedef __timer_t timer_t;
#pragma line 133 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4
#pragma line 146 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
#pragma line 1 "/opt/Xilinx/Vivado_HLS/2016.4/lnx64/tools/clang/bin/../lib/clang/3.1/include/stddef.h" 1 3 4
/*===---- stddef.h - Basic type definitions --------------------------------===
 *
 * Copyright (c) 2008 Eli Friedman
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 *===-----------------------------------------------------------------------===
 */
#pragma line 56 "/opt/Xilinx/Vivado_HLS/2016.4/lnx64/tools/clang/bin/../lib/clang/3.1/include/stddef.h" 3 4
/* Some C libraries expect to see a wint_t here. Others (notably MinGW) will use
__WINT_TYPE__ directly; accommodate both by requiring __need_wint_t */
#pragma line 147 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4
#pragma empty_line
#pragma empty_line
/* Old compatibility names for C types.  */
typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
#pragma empty_line
#pragma empty_line
/* These size-specific names are used by some of the inet code.  */
#pragma line 186 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
/* For GCC 2.7 and later, we can use specific type-size attributes.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef int int8_t __attribute__ ((__mode__ (__QI__)));
typedef int int16_t __attribute__ ((__mode__ (__HI__)));
typedef int int32_t __attribute__ ((__mode__ (__SI__)));
typedef int int64_t __attribute__ ((__mode__ (__DI__)));
#pragma empty_line
#pragma empty_line
typedef unsigned int u_int8_t __attribute__ ((__mode__ (__QI__)));
typedef unsigned int u_int16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int u_int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int u_int64_t __attribute__ ((__mode__ (__DI__)));
#pragma empty_line
typedef int register_t __attribute__ ((__mode__ (__word__)));
#pragma empty_line
#pragma empty_line
/* Some code from BIND tests this macro to see if the types above are
   defined.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* In BSD <sys/types.h> is expected to define BYTE_ORDER.  */
#pragma empty_line
#pragma empty_line
/* It also defines `fd_set' and the FD_* macros for `select'.  */
#pragma empty_line
#pragma line 1 "/usr/include/x86_64-linux-gnu/sys/select.h" 1 3 4
/* `fd_set' type and related macros, and `select'/`pselect' declarations.
   Copyright (C) 1996-2016 Free Software Foundation, Inc.
   This file is part of the GNU C Library.
#pragma empty_line
   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.
#pragma empty_line
   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.
#pragma empty_line
   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */
#pragma empty_line
/*	POSIX 1003.1g: 6.2 Select from File Descriptor Sets <sys/select.h>  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Get definition of needed basic types.  */
#pragma empty_line
#pragma empty_line
/* Get __FD_* definitions.  */
#pragma empty_line
#pragma line 1 "/usr/include/x86_64-linux-gnu/bits/select.h" 1 3 4
/* Copyright (C) 1997-2016 Free Software Foundation, Inc.
   This file is part of the GNU C Library.
#pragma empty_line
   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.
#pragma empty_line
   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.
#pragma empty_line
   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
/* Determine the wordsize from the preprocessor defines.  */
#pragma line 11 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 3 4
/* Both x86-64 and x32 use the 64-bit system call interface.  */
#pragma line 23 "/usr/include/x86_64-linux-gnu/bits/select.h" 2 3 4
#pragma line 31 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4
#pragma empty_line
/* Get __sigset_t.  */
#pragma empty_line
#pragma line 1 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 1 3 4
/* __sig_atomic_t, __sigset_t, and related definitions.  Linux version.
   Copyright (C) 1991-2016 Free Software Foundation, Inc.
   This file is part of the GNU C Library.
#pragma empty_line
   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.
#pragma empty_line
   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.
#pragma empty_line
   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef int __sig_atomic_t;
#pragma empty_line
/* A `sigset_t' has a bit for each signal.  */
#pragma empty_line
#pragma empty_line
typedef struct
  {
    unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
  } __sigset_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* We only want to define these functions if <signal.h> was actually
   included; otherwise we were included just to define the types.  Since we
   are namespace-clean, it wouldn't hurt to define extra macros.  But
   trouble can be caused by functions being defined (e.g., any global
   register vars declared later will cause compilation errors).  */
#pragma line 34 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef __sigset_t sigset_t;
#pragma empty_line
#pragma empty_line
/* Get definition of timer specification structures.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 1 "/usr/include/time.h" 1 3 4
/* Copyright (C) 1991-2016 Free Software Foundation, Inc.
   This file is part of the GNU C Library.
#pragma empty_line
   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.
#pragma empty_line
   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.
#pragma empty_line
   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */
#pragma empty_line
/*
 *	ISO C99 Standard: 7.23 Date and time	<time.h>
 */
#pragma line 118 "/usr/include/time.h" 3 4
/* POSIX.1b structure for a time value.  This is like a `struct timeval' but
   has nanoseconds instead of microseconds.  */
struct timespec
  {
    __time_t tv_sec; /* Seconds.  */
    __syscall_slong_t tv_nsec; /* Nanoseconds.  */
  };
#pragma line 44 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4
#pragma empty_line
#pragma line 1 "/usr/include/x86_64-linux-gnu/bits/time.h" 1 3 4
/* System-dependent timing definitions.  Linux version.
   Copyright (C) 1996-2016 Free Software Foundation, Inc.
   This file is part of the GNU C Library.
#pragma empty_line
   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.
#pragma empty_line
   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.
#pragma empty_line
   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */
#pragma empty_line
/*
 * Never include this file directly; use <time.h> instead.
 */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* A time value that is accurate to the nearest
   microsecond but also has a range of years.  */
struct timeval
  {
    __time_t tv_sec; /* Seconds.  */
    __suseconds_t tv_usec; /* Microseconds.  */
  };
#pragma line 46 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4
#pragma empty_line
#pragma empty_line
typedef __suseconds_t suseconds_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* The fd_set member is required to be an array of longs.  */
typedef long int __fd_mask;
#pragma empty_line
/* Some versions of <linux/posix_types.h> define this macros.  */
#pragma empty_line
/* It's easier to assume 8-bit bytes than to get CHAR_BIT.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* fd_set for select and pselect.  */
typedef struct
  {
    /* XPG4.2 requires this member name.  Otherwise avoid the name
       from the global namespace.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
    __fd_mask __fds_bits[1024 / (8 * (int) sizeof (__fd_mask))];
#pragma empty_line
#pragma empty_line
  } fd_set;
#pragma empty_line
/* Maximum number of file descriptors in `fd_set'.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Sometimes the fd_set member is assumed to have this type.  */
typedef __fd_mask fd_mask;
#pragma empty_line
/* Number of bits per word of `fd_set' (some code assumes this is 32).  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Access macros for `fd_set'.  */
#pragma line 98 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
/* Check the first NFDS descriptors each in READFDS (if not NULL) for read
   readiness, in WRITEFDS (if not NULL) for write readiness, and in EXCEPTFDS
   (if not NULL) for exceptional conditions.  If TIMEOUT is not NULL, time out
   after waiting the interval specified therein.  Returns the number of ready
   descriptors, or -1 for errors.
#pragma empty_line
   This function is a cancellation point and therefore not marked with
   __THROW.  */
extern int select (int __nfds, fd_set *__restrict __readfds,
     fd_set *__restrict __writefds,
     fd_set *__restrict __exceptfds,
     struct timeval *__restrict __timeout);
#pragma empty_line
#pragma empty_line
/* Same as above only that the TIMEOUT value is given with higher
   resolution and a sigmask which is been set temporarily.  This version
   should be used.
#pragma empty_line
   This function is a cancellation point and therefore not marked with
   __THROW.  */
extern int pselect (int __nfds, fd_set *__restrict __readfds,
      fd_set *__restrict __writefds,
      fd_set *__restrict __exceptfds,
      const struct timespec *__restrict __timeout,
      const __sigset_t *__restrict __sigmask);
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Define some inlines helping to catch common problems.  */
#pragma line 220 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4
#pragma empty_line
/* BSD defines these symbols, so we follow.  */
#pragma empty_line
#pragma line 1 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 1 3 4
/* Definitions of macros to access `dev_t' values.
   Copyright (C) 1996-2016 Free Software Foundation, Inc.
   This file is part of the GNU C Library.
#pragma empty_line
   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.
#pragma empty_line
   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.
#pragma empty_line
   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */
#pragma line 26 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 3 4
__extension__
extern unsigned int gnu_dev_major (unsigned long long int __dev)
     __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
__extension__
extern unsigned int gnu_dev_minor (unsigned long long int __dev)
     __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
__extension__
extern unsigned long long int gnu_dev_makedev (unsigned int __major,
            unsigned int __minor)
     __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
#pragma line 60 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 3 4
/* Access the functions with their traditional names.  */
#pragma line 223 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef __blksize_t blksize_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Types from the Large File Support interface.  */
#pragma empty_line
#pragma empty_line
typedef __blkcnt_t blkcnt_t; /* Type to count number of disk blocks.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef __fsblkcnt_t fsblkcnt_t; /* Type to count file system blocks.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef __fsfilcnt_t fsfilcnt_t; /* Type to count file system inodes.  */
#pragma line 268 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
/* Now add the thread types.  */
#pragma empty_line
#pragma empty_line
#pragma line 1 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 1 3 4
/* Copyright (C) 2002-2016 Free Software Foundation, Inc.
   This file is part of the GNU C Library.
#pragma empty_line
   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.
#pragma empty_line
   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.
#pragma empty_line
   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
/* Determine the wordsize from the preprocessor defines.  */
#pragma line 11 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 3 4
/* Both x86-64 and x32 use the 64-bit system call interface.  */
#pragma line 22 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 2 3 4
#pragma line 58 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
/* Thread identifiers.  The structure of the attribute type is not
   exposed on purpose.  */
typedef unsigned long int pthread_t;
#pragma empty_line
#pragma empty_line
union pthread_attr_t
{
  char __size[56];
  long int __align;
};
#pragma empty_line
typedef union pthread_attr_t pthread_attr_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef struct __pthread_internal_list
{
  struct __pthread_internal_list *__prev;
  struct __pthread_internal_list *__next;
} __pthread_list_t;
#pragma line 88 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
/* Data structures for mutex handling.  The structure of the attribute
   type is not exposed on purpose.  */
typedef union
{
  struct __pthread_mutex_s
  {
    int __lock;
    unsigned int __count;
    int __owner;
#pragma empty_line
    unsigned int __nusers;
#pragma empty_line
    /* KIND must stay at this position in the structure to maintain
       binary compatibility.  */
    int __kind;
#pragma empty_line
    short __spins;
    short __elision;
    __pthread_list_t __list;
#pragma empty_line
/* Mutex __spins initializer used by PTHREAD_MUTEX_INITIALIZER.  */
#pragma line 125 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
  } __data;
  char __size[40];
  long int __align;
} pthread_mutex_t;
#pragma empty_line
typedef union
{
  char __size[4];
  int __align;
} pthread_mutexattr_t;
#pragma empty_line
#pragma empty_line
/* Data structure for conditional variable handling.  The structure of
   the attribute type is not exposed on purpose.  */
typedef union
{
  struct
  {
    int __lock;
    unsigned int __futex;
    __extension__ unsigned long long int __total_seq;
    __extension__ unsigned long long int __wakeup_seq;
    __extension__ unsigned long long int __woken_seq;
    void *__mutex;
    unsigned int __nwaiters;
    unsigned int __broadcast_seq;
  } __data;
  char __size[48];
  __extension__ long long int __align;
} pthread_cond_t;
#pragma empty_line
typedef union
{
  char __size[4];
  int __align;
} pthread_condattr_t;
#pragma empty_line
#pragma empty_line
/* Keys for thread-specific data */
typedef unsigned int pthread_key_t;
#pragma empty_line
#pragma empty_line
/* Once-only execution */
typedef int pthread_once_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Data structure for read-write lock variable handling.  The
   structure of the attribute type is not exposed on purpose.  */
typedef union
{
#pragma empty_line
  struct
  {
    int __lock;
    unsigned int __nr_readers;
    unsigned int __readers_wakeup;
    unsigned int __writer_wakeup;
    unsigned int __nr_readers_queued;
    unsigned int __nr_writers_queued;
    int __writer;
    int __shared;
    signed char __rwelision;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
    unsigned char __pad1[7];
#pragma empty_line
#pragma empty_line
    unsigned long int __pad2;
    /* FLAGS must stay at this position in the structure to maintain
       binary compatibility.  */
    unsigned int __flags;
#pragma empty_line
  } __data;
#pragma line 220 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
  char __size[56];
  long int __align;
} pthread_rwlock_t;
#pragma empty_line
typedef union
{
  char __size[8];
  long int __align;
} pthread_rwlockattr_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* POSIX spinlock data type.  */
typedef volatile int pthread_spinlock_t;
#pragma empty_line
#pragma empty_line
/* POSIX barriers data type.  The structure of the type is
   deliberately not exposed.  */
typedef union
{
  char __size[32];
  long int __align;
} pthread_barrier_t;
#pragma empty_line
typedef union
{
  char __size[4];
  int __align;
} pthread_barrierattr_t;
#pragma line 271 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4
#pragma line 315 "/usr/include/stdlib.h" 2 3 4
#pragma empty_line
/* These are the functions that actually do things.  The `random', `srandom',
   `initstate' and `setstate' functions are those from BSD Unices.
   The `rand' and `srand' functions are required by the ANSI standard.
   We provide both interfaces to the same random number generator.  */
/* Return a random long integer between 0 and RAND_MAX inclusive.  */
extern long int random (void) __attribute__ ((__nothrow__ ));
#pragma empty_line
/* Seed the random number generator with the given number.  */
extern void srandom (unsigned int __seed) __attribute__ ((__nothrow__ ));
#pragma empty_line
/* Initialize the random number generator to use state buffer STATEBUF,
   of length STATELEN, and seed it with SEED.  Optimal lengths are 8, 16,
   32, 64, 128 and 256, the bigger the better; values less than 8 will
   cause an error and values greater than 256 will be rounded down.  */
extern char *initstate (unsigned int __seed, char *__statebuf,
   size_t __statelen) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));
#pragma empty_line
/* Switch the random number generator to state buffer STATEBUF,
   which should have been previously initialized by `initstate'.  */
extern char *setstate (char *__statebuf) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Reentrant versions of the `random' family of functions.
   These functions all use the following data structure to contain
   state, rather than global state variables.  */
#pragma empty_line
struct random_data
  {
    int32_t *fptr; /* Front pointer.  */
    int32_t *rptr; /* Rear pointer.  */
    int32_t *state; /* Array of state values.  */
    int rand_type; /* Type of random number generator.  */
    int rand_deg; /* Degree of random number generator.  */
    int rand_sep; /* Distance between front and rear.  */
    int32_t *end_ptr; /* Pointer behind state table.  */
  };
#pragma empty_line
extern int random_r (struct random_data *__restrict __buf,
       int32_t *__restrict __result) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
#pragma empty_line
extern int srandom_r (unsigned int __seed, struct random_data *__buf)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));
#pragma empty_line
extern int initstate_r (unsigned int __seed, char *__restrict __statebuf,
   size_t __statelen,
   struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2, 4)));
#pragma empty_line
extern int setstate_r (char *__restrict __statebuf,
         struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Return a random integer between 0 and RAND_MAX inclusive.  */
extern int rand (void) __attribute__ ((__nothrow__ ));
/* Seed the random number generator with the given number.  */
extern void srand (unsigned int __seed) __attribute__ ((__nothrow__ ));
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Reentrant interface according to POSIX.1.  */
extern int rand_r (unsigned int *__seed) __attribute__ ((__nothrow__ ));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* System V style 48-bit random number generator functions.  */
#pragma empty_line
/* Return non-negative, double-precision floating-point value in [0.0,1.0).  */
extern double drand48 (void) __attribute__ ((__nothrow__ ));
extern double erand48 (unsigned short int __xsubi[3]) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));
#pragma empty_line
/* Return non-negative, long integer in [0,2^31).  */
extern long int lrand48 (void) __attribute__ ((__nothrow__ ));
extern long int nrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));
#pragma empty_line
/* Return signed, long integers in [-2^31,2^31).  */
extern long int mrand48 (void) __attribute__ ((__nothrow__ ));
extern long int jrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));
#pragma empty_line
/* Seed random number generator.  */
extern void srand48 (long int __seedval) __attribute__ ((__nothrow__ ));
extern unsigned short int *seed48 (unsigned short int __seed16v[3])
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));
extern void lcong48 (unsigned short int __param[7]) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));
#pragma empty_line
#pragma empty_line
/* Data structure for communication with thread safe versions.  This
   type is to be regarded as opaque.  It's only exported because users
   have to allocate objects of this type.  */
struct drand48_data
  {
    unsigned short int __x[3]; /* Current state.  */
    unsigned short int __old_x[3]; /* Old state.  */
    unsigned short int __c; /* Additive const. in congruential formula.  */
    unsigned short int __init; /* Flag for initializing.  */
    __extension__ unsigned long long int __a; /* Factor in congruential
						   formula.  */
  };
#pragma empty_line
/* Return non-negative, double-precision floating-point value in [0.0,1.0).  */
extern int drand48_r (struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
extern int erand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
#pragma empty_line
/* Return non-negative, long integer in [0,2^31).  */
extern int lrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
extern int nrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
#pragma empty_line
/* Return signed, long integers in [-2^31,2^31).  */
extern int mrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
extern int jrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
#pragma empty_line
/* Seed random number generator.  */
extern int srand48_r (long int __seedval, struct drand48_data *__buffer)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));
#pragma empty_line
extern int seed48_r (unsigned short int __seed16v[3],
       struct drand48_data *__buffer) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
#pragma empty_line
extern int lcong48_r (unsigned short int __param[7],
        struct drand48_data *__buffer)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
#pragma line 465 "/usr/include/stdlib.h" 3 4
/* Allocate SIZE bytes of memory.  */
extern void *malloc (size_t __size) __attribute__ ((__nothrow__ )) __attribute__ ((__malloc__)) /* Ignore */;
/* Allocate NMEMB elements of SIZE bytes each, all initialized to 0.  */
extern void *calloc (size_t __nmemb, size_t __size)
     __attribute__ ((__nothrow__ )) __attribute__ ((__malloc__)) /* Ignore */;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Re-allocate the previously allocated block
   in PTR, making the new block SIZE bytes long.  */
/* __attribute_malloc__ is not used, because if realloc returns
   the same pointer that was passed to it, aliasing needs to be allowed
   between objects pointed by the old and new pointers.  */
extern void *realloc (void *__ptr, size_t __size)
     __attribute__ ((__nothrow__ )) __attribute__ ((__warn_unused_result__));
/* Free a block allocated by `malloc', `realloc' or `calloc'.  */
extern void free (void *__ptr) __attribute__ ((__nothrow__ ));
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Free a block.  An alias for `free'.	(Sun Unices).  */
extern void cfree (void *__ptr) __attribute__ ((__nothrow__ ));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 1 "/usr/include/alloca.h" 1 3 4
/* Copyright (C) 1992-2016 Free Software Foundation, Inc.
   This file is part of the GNU C Library.
#pragma empty_line
   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.
#pragma empty_line
   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.
#pragma empty_line
   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 1 "/opt/Xilinx/Vivado_HLS/2016.4/lnx64/tools/clang/bin/../lib/clang/3.1/include/stddef.h" 1 3 4
/*===---- stddef.h - Basic type definitions --------------------------------===
 *
 * Copyright (c) 2008 Eli Friedman
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 *===-----------------------------------------------------------------------===
 */
#pragma line 56 "/opt/Xilinx/Vivado_HLS/2016.4/lnx64/tools/clang/bin/../lib/clang/3.1/include/stddef.h" 3 4
/* Some C libraries expect to see a wint_t here. Others (notably MinGW) will use
__WINT_TYPE__ directly; accommodate both by requiring __need_wint_t */
#pragma line 25 "/usr/include/alloca.h" 2 3 4
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Remove any previous definitions.  */
#pragma empty_line
#pragma empty_line
/* Allocate a block that will be freed when the calling function exits.  */
extern void *alloca (size_t __size) __attribute__ ((__nothrow__ ));
#pragma line 493 "/usr/include/stdlib.h" 2 3 4
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Allocate SIZE bytes on a page boundary.  The storage cannot be freed.  */
extern void *valloc (size_t __size) __attribute__ ((__nothrow__ )) __attribute__ ((__malloc__)) /* Ignore */;
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Allocate memory of SIZE bytes with an alignment of ALIGNMENT.  */
extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1))) /* Ignore */;
#pragma line 514 "/usr/include/stdlib.h" 3 4
/* Abort execution and generate a core-dump.  */
extern void abort (void) __attribute__ ((__nothrow__ )) __attribute__ ((__noreturn__));
#pragma empty_line
#pragma empty_line
/* Register a function to be called when `exit' is called.  */
extern int atexit (void (*__func) (void)) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));
#pragma line 533 "/usr/include/stdlib.h" 3 4
/* Register a function to be called with the status
   given to `exit' and the given argument.  */
extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Call all functions registered with `atexit' and `on_exit',
   in the reverse of the order in which they were registered,
   perform stdio cleanup, and terminate program execution with STATUS.  */
extern void exit (int __status) __attribute__ ((__nothrow__ )) __attribute__ ((__noreturn__));
#pragma line 555 "/usr/include/stdlib.h" 3 4
/* Terminate the program with STATUS without calling any of the
   functions registered with `atexit' or `on_exit'.  */
extern void _Exit (int __status) __attribute__ ((__nothrow__ )) __attribute__ ((__noreturn__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Return the value of envariable NAME, or NULL if it doesn't exist.  */
extern char *getenv (const char *__name) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1))) /* Ignore */;
#pragma line 575 "/usr/include/stdlib.h" 3 4
/* The SVID says this is in <stdio.h>, but this seems a better place.	*/
/* Put STRING, which is of the form "NAME=VALUE", in the environment.
   If there is no `=', remove NAME from the environment.  */
extern int putenv (char *__string) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Set NAME to VALUE in the environment.
   If REPLACE is nonzero, overwrite an existing value.  */
extern int setenv (const char *__name, const char *__value, int __replace)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));
#pragma empty_line
/* Remove the variable NAME from the environment.  */
extern int unsetenv (const char *__name) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* The `clearenv' was planned to be added to POSIX.1 but probably
   never made it.  Nevertheless the POSIX.9 standard (POSIX bindings
   for Fortran 77) requires this function.  */
extern int clearenv (void) __attribute__ ((__nothrow__ ));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Generate a unique temporary file name from TEMPLATE.
   The last six characters of TEMPLATE must be "XXXXXX";
   they are replaced with a string that makes the file name unique.
   Always returns TEMPLATE, it's either a temporary file name or a null
   string if it cannot get a unique file name.  */
extern char *mktemp (char *__template) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Generate a unique temporary file name from TEMPLATE.
   The last six characters of TEMPLATE must be "XXXXXX";
   they are replaced with a string that makes the filename unique.
   Returns a file descriptor open on the file for reading and writing,
   or -1 if it cannot create a uniquely-named file.
#pragma empty_line
   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
#pragma empty_line
extern int mkstemp (char *__template) __attribute__ ((__nonnull__ (1))) /* Ignore */;
#pragma line 634 "/usr/include/stdlib.h" 3 4
/* Similar to mkstemp, but the template can have a suffix after the
   XXXXXX.  The length of the suffix is specified in the second
   parameter.
#pragma empty_line
   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
#pragma empty_line
extern int mkstemps (char *__template, int __suffixlen) __attribute__ ((__nonnull__ (1))) /* Ignore */;
#pragma line 657 "/usr/include/stdlib.h" 3 4
/* Create a unique temporary directory from TEMPLATE.
   The last six characters of TEMPLATE must be "XXXXXX";
   they are replaced with a string that makes the directory name unique.
   Returns TEMPLATE, or a null pointer if it cannot get a unique name.
   The directory is created mode 700.  */
extern char *mkdtemp (char *__template) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1))) /* Ignore */;
#pragma line 712 "/usr/include/stdlib.h" 3 4
/* Execute the given line as a shell command.
#pragma empty_line
   This function is a cancellation point and therefore not marked with
   __THROW.  */
extern int system (const char *__command) /* Ignore */;
#pragma line 728 "/usr/include/stdlib.h" 3 4
/* Return the canonical absolute name of file NAME.  If RESOLVED is
   null, the result is malloc'd; otherwise, if the canonical name is
   PATH_MAX chars or more, returns null with `errno' set to
   ENAMETOOLONG; if the name fits in fewer than PATH_MAX chars,
   returns the name in RESOLVED.  */
extern char *realpath (const char *__restrict __name,
         char *__restrict __resolved) __attribute__ ((__nothrow__ )) /* Ignore */;
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Shorthand for type of comparison functions.  */
#pragma empty_line
#pragma empty_line
typedef int (*__compar_fn_t) (const void *, const void *);
#pragma line 752 "/usr/include/stdlib.h" 3 4
/* Do a binary search for KEY in BASE, which consists of NMEMB elements
   of SIZE bytes each, using COMPAR to perform the comparisons.  */
extern void *bsearch (const void *__key, const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
     __attribute__ ((__nonnull__ (1, 2, 5))) /* Ignore */;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Sort NMEMB elements of BASE, of SIZE bytes each,
   using COMPAR to perform the comparisons.  */
extern void qsort (void *__base, size_t __nmemb, size_t __size,
     __compar_fn_t __compar) __attribute__ ((__nonnull__ (1, 4)));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Return the absolute value of X.  */
extern int abs (int __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)) /* Ignore */;
extern long int labs (long int __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)) /* Ignore */;
#pragma empty_line
#pragma empty_line
#pragma empty_line
__extension__ extern long long int llabs (long long int __x)
     __attribute__ ((__nothrow__ )) __attribute__ ((__const__)) /* Ignore */;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Return the `div_t', `ldiv_t' or `lldiv_t' representation
   of the value of NUMER over DENOM. */
/* GCC may have built-ins for these someday.  */
extern div_t div (int __numer, int __denom)
     __attribute__ ((__nothrow__ )) __attribute__ ((__const__)) /* Ignore */;
extern ldiv_t ldiv (long int __numer, long int __denom)
     __attribute__ ((__nothrow__ )) __attribute__ ((__const__)) /* Ignore */;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
__extension__ extern lldiv_t lldiv (long long int __numer,
        long long int __denom)
     __attribute__ ((__nothrow__ )) __attribute__ ((__const__)) /* Ignore */;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Convert floating point numbers to strings.  The returned values are
   valid only until another call to the same function.  */
#pragma empty_line
/* Convert VALUE to a string with NDIGIT digits and return a pointer to
   this.  Set *DECPT with the position of the decimal character and *SIGN
   with the sign of the number.  */
extern char *ecvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (3, 4))) /* Ignore */;
#pragma empty_line
/* Convert VALUE to a string rounded to NDIGIT decimal digits.  Set *DECPT
   with the position of the decimal character and *SIGN with the sign of
   the number.  */
extern char *fcvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (3, 4))) /* Ignore */;
#pragma empty_line
/* If possible convert VALUE to a string with NDIGIT significant digits.
   Otherwise use exponential representation.  The resulting string will
   be written to BUF.  */
extern char *gcvt (double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (3))) /* Ignore */;
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Long double versions of above functions.  */
extern char *qecvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (3, 4))) /* Ignore */;
extern char *qfcvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (3, 4))) /* Ignore */;
extern char *qgcvt (long double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (3))) /* Ignore */;
#pragma empty_line
#pragma empty_line
/* Reentrant version of the functions above which provide their own
   buffers.  */
extern int ecvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int fcvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (3, 4, 5)));
#pragma empty_line
extern int qecvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int qfcvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (3, 4, 5)));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Return the length of the multibyte character
   in S, which is no longer than N.  */
extern int mblen (const char *__s, size_t __n) __attribute__ ((__nothrow__ ));
/* Return the length of the given multibyte character,
   putting its `wchar_t' representation in *PWC.  */
extern int mbtowc (wchar_t *__restrict __pwc,
     const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__ ));
/* Put the multibyte character represented
   by WCHAR in S, returning its length.  */
extern int wctomb (char *__s, wchar_t __wchar) __attribute__ ((__nothrow__ ));
#pragma empty_line
#pragma empty_line
/* Convert a multibyte string to a wide char string.  */
extern size_t mbstowcs (wchar_t *__restrict __pwcs,
   const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__ ));
/* Convert a wide char string to multibyte string.  */
extern size_t wcstombs (char *__restrict __s,
   const wchar_t *__restrict __pwcs, size_t __n)
     __attribute__ ((__nothrow__ ));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Determine whether the string value of RESPONSE matches the affirmation
   or negative response expression as specified by the LC_MESSAGES category
   in the program's current locale.  Returns 1 if affirmative, 0 if
   negative, and -1 if not matching.  */
extern int rpmatch (const char *__response) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1))) /* Ignore */;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Parse comma separated suboption from *OPTIONP and match against
   strings in TOKENS.  If found return index and set *VALUEP to
   optional value introduced by an equal sign.  If the suboption is
   not part of TOKENS return in *VALUEP beginning of unknown
   suboption.  On exit *OPTIONP is set to the beginning of the next
   token or at the terminating NUL character.  */
extern int getsubopt (char **__restrict __optionp,
        char *const *__restrict __tokens,
        char **__restrict __valuep)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2, 3))) /* Ignore */;
#pragma line 911 "/usr/include/stdlib.h" 3 4
/* X/Open pseudo terminal handling.  */
#pragma line 947 "/usr/include/stdlib.h" 3 4
/* Put the 1 minute, 5 minute and 15 minute load averages into the first
   NELEM elements of LOADAVG.  Return the number written (never more than
   three, but may be less than NELEM), or -1 if an error occurred.  */
extern int getloadavg (double __loadavg[], int __nelem)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 1 "/usr/include/x86_64-linux-gnu/bits/stdlib-float.h" 1 3 4
/* Floating-point inline functions for stdlib.h.
   Copyright (C) 2012-2016 Free Software Foundation, Inc.
   This file is part of the GNU C Library.
#pragma empty_line
   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.
#pragma empty_line
   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.
#pragma empty_line
   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */
#pragma line 955 "/usr/include/stdlib.h" 2 3 4
#pragma empty_line
/* Define some macros helping to catch buffer overflows.  */
#pragma line 31 "./../../utilities/polybench.h" 2
#pragma empty_line
/* Array padding. By default, none is used. */
#pragma empty_line
/* default: */
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Inter-array padding, for use with . By default, none is used. */
#pragma empty_line
/* default: */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* C99 arrays in function prototype. By default, do not use. */
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* default: */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Scalar loop bounds in SCoPs. By default, use parametric loop bounds. */
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* default: */
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Use the 'restrict' keyword to declare that the different arrays do not
 * alias. By default, we do not use it as it is only supported in C99 and
 * even here several compilers do not properly get it.
 */
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* default: */
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Macros to reference an array. Generic for heap and stack arrays
   (C99).  Each array dimensionality has his own macro, to be used at
   declaration or as a function argument.
   Example:
   int b[x] => POLYBENCH_1D_ARRAY(b, x)
   int A[N][N] => POLYBENCH_2D_ARRAY(A, N, N)
*/
#pragma line 96 "./../../utilities/polybench.h"
/* Macros for using arrays in the function prototypes. */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Macros for using arrays within the functions. */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Macros to allocate heap arrays.
   Example:
   polybench_alloc_2d_array(N, M, double) => allocates N x M x sizeof(double)
					  and returns a pointer to the 2d array
 */
#pragma line 126 "./../../utilities/polybench.h"
/* Macros for array declaration. */
#pragma line 157 "./../../utilities/polybench.h"
/* Dead-code elimination macros. Use argc/argv for the run-time check. */
#pragma line 175 "./../../utilities/polybench.h"
/* Performance-related instrumentation. See polybench.c */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* PAPI support. */
#pragma line 207 "./../../utilities/polybench.h"
/* Timing support. */
#pragma line 221 "./../../utilities/polybench.h"
/* PAPI support. */
#pragma line 230 "./../../utilities/polybench.h"
/* Function prototypes. */
extern void* polybench_alloc_data(unsigned long long int n, int elt_size);
extern void polybench_free_data(void* ptr);
#pragma empty_line
/* PolyBench internal functions that should not be directly called by */
/* the user, unless when designing customized execution profiling */
/* approaches. */
extern void polybench_flush_cache();
extern void polybench_prepare_instruments();
#pragma line 19 "floyd-warshall.c" 2
#pragma empty_line
/* Include benchmark-specific header. */
#pragma empty_line
#pragma line 1 "./floyd-warshall.h" 1
/**
 * This version is stamped on May 10, 2016
 *
 * Contact:
 *   Louis-Noel Pouchet <pouchet.ohio-state.edu>
 *   Tomofumi Yuki <tomofumi.yuki.fr>
 *
 * Web address: http://polybench.sourceforge.net
 */
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Default to LARGE_DATASET. */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Define sample dataset sizes. */
#pragma line 46 "./floyd-warshall.h"
/* Default data type */
#pragma line 22 "floyd-warshall.c" 2
#pragma empty_line
#pragma empty_line
/* Array initialization. */
static
void init_array (int n,
   int path[ 64 + 0][64 + 0])
{_ssdm_SpecArrayDimSize(path,64 + 0);
  int i, j;
#pragma empty_line
  for (i = 0; i < n; i++)
    for (j = 0; j < n; j++) {
      path[i][j] = (i+n)*(j+n)+7;
  //    if ((i+j)%13 == 0 || (i+j)%7==0 || (i+j)%11 == 0)
   //      path[i][j] = 999;
    }
}
#pragma empty_line
#pragma empty_line
/* DCE code. Must scan the entire live-out data.
   Can be used also to check the correctness of the output. */
static
void print_array(int n,
   int path[ 64 + 0][64 + 0])
#pragma empty_line
{_ssdm_SpecArrayDimSize(path,64 + 0);
  int i, j;
#pragma empty_line
  fprintf(stderr, "==BEGIN DUMP_ARRAYS==\n");
  fprintf(stderr, "begin dump: %s", "path");
  for (i = 0; i < n; i++)
    for (j = 0; j < n; j++) {
      if ((i * n + j) % 20 == 0) fprintf (stderr, "\n");
      fprintf (stderr, "%d ", path[i][j]);
    }
  fprintf(stderr, "\nend   dump: %s\n", "path");
  fprintf(stderr, "==END   DUMP_ARRAYS==\n");
}
#pragma empty_line
#pragma empty_line
/* Main computational kernel. The whole function will be timed,
   including the call and return. */
//static
void kernel_floyd_warshall(int path[64][64])
   //   DATA_TYPE POLYBENCH_2D(path,N,N,n,n))
{_ssdm_SpecArrayDimSize(path,64);
  int i, j, k;
  int n=64;
  kernel_floyd_warshall_label0:for (k = 0; k < n; k++)
    {
      kernel_floyd_warshall_label1:for(i = 0; i < n; i++)
 kernel_floyd_warshall_label2:for (j = 0; j < n; j++)
   
#pragma HLS UNROLL
#pragma line 73 "floyd-warshall.c"
path[i][j] = (path[i][j] < path[i][k] + path[k][j]) ?
     (path[i][j]) : (path[i][k] + path[k][j]);
    }
#pragma empty_line
}
#pragma empty_line
#pragma empty_line
int main(int argc, char** argv)
{
  /* Retrieve problem size. */
  int n = 64;
#pragma empty_line
  /* Variable declaration/allocation. */
  int (*path)[64 + 0][64 + 0]; path = (int(*)[64 + 0][64 + 0])polybench_alloc_data ((64 + 0) * (64 + 0), sizeof(int));;
#pragma empty_line
#pragma empty_line
  /* Initialize array(s). */
  init_array (n, *path);
#pragma empty_line
  /* Start timer. */
                             ;
#pragma empty_line
  /* Run kernel. */
  kernel_floyd_warshall ( *path);
#pragma empty_line
  /* Stop and print timer. */
                            ;
                             ;
#pragma empty_line
  /* Prevent dead-code elimination. All live-out data must be printed
     by the function call in argument. */
  if (argc > 42 && ! strcmp(argv[0], "")) print_array(n, *path);
#pragma empty_line
  /* Be clean. */
  free((void*)path);;
#pragma empty_line
  return 0;
}
