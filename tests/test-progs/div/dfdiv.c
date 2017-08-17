/*
+--------------------------------------------------------------------------+
| CHStone : a suite of benchmark programs for C-based High-Level Synthesis |
| ======================================================================== |
|                                                                          |
| * Collected and Modified : Y. Hara, H. Tomiyama, S. Honda,               |
|                            H. Takada and K. Ishii                        |
|                            Nagoya University, Japan                      |
|                                                                          |
| * Remark :                                                               |
|    1. This source code is modified to unify the formats of the benchmark |
|       programs in CHStone.                                               |
|    2. Test vectors are added for CHStone.                                |
|    3. If "main_result" is 0 at the end of the program, the program is    |
|       correctly executed.                                                |
|    4. Please follow the copyright of each benchmark program.             |
+--------------------------------------------------------------------------+
*/
/*
 * Copyright (C) 2008
 * Y. Hara, H. Tomiyama, S. Honda, H. Takada and K. Ishii
 * Nagoya University, Japan
 * All rights reserved.
 *
 * Disclaimer of Warranty
 *
 * These software programs are available to the user without any license fee or
 * royalty on an "as is" basis. The authors disclaims any and all warranties, 
 * whether express, implied, or statuary, including any implied warranties or 
 * merchantability or of fitness for a particular purpose. In no event shall the
 * copyright-holder be liable for any incidental, punitive, or consequential damages
 * of any kind whatsoever arising from the use of these programs. This disclaimer
 * of warranty extends to the user of these programs and user's customers, employees,
 * agents, transferees, successors, and assigns.
 *
 */
#include <stdio.h>
#include "milieu.h"
#include "softfloat.h"

INLINE void
shift64RightJamming (bits64 a, int16 count, bits64 * zPtr)
{
  bits64 z;

  if (count == 0)
    {
      z = a;
    }
  else if (count < 64)
    {
      z = (a >> count) | ((a << ((-count) & 63)) != 0);
    }
  else
    {
      z = (a != 0);
    }
  *zPtr = z;

}

INLINE void
add128 (bits64 a0, bits64 a1, bits64 b0, bits64 b1, bits64 * z0Ptr,
	bits64 * z1Ptr)
{
  bits64 z1;

  z1 = a1 + b1;
  *z1Ptr = z1;
  *z0Ptr = a0 + b0 + (z1 < a1);

}

INLINE void
sub128 (bits64 a0, bits64 a1, bits64 b0, bits64 b1, bits64 * z0Ptr,
	bits64 * z1Ptr)
{

  *z1Ptr = a1 - b1;
  *z0Ptr = a0 - b0 - (a1 < b1);

}

INLINE void
mul64To128 (bits64 a, bits64 b, bits64 * z0Ptr, bits64 * z1Ptr)
{
  bits32 aHigh, aLow, bHigh, bLow;
  bits64 z0, zMiddleA, zMiddleB, z1;

  aLow = a;
  aHigh = a >> 32;
  bLow = b;
  bHigh = b >> 32;
  z1 = ((bits64) aLow) * bLow;
  zMiddleA = ((bits64) aLow) * bHigh;
  zMiddleB = ((bits64) aHigh) * bLow;
  z0 = ((bits64) aHigh) * bHigh;
  zMiddleA += zMiddleB;
  z0 += (((bits64) (zMiddleA < zMiddleB)) << 32) + (zMiddleA >> 32);
  zMiddleA <<= 32;
  z1 += zMiddleA;
  z0 += (z1 < zMiddleA);
  *z1Ptr = z1;
  *z0Ptr = z0;

}

static bits64
estimateDiv128To64 (bits64 a0, bits64 a1, bits64 b)
{
  bits64 b0, b1;
  bits64 rem0, rem1, term0, term1;
  bits64 z;

  if (b <= a0)
    return LIT64 (0xFFFFFFFFFFFFFFFF);
  b0 = b >> 32;
  z = (b0 << 32 <= a0) ? LIT64 (0xFFFFFFFF00000000) : (a0 / b0) << 32;
  mul64To128 (b, z, &term0, &term1);
  sub128 (a0, a1, term0, term1, &rem0, &rem1);
  while (((sbits64) rem0) < 0)
    {
      z -= LIT64 (0x100000000);
      b1 = b << 32;
      add128 (rem0, rem1, b0, b1, &rem0, &rem1);
    }
  rem0 = (rem0 << 32) | (rem1 >> 32);
  z |= (b0 << 32 <= rem0) ? 0xFFFFFFFF : rem0 / b0;
  return z;

}


