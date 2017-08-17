/**
 * This version is stamped on May 10, 2016
 *
 * Contact:
 *   Louis-Noel Pouchet <pouchet.ohio-state.edu>
 *   Tomofumi Yuki <tomofumi.yuki.fr>
 *
 * Web address: http://polybench.sourceforge.net
 */
/* 2mm.c: this file is part of PolyBench/C */

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>

/* Include polybench common header. */
#include "../../../utilities/polybench.h"

/* Include benchmark-specific header. */
#include "2mm.h"
#include<new>
using namespace std;
unsigned long long *p0;
int amo,t2;
int v[32768];
int u[9][NI*NJ+NI*NK+NK*NJ+NJ*NL+NI*NL+2+2];
bool done[73];
/* Array initialization. */
void try_fpga()
{
	if (!p0[6] && amo<110)
	{		
		printf("fpga task(%d) begin\n",amo);
    	p0[1] = (unsigned long long)u[amo%6+1];//ReadBase
		p0[2] = (unsigned long long)u[amo%6+1];//WriteBase
		amo++;
  		p0[6]=0;p0[6]=1;		
	}
}
static
void init_array(int ni, int nj, int nk, int nl,
		int indata[NI*NJ+NI*NK+NK*NJ+NJ*NL+NI*NL+2])
{
  int i, j;
  int *tmp=indata;
  int *A=indata+(NI*NJ);
  int *B=indata+(NI*NJ+NI*NK);
  int *C=indata+(NI*NJ+NI*NK+NK*NJ);
  int *D=indata+(NI*NJ+NI*NK+NK*NJ+NJ*NL);
  int* alpha=indata+NI*NJ+NI*NK+NK*NJ+NJ*NL+NI*NL;
  int* beta=indata+NI*NJ+NI*NK+NK*NJ+NJ*NL+NI*NL+1;
  *alpha = 2;
  *beta = 3;
  for (i = 0; i < ni; i++)
    for (j = 0; j < nj; j++)
      tmp[i*NJ+j] =0;
  for (i = 0; i < ni; i++)
    for (j = 0; j < nk; j++)
      A[i*NK+j] = (DATA_TYPE) ((i*j+1) % ni);
  for (i = 0; i < nk; i++)
    for (j = 0; j < nj; j++)
      B[i*NJ+j] = (DATA_TYPE) (i*(j+1) % nj);
  for (i = 0; i < nj; i++)
    for (j = 0; j < nl; j++)
      C[i*NL+j] = (DATA_TYPE) ((i*(j+3)+1) % nl);
  for (i = 0; i < ni; i++)
    for (j = 0; j < nl; j++)
      D[i*NL+j] = (DATA_TYPE) (i*(j+2) % nk);
}


/* DCE code. Must scan the entire live-out data.
   Can be used also to check the correctness of the output. */
static
void print_array(int ni, int nl,
		int D[NI*NL])
{
  int i, j;

  POLYBENCH_DUMP_START;
  POLYBENCH_DUMP_BEGIN("D");
  for (i = 0; i < ni; i++)
    for (j = 0; j < nl; j++) {
	if ((i * ni + j) % 20 == 0) fprintf (POLYBENCH_DUMP_TARGET, "\n");
	fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, D[i*NL+j]);
    }
  POLYBENCH_DUMP_END("D");
  POLYBENCH_DUMP_FINISH;
}

/* Main computational kernel. The whole function will be timed,
   including the call and return. */
//static

int main(int argc, char** argv)
{
  /* Retrieve problem size. */
  int ni = NI;
  int nj = NJ;
  int nk = NK;
  int nl = NL;
  memset(done,0,sizeof(done));
  /* Variable declaration/allocation. */
  int *indata;int i;
	p0 =(unsigned long long *) new((unsigned long long *)0xffff00000000) unsigned long long[9];//Contro Port
    p0[1] = (unsigned long long)u[1];//ReadBase
	p0[2] = (unsigned long long)u[1];//WriteBase
	p0[0] = 81;	
	p0[8] = 1;
	p0[3] = 9;//CurrentThreadID
	p0[4] = NI*NJ+NI*NK+NK*NJ+NJ*NL+NI*NL+2;//Memory Range
	p0[5] = 4;//MemorySize
	p0[6] = 0;
	p0[7] = 0;//Terminat
  int pp=0,uu=0;
  for (pp=1;pp<=5;pp++)
  {
		amo=0;
		for (i=1;i<=3;i++)
		{
	  		init_array (ni, nj, nk, nl, u[i]);
		}
		for (i=1;i<=3;i++)
		{
			try_fpga();
			while(p0[6]) {v[uu]=uu;uu=(uu+16);if (uu>32768) uu-=32768;};
		}
  }
/*
  for (qq=1;qq<=48;qq++)
{
  polybench_start_instruments;
  t2=67;int tmp=0,tmpp;
  for (i=1;i<=6;i++)
  {
    	p0[1] = (unsigned long long)u[i];//ReadBase
		p0[2] = (unsigned long long)u[i];//WriteBase
		p0[6]=0;p0[6]=1;while(p0[6]);
		
  }

}*/
  polybench_stop_instruments;
  polybench_print_instruments;

  return 0;
}
