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
/* NIST Secure Hash Algorithm */
/* heavily modified by Uwe Hollerbach uh@alumni.caltech edu */
/* from Peter C. Gutmann's implementation as found in */
/* Applied Cryptography by Bruce Schneier */

/* NIST's proposed modification to SHA of 7/11/94 may be */
/* activated by defining USE_MODIFIED_SHA */

#include <stdio.h>
#include "block.h"
#include "sha.h"
#include "init.h"
#include <new>
using namespace std;
unsigned long long* p0;
//#include "sha.c"

/*
+--------------------------------------------------------------------------+
| * Test Vector (added for CHStone)                                        |
|     outData : expected output data                                       |
+--------------------------------------------------------------------------+
*/

#define f1(x,y,z)	((x & y) | (~x & z))
#define f2(x,y,z)	(x ^ y ^ z)
#define f3(x,y,z)	((x & y) | (x & z) | (y & z))
#define f4(x,y,z)	(x ^ y ^ z)

/* SHA constants */

#define CONST1		0x5a827999L
#define CONST2		0x6ed9eba1L
#define CONST3		0x8f1bbcdcL
#define CONST4		0xca62c1d6L

/* 32-bit rotate */

#define ROT32(x,n)	((x << n) | (x >> (32 - n)))

#define FUNC(n,i)						\
    temp = ROT32(A,5) + f##n(B,C,D) + E + W[i] + CONST##n;	\
    E = D; D = C; C = ROT32(B,30); B = A; A = temp

int
local_memcpy (INT32 * s1, int x, const BYTE * s2, int n)
{
  INT32 *p1;
  BYTE *p2;
  INT32 tmp;
  int m;
  m = n / 4;
  p1 = (INT32 *) s1;
  p2 = (BYTE *) s2;

  local_memcpy_label0:while (m-- > 0)
    {
      tmp = 0;
      tmp |= 0xFF & *p2++;
      tmp |= (0xFF & *p2++) << 8;
      tmp |= (0xFF & *p2++) << 16;
      tmp |= (0xFF & *p2++) << 24;
      *p1 = tmp;
      p1++;
    }
  return x+n;
}


int
sha_transform (INT32 buff[23], int m, int n )
{
  int i;
  INT32 temp, A, B, C, D, E, W[80];
  sha_transform_label0:for (i = 0; i < 16; ++i)
    {
      W[i] = buff[5+i];
    }
  sha_transform_label1:for (i = 16; i < 80; ++i)
    {
      W[i] = W[i - 3] ^ W[i - 8] ^ W[i - 14] ^ W[i - 16];
    }
  A = buff[0];
  B = buff[1];
  C = buff[2];
  D = buff[3];
  E = buff[4];

  sha_transform_label2:for (i = 0; i < 20; ++i)
    {
      FUNC (1, i);
    }
  sha_transform_label3:for (i = 20; i < 40; ++i)
    {
      FUNC (2, i);
    }
  sha_transform_label4:for (i = 40; i < 60; ++i)
    {
      FUNC (3, i);
    }
  sha_transform_label5:for (i = 60; i < 80; ++i)
    {
      FUNC (4, i);
    }

  buff[0]=buff[0] + A;
  buff[1]=buff[1] + B;
  buff[2]=buff[2] + C;
  buff[3]=buff[3] + D;
  buff[4]=buff[4] + E;

  return m+n;
}

void
local_memset (INT32 * s, int c, int n, int e)
{
  INT32 uc;
  INT32 *p;
  int m;

  m = n / 4;
  uc = c;
  p = (INT32 *) s;
  while (e-- > 0)
    {
      p++;
    }
  while (m-- > 0)
    {
      *p++ = uc;
    }
}



/* do SHA transformation */



/* initialize the SHA digest */

void
sha_init ()
{
  sha_info_digest[0] = 0x67452301L;
  sha_info_digest[1] = 0xefcdab89L;
  sha_info_digest[2] = 0x98badcfeL;
  sha_info_digest[3] = 0x10325476L;
  sha_info_digest[4] = 0xc3d2e1f0L;
  *sha_info_count_lo = 0L;
  *sha_info_count_hi = 0L;
}

/* update the SHA digest */

void
sha_update (const BYTE * buffer, int count)
{
  if (((*sha_info_count_lo) + ((INT32) count << 3)) < (*sha_info_count_lo))
    {
      ++ (*sha_info_count_hi);
    }
  (*sha_info_count_lo) += (INT32) count << 3;
  (*sha_info_count_hi) += (INT32) count >> 29;
  while (count >= SHA_BLOCKSIZE)
    {

	  local_memcpy (sha_info_data, SHA_BLOCKSIZE,buffer, SHA_BLOCKSIZE);
      int m,n;
      int a;
      m = 84; n = 20;//printf("1\n");
	  p0[6]=0;p0[6]=1;while(p0[6]);
	  
	 // a = sha_transform (buff, m,n);

      buffer += SHA_BLOCKSIZE;
      count -= SHA_BLOCKSIZE;
    }
  local_memcpy (sha_info_data, count, buffer, count);
}

/* finish computing the SHA digest */






void
sha_final ()
{
  int count;
  INT32 lo_bit_count;
  INT32 hi_bit_count;

  lo_bit_count = *sha_info_count_lo;
  hi_bit_count = *sha_info_count_hi;
  count = (int) ((lo_bit_count >> 3) & 0x3f);
  sha_info_data[count++] = 0x80;
  int m,n;
  int a;
  m = 84; n = 20;
  if (count > 56)
    {
      local_memset (sha_info_data, 0, 64 - count, count);
		p0[6]=0;p0[6]=1;while(p0[6]);
	  //a = sha_transform (buff, m,n);
      local_memset (sha_info_data, 0, 56, 0);
    }
  else
    {
      local_memset (sha_info_data, 0, 56 - count, count);
    }
  sha_info_data[14] = hi_bit_count;
  sha_info_data[15] = lo_bit_count;
	p0[6]=0;p0[6]=1;while(p0[6]);
 // a = sha_transform (buff, m,n);
}

/* compute the SHA digest of a FILE stream */
void
sha_stream ()
{
	sha_info_digest = &buff[0];


	sha_info_data = &buff[5];

	sha_info_count_lo = &buff[21];
	sha_info_count_hi = &buff[22];

int i, j;
  const BYTE *p;


  sha_init ();
  for (j = 0; j < VSIZE; j++)
    {
      i = in_i[j];
      p = &indata[j][0];
      sha_update (p, i);
    }
  sha_final ();
}

const INT32 outData[5] =
  { 0x006a5a37UL, 0x93dc9485UL, 0x2c412112UL, 0x63f7ba43UL, 0xad73f922UL };

int
main ()
{
	p0 =(unsigned long long *) new((unsigned long long *)0xc0000000) unsigned long long[10];//Contro Port
	//printf("111111");
    p0[1] = (unsigned long long)buff;//ReadBase
	p0[2] = (unsigned long long)buff;//WriteBase
	p0[0] = 81;	
	p0[8] = 1;
	p0[3] = 9;//CurrentThreadID
	p0[4] = 23;//Memory Range
	p0[5] = 4;//MemorySize
	p0[7] = 0;//Terminat
  int i;
  int main_result;
      main_result = 0;
      sha_stream ();

      for (i = 0; i < 5; i++)
	{

	  main_result += (sha_info_digest[i] != outData[i]);
	}
      printf ("%d\n", main_result);

      return main_result;
    }
