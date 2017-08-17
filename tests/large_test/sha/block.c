#include "block.h"
#include "sha.h"



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
  INT32 *y=buff+23;
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

  y[0]=buff[0] + A;
  y[1]=buff[1] + B;
  y[2]=buff[2] + C;
  y[3]=buff[3] + D;
  y[4]=buff[4] + E;

  return m+n;
}