static int8
countLeadingZeros32 (bits32 a)
{
  static const int8 countLeadingZerosHigh[256] = {
    8, 7, 6, 6, 5, 5, 5, 5, 4, 4, 4, 4, 4, 4, 4, 4,
    3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
    2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
    2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
  };
  int8 shiftCount;

  shiftCount = 0;
  if (a < 0x10000)
    {
      shiftCount += 16;
      a <<= 16;
    }
  if (a < 0x1000000)
    {
      shiftCount += 8;
      a <<= 8;
    }
  shiftCount += countLeadingZerosHigh[a >> 24];
  return shiftCount;

}

static int8
countLeadingZeros64 (bits64 a)
{
  int8 shiftCount;

  shiftCount = 0;
  if (a < ((bits64) 1) << 32)
    {
      shiftCount += 32;
    }
  else
    {
      a >>= 32;
    }
  shiftCount += countLeadingZeros32 (a);
  return shiftCount;

}

int8 float_rounding_mode = float_round_nearest_even;
int8 float_exception_flags = 0;

#define float_detect_tininess float_tininess_before_rounding

void
float_raise (int8 flags)
{
  float_exception_flags |= flags;

}

#define float64_default_nan LIT64( 0x7FFFFFFFFFFFFFFF )

flag
float64_is_nan (float64 a)
{

  return (LIT64 (0xFFE0000000000000) < (bits64) (a << 1));

}

flag
float64_is_signaling_nan (float64 a)
{

  return (((a >> 51) & 0xFFF) == 0xFFE) && (a & LIT64 (0x0007FFFFFFFFFFFF));

}

static float64
propagateFloat64NaN (float64 a, float64 b)
{
  flag aIsNaN, aIsSignalingNaN, bIsNaN, bIsSignalingNaN;

  aIsNaN = float64_is_nan (a);
  aIsSignalingNaN = float64_is_signaling_nan (a);
  bIsNaN = float64_is_nan (b);
  bIsSignalingNaN = float64_is_signaling_nan (b);
  a |= LIT64 (0x0008000000000000);
  b |= LIT64 (0x0008000000000000);
  if (aIsSignalingNaN | bIsSignalingNaN)
    float_raise (float_flag_invalid);
  return bIsSignalingNaN ? b : aIsSignalingNaN ? a : bIsNaN ? b : a;

}

INLINE bits64
extractFloat64Frac (float64 a)
{

  return a & LIT64 (0x000FFFFFFFFFFFFF);

}

INLINE int16
extractFloat64Exp (float64 a)
{

  return (a >> 52) & 0x7FF;

}

INLINE flag
extractFloat64Sign (float64 a)
{

  return a >> 63;

}

static void
normalizeFloat64Subnormal (bits64 aSig, int16 * zExpPtr, bits64 * zSigPtr)
{
  int8 shiftCount;

  shiftCount = countLeadingZeros64 (aSig) - 11;
  *zSigPtr = aSig << shiftCount;
  *zExpPtr = 1 - shiftCount;

}

INLINE float64
packFloat64 (flag zSign, int16 zExp, bits64 zSig)
{

  return (((bits64) zSign) << 63) + (((bits64) zExp) << 52) + zSig;

}

