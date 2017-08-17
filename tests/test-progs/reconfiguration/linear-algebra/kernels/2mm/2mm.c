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


/* Array initialization. */
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
    kernel_2mm_label5:for (j = 0; j < _PB_NJ; j++)
      {
	tmp[i*NJ+j] = 0;
	kernel_2mm_label0:for (k = 0; k < _PB_NK; ++k)
		//tmp[i][j] = addD(tmp[i][j],mulD(alpha,mulD(A[i][k], B[k][j])));
	  tmp[i*NJ+j] = tmp[i*NJ+j] + alpha * A[i*NK+k] * B[k*NJ+j];
      }
  for (i = 0; i < _PB_NI; i++)
    kernel_2mm_label7:for (j = 0; j < _PB_NL; j++)
      {
	D[i*NL+j] *=beta;
	kernel_2mm_label4:for (k = 0; k < _PB_NJ; ++k)
		D[i*NL+j]+=tmp[i*NJ+k]* C[k*NL+j];
	//  D[i][j] = addD(D[i][j], mulD(tmp[i][k], C[k][j]));
      }

}

int indata[NI*NJ+NI*NK+NK*NJ+NJ*NL+NI*NL+2];

int main(int argc, char** argv)
{
  /* Retrieve problem size. */
  int ni = NI;
  int nj = NJ;
  int nk = NK;
  int nl = NL;

  /* Variable declaration/allocation. */

  int* alpha=indata+NI*NJ+NI*NK+NK*NJ+NJ*NL+NI*NL;
  int* beta=indata+NI*NJ+NI*NK+NK*NJ+NJ*NL+NI*NL+1;
  int *tmp=indata;
  int *A=indata+(NI*NJ);
  int *B=indata+(NI*NJ+NI*NK);
  int *C=indata+(NI*NJ+NI*NK+NK*NJ);
  int *D=indata+(NI*NJ+NI*NK+NK*NJ+NJ*NL);
  /* Initialize array(s). */
  init_array (ni, nj, nk, nl, indata);

  /* Start timer. */
  polybench_start_instruments;
  printf("%d %d %d %d\n",indata[1],indata[1001],indata[2222],indata[3211]);
  /* Run kernel. */
  kernel_2mm (indata);

  /* Stop and print timer. */
  polybench_stop_instruments;
  polybench_print_instruments;

  /* Prevent dead-code elimination. All live-out data must be printed
     by the function call in argument. */
  polybench_prevent_dce(print_array(ni, nl,  D));
  print_array(ni, nl,  D);
	printf("%d %d %d %d\n",indata[1],indata[1001],indata[2222],indata[3211]);
  /* Be clean. *//*
  POLYBENCH_FREE_ARRAY(tmp);
  POLYBENCH_FREE_ARRAY(A);
  POLYBENCH_FREE_ARRAY(B);
  POLYBENCH_FREE_ARRAY(C);
  POLYBENCH_FREE_ARRAY(D);*/

  return 0;
}
