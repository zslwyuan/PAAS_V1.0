/**
 * This version is stamped on May 10, 2016
 *
 * Contact:
 *   Louis-Noel Pouchet <pouchet.ohio-state.edu>
 *   Tomofumi Yuki <tomofumi.yuki.fr>
 *
 * Web address: http://polybench.sourceforge.net
 */
/* jacobi-2d.c: this file is part of PolyBench/C */

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>

/* Include polybench common header. */
#include "../../utilities/polybench.h"

/* Include benchmark-specific header. */
#include "jacobi-2d.h"
#include <new>
using namespace std;
unsigned long long* p0;
int amo,t2;
int u[16][2*N][N];
bool done[16];
/* Array initialization. */
void try_fpga()
{
	if (!p0[6])
	{
		printf("amo--%d t2:%d done[t2]:%d\n",amo,t2,done[t2]);
		if (amo==16) return;
		while (done[t2]) {t2++;t2=t2%16;}
		done[t2]=1;amo++;	
		printf("fpga processing %d done[%d]=%d\n",t2,t2,done[t2]);
    	p0[1] = (unsigned long long)u[t2];//ReadBase
		p0[2] = (unsigned long long)u[t2];//WriteBase
			
  		p0[6]=0;p0[6]=1;
		
	}
}
/* Array initialization. */
static
void init_array (int n,int A[N][N],int B[N][N])
{
  int i, j;

  for (i = 0; i < n; i++)
    for (j = 0; j < n; j++)
      {
	A[i][j] = ((DATA_TYPE) i*(j+2) + 2) ;
	B[i][j] = ((DATA_TYPE) i*(j+3) + 3) ;
      }
}


/* DCE code. Must scan the entire live-out data.
   Can be used also to check the correctness of the output. */
static
void print_array(int A[N][N])

{
  int i, j;
  int n=N;
  POLYBENCH_DUMP_START;
  POLYBENCH_DUMP_BEGIN("A");
  for (i = 0; i < n; i++)
    for (j = 0; j < n; j++) {
      if ((i * n + j) % 20 == 0) printf("\n");
      printf("%d ", A[i][j]);

    }
  POLYBENCH_DUMP_END("A");
  POLYBENCH_DUMP_FINISH;
}


/* Main computational kernel. The whole function will be timed,
   including the call and return. */

void kernel_jacobi_2d(int A[2*N][N])
{
  int t, i, j;
  int tsteps=TSTEPS;
  int n=N;
#pragma scop
  for (t = 0; t < TSTEPS; t++)
    {
      try_fpga();
	  if (amo==16) return;
      for (i = 1; i < N - 1; i++)
	kernel_jacobi_2d_label0:for (j = 1; j < N - 1; j++)
	  A[i+N][j] =  (A[i][j] + A[i][j-1] + A[i][1+j] + A[1+i][j] + A[i-1][j])/5;
      for (i = 1; i < N - 1; i++)
	kernel_jacobi_2d_label1:for (j = 1; j < N - 1; j++)
	  A[i][j] =  (A[i+N][j] + A[i+N][j-1] + A[i+N][1+j] + A[1+i+N][j] + A[i-1+N][j])/5;
    }
#pragma endscop

}

int main(int argc, char** argv)
{
  /* Retrieve problem size. */
  printf("here\n");
  int n = N;
  int tsteps = TSTEPS;

  int (*A)[N];
  /* Variable declaration/allocation. */

  /* Initialize array(s). */
	t2=8;amo=0;
	int i;
	for (i=0;i<16;i++)
{
  printf("%d\n",i);
	A=u[i];
  init_array (n, (int (*)[N])A[0], (int (*)[N])A[N]);
  
}
	p0 =(unsigned long long *) new((unsigned long long *)0xffff00000000) unsigned long long[10];//Contro Port
	//printf("111111");
	p0[0] = 81;	
	p0[8] = 1;
	p0[3] = 9;//CurrentThreadID
	p0[4] = 2*N*N;//Memory Range
	p0[5] = 4;//MemorySize
	p0[7] = 0;//Terminat

  /* Start timer. */
  polybench_start_instruments;

  /* Run kernel. */
memset(done,0,sizeof(done));
for (i=0;i<16;i++)
{
/*  if (done[i]) continue;done[i]=1;amo++;
  A=u[i];printf("cpu processing %d done[%d]=%d\n",i,i,done[i]);
	printf("amo--%d\n",amo);
  kernel_jacobi_2d(A);*/
    	p0[1] = (unsigned long long)u[t2];//ReadBase
		p0[2] = (unsigned long long)u[t2];//WriteBase
		printf("cpu processing done[%d]=%d\n",i,done[i]);
  		p0[6]=0;p0[6]=1;while(p0[6]);
}
  //p0[6]=0;p0[6]=1;while(p0[6]);
  /* Stop and print timer. */
  polybench_stop_instruments;
  polybench_print_instruments;

  /* Prevent dead-code elimination. All live-out data must be printed
     by the function call in argument. */
  //polybench_prevent_dce(print_array(A));



  return 0;
}
