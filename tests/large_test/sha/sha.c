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


/* SHA f()-functions */

#include "block.h"
#include "sha.h"
#include "init.h"

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
      m = 84; n = 20;
	  a = sha_transform (buff, m, buff,n);

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

	  a = sha_transform (buff, m, buff,n);
      local_memset (sha_info_data, 0, 56, 0);
    }
  else
    {
      local_memset (sha_info_data, 0, 56 - count, count);
    }
  sha_info_data[14] = hi_bit_count;
  sha_info_data[15] = lo_bit_count;
  a = sha_transform (buff, m, buff,n);
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
