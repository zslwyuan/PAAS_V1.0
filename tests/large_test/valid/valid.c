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

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>

#include <new>
using namespace std;
unsigned long long* p0;

int main(int argc, char** argv)
{
  /* Retrieve problem size. */
    int i;
  /* Variable declaration/allocation. */
	p0 =(unsigned long long *) new((unsigned long long *)0xc0000000) unsigned long long[10];//Contro Port
	//printf("111111");
	p0[0] = 81;	
	p0[8] = 1;
	p0[3] = 9;//CurrentThreadID
	p0[4] = 64*64;//Memory Range
	p0[5] = 4;//MemorySize
	p0[7] = 0;//Terminat
    p0[6]=0;p0[6]=1;
    for (i=0;i<50000;i++)
		p0[0] = 81;
    p0[6]=0;
  return 0;
}
