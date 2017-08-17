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
int u[134][NI*NJ+NI*NK+NK*NJ+NJ*NL+NI*NL+2];
bool done[134];
/* Array initialization. */
void try_fpga()
{
	if (!p0[6])
	{
		if (amo==134) return;
		while (done[t2]) {t2++;t2=t2%134;}
		done[t2]=1;
		printf("fpga processing %d done[%d]=%d\n",t2,t2,done[t2]);
    	p0[1] = (unsigned long long)u[t2];//ReadBase
		p0[2] = (unsigned long long)u[t2];//WriteBase
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

void kernel_2mm(int indata[NI*NJ+NI*NK+NK*NJ+NJ*NL+NI*NL+2])
{
  int i, j, k;
  int ni=NI, nj=NJ,  nk=NK,  nl=NL;
  int (*tmp)=(indata);
  int (*A)=(indata+(NI*NJ));
  int (*B)=(indata+(NI*NJ+NI*NK));
  int (*C)=(indata+(NI*NJ+NI*NK+NK*NJ));
  int (*D)=(indata+(NI*NJ+NI*NK+NK*NJ+NJ*NL));
  int alpha=*(indata+NI*NJ+NI*NK+NK*NJ+NJ*NL+NI*NL);
  int beta=*(indata+NI*NJ+NI*NK+NK*NJ+NJ*NL+NI*NL+1);

  /* D := alpha*A*B*C + beta*D */
  for (i = 0; i < _PB_NI; i++)
{
	try_fpga();
    kernel_2mm_label5:for (j = 0; j < _PB_NJ; j++)
      {
	tmp[i*NJ+j] = 0;
	kernel_2mm_label0:for (k = 0; k < _PB_NK; ++k)
		//tmp[i][j] = addD(tmp[i][j],mulD(alpha,mulD(A[i][k], B[k][j])));
	  tmp[i*NJ+j] = tmp[i*NJ+j] + alpha * A[i*NK+k] * B[k*NJ+j];
      }
	if (amo==134) return;
}
  for (i = 0; i < _PB_NI; i++)
{
	if (amo==134) return;
	try_fpga();
    kernel_2mm_label7:for (j = 0; j < _PB_NL; j++)
      {
	D[i*NL+j] *=beta;
	kernel_2mm_label4:for (k = 0; k < _PB_NJ; ++k)
		D[i*NL+j]+=tmp[i*NJ+k]* C[k*NL+j];
	//  D[i][j] = addD(D[i][j], mulD(tmp[i][k], C[k][j]));
      }
}

}

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
  for (i=0;i<134;i++)
	{
		indata=u[i];
  		init_array (ni, nj, nk, nl, indata);
	}
	p0 =(unsigned long long *) new((unsigned long long *)0xffff00000000) unsigned long long[10];//Contro Port
	//printf("111111");
    p0[1] = (unsigned long long)indata;//ReadBase
	p0[2] = (unsigned long long)indata;//WriteBase
	p0[0] = 81;	
	p0[8] = 1;
	p0[3] = 9;//CurrentThreadID
	p0[4] = NI*NJ+NI*NK+NK*NJ+NJ*NL+NI*NL+2;//Memory Range
	p0[5] = 4;//MemorySize
	p0[6] = 0;
	p0[7] = 0;//Terminat
  /* Initialize array(s). */
  

  /* Start timer. */
  polybench_start_instruments;
  /* Run kernel. */
  t2=67;amo=0;
  for (i=12;i<76;i++)
  {
/*	if (done[i]) continue;
	done[i]=1;
    printf("cpu processing done[%d]=%d\n",i,done[i]);
	indata=u[i];
	amo++;
  	kernel_2mm (indata);*/
    	p0[1] = (unsigned long long)u[i];//ReadBase
		p0[2] = (unsigned long long)u[i];//WriteBase
		printf("cpu processing done[%d]=%d\n",i,done[i]);
//		amo++;		
  		p0[6]=0;p0[6]=1;while(p0[6]);
  }
  //p0[6]=0;p0[6]=1;while(p0[6]);
  /* Stop and print timer. */
  polybench_stop_instruments;
  polybench_print_instruments;
  /* Prevent dead-code elimination. All live-out data must be printed
     by the function call in argument. */
//  polybench_prevent_dce(print_array(ni, nl,  D));

  /* Be clean. *//*
  POLYBENCH_FREE_ARRAY(tmp);
  POLYBENCH_FREE_ARRAY(A);
  POLYBENCH_FREE_ARRAY(B);
  POLYBENCH_FREE_ARRAY(C);
  POLYBENCH_FREE_ARRAY(D);*/

  return 0;
}