static float64
roundAndPackFloat64 (flag zSign, int16 zExp, bits64 zSig)
{
  int8 roundingMode;
  flag roundNearestEven, isTiny;
  int16 roundIncrement, roundBits;

  roundingMode = float_rounding_mode;
  roundNearestEven = (roundingMode == float_round_nearest_even);
  roundIncrement = 0x200;
  if (!roundNearestEven)
    {
      if (roundingMode == float_round_to_zero)
	{
	  roundIncrement = 0;
	}
      else
	{
	  roundIncrement = 0x3FF;
	  if (zSign)
	    {
	      if (roundingMode == float_round_up)
		roundIncrement = 0;
	    }
	  else
	    {
	      if (roundingMode == float_round_down)
		roundIncrement = 0;
	    }
	}
    }
  roundBits = zSig & 0x3FF;
  if (0x7FD <= (bits16) zExp)
    {
      if ((0x7FD < zExp)
	  || ((zExp == 0x7FD) && ((sbits64) (zSig + roundIncrement) < 0)))
	{
	  float_raise (float_flag_overflow | float_flag_inexact);
	  return packFloat64 (zSign, 0x7FF, 0) - (roundIncrement == 0);
	}
      if (zExp < 0)
	{
	  isTiny = (float_detect_tininess == float_tininess_before_rounding)
	    || (zExp < -1)
	    || (zSig + roundIncrement < LIT64 (0x8000000000000000));
	  shift64RightJamming (zSig, -zExp, &zSig);
	  zExp = 0;
	  roundBits = zSig & 0x3FF;
	  if (isTiny && roundBits)
	    float_raise (float_flag_underflow);
	}
    }
  if (roundBits)
    float_exception_flags |= float_flag_inexact;
  zSig = (zSig + roundIncrement) >> 10;
  zSig &= ~(((roundBits ^ 0x200) == 0) & roundNearestEven);
  if (zSig == 0)
    zExp = 0;
  return packFloat64 (zSign, zExp, zSig);

}

float64
float64_div (float64 a, float64 b)
{
  flag aSign, bSign, zSign;
  int16 aExp, bExp, zExp;
  bits64 aSig, bSig, zSig;
  bits64 rem0, rem1, term0, term1;

  aSig = extractFloat64Frac (a);
  aExp = extractFloat64Exp (a);
  aSign = extractFloat64Sign (a);
  bSig = extractFloat64Frac (b);
  bExp = extractFloat64Exp (b);
  bSign = extractFloat64Sign (b);
  zSign = aSign ^ bSign;
  if (aExp == 0x7FF)
    {
      if (aSig)
	return propagateFloat64NaN (a, b);
      if (bExp == 0x7FF)
	{
	  if (bSig)
	    return propagateFloat64NaN (a, b);
	  float_raise (float_flag_invalid);
	  return float64_default_nan;
	}
      return packFloat64 (zSign, 0x7FF, 0);
    }
  if (bExp == 0x7FF)
    {
      if (bSig)
	return propagateFloat64NaN (a, b);
      return packFloat64 (zSign, 0, 0);
    }
  if (bExp == 0)
    {
      if (bSig == 0)
	{
	  if ((aExp | aSig) == 0)
	    {
	      float_raise (float_flag_invalid);
	      return float64_default_nan;
	    }
	  float_raise (float_flag_divbyzero);
	  return packFloat64 (zSign, 0x7FF, 0);
	}
      normalizeFloat64Subnormal (bSig, &bExp, &bSig);
    }
  if (aExp == 0)
    {
      if (aSig == 0)
	return packFloat64 (zSign, 0, 0);
      normalizeFloat64Subnormal (aSig, &aExp, &aSig);
    }
  zExp = aExp - bExp + 0x3FD;
  aSig = (aSig | LIT64 (0x0010000000000000)) << 10;
  bSig = (bSig | LIT64 (0x0010000000000000)) << 11;
  if (bSig <= (aSig + aSig))
    {
      aSig >>= 1;
      ++zExp;
    }
  zSig = estimateDiv128To64 (aSig, 0, bSig);
  if ((zSig & 0x1FF) <= 2)
    {
      mul64To128 (bSig, zSig, &term0, &term1);
      sub128 (aSig, 0, term0, term1, &rem0, &rem1);
      while ((sbits64) rem0 < 0)
	{
	  --zSig;
	  add128 (rem0, rem1, 0, bSig, &rem0, &rem1);
	}
      zSig |= (rem1 != 0);
    }
  return roundAndPackFloat64 (zSign, zExp, zSig);

}

double
ullong_to_double (unsigned long long x)
{
  union
  {
    double d;
    unsigned long long ll;
  } t;

  t.ll = x;
  return t.d;
}

#define N 22

const float64 a_input[N] = {
  0x7FFF000000000000ULL,	/* nan */
  0x7FF0000000000000ULL,	/* inf */
  0x7FF0000000000000ULL,	/* inf */
  0x7FF0000000000000ULL,	/* inf */
  0x3FF0000000000000ULL,	/* 1.0 */
  0x3FF0000000000000ULL,	/* 1.0 */
  0x0000000000000000ULL,	/* 0.0 */
  0x3FF0000000000000ULL,	/* 1.0 */
  0x0000000000000000ULL,	/* 0.0 */
  0x8000000000000000ULL,	/* -0.0 */
  0x4008000000000000ULL,	/* 3.0 */
  0xC008000000000000ULL,	/* -3.0 */
  0x4008000000000000ULL,	/* 3.0 */
  0xC008000000000000ULL,	/* -3.0 */
  0x4000000000000000ULL,	/* 2.0 */
  0xC000000000000000ULL,	/* -2.0 */
  0x4000000000000000ULL,	/* 2.0 */
  0xC000000000000000ULL,	/* -2.0 */
  0x3FF0000000000000ULL,	/* 1.0 */
  0xBFF0000000000000ULL,	/* -1.0 */
  0x3FF0000000000000ULL,	/* 1.0 */
  0xBFF0000000000000ULL		/* -1.0 */
};

const float64 b_input[N] = {
  0x3FF0000000000000ULL,	/* 1.0 */
  0x7FF8000000000000ULL,	/* nan */
  0x7FF0000000000000ULL,	/* inf */
  0x3FF0000000000000ULL,	/* 1.0 */
  0x7FF8000000000000ULL,	/* nan */
  0x7FF0000000000000ULL,	/* inf */
  0x0000000000000000ULL,	/* 0.0 */
  0x0000000000000000ULL,	/* 0.0 */
  0x3FF0000000000000ULL,	/* 1.0 */
  0x3FF0000000000000ULL,	/* 1.0 */
  0x4000000000000000ULL,	/* 2.0 */
  0x4000000000000000ULL,	/* 2.0 */
  0xC000000000000000ULL,	/* 2.0 */
  0xC000000000000000ULL,	/* -2.0 */
  0x4010000000000000ULL,	/* 4.0 */
  0x4010000000000000ULL,	/* 4.0 */
  0xC010000000000000ULL,	/* -4.0 */
  0xC010000000000000ULL,	/* -4.0 */
  0x3FF8000000000000ULL,	/* 1.5 */
  0x3FF8000000000000ULL,	/* 1.5 */
  0xBFF8000000000000ULL,	/* -1.5 */
  0xBFF8000000000000ULL		/* -1.5 */
};

const float64 z_output[N] = {
  0x7FFF000000000000ULL,	/* nan */
  0x7FF8000000000000ULL,	/* nan */
  0x7FFFFFFFFFFFFFFFULL,	/* nan */
  0x7FF0000000000000ULL,	/* inf */
  0x7FF8000000000000ULL,	/* nan */
  0x0000000000000000ULL,	/* 0.0 */
  0x7FFFFFFFFFFFFFFFULL,	/* nan */
  0x7FF0000000000000ULL,	/* inf */
  0x0000000000000000ULL,	/* 0.0 */
  0x8000000000000000ULL,	/* -0.0 */
  0x3FF8000000000000ULL,	/* 1.5 */
  0xBFF8000000000000ULL,	/* -1.5 */
  0xBFF8000000000000ULL,	/* 1.5 */
  0x3FF8000000000000ULL,	/* -1.5 */
  0x3FE0000000000000ULL,	/* 0.5 */
  0xBFE0000000000000ULL,	/* 5.0 */
  0xBFE0000000000000ULL,	/* -5.0 */
  0x3FE0000000000000ULL,	/* 0.5 */
  0x3FE5555555555555ULL,	/* 0.666667 */
  0xBFE5555555555555ULL,	/* -0.666667 */
  0xBFE5555555555555ULL,	/* -0.666667 */
  0x3FE5555555555555ULL		/* 0.666667 */
};

int
main ()
{
  int main_result;
  int i;
  float64 x1, x2;
      main_result = 0;
      for (i = 0; i < N; i++)
	{
	  float64 result;
	  x1 = a_input[i];
	  x2 = b_input[i];
	  result = float64_div (x1, x2);
	  main_result += (result != z_output[i]);

	  printf
	    ("a_input=%016llx b_input=%016llx expected=%016llx output=%016llx (%lf)\n",
	     a_input[i], b_input[i], z_output[i], result,
	     ullong_to_double (result));
	}
      printf ("%d\n", main_result);
      return main_result;
    }
