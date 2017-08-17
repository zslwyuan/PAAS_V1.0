/**
 * This version is stamped on May 10, 2016
 *
 * Contact:
 *   Louis-Noel Pouchet <pouchet.ohio-state.edu>
 *   Tomofumi Yuki <tomofumi.yuki.fr>
 *
 * Web address: http://polybench.sourceforge.net
 */
/* heat-3d.c: this file is part of PolyBench/C */

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>

/* Include polybench common header. */
#include "../../utilities/polybench.h"

/* Include benchmark-specific header. */
#include "heat-3d.h"
#include<new>
using namespace std;
unsigned long long *p0;
int amo,t2;
int u[10][2*N][N][N];
bool done[10];
/* Array initialization. */
void try_fpga()
{
	if (!p0[6])
	{
		if (amo==10) return;
		while (done[t2]) {t2++;t2=t2%10;}
		done[t2]=1;
		printf("fpga processing %d done[%d]=%d\n",t2,t2,done[t2]);
    	p0[1] = (unsigned long long)u[t2];//ReadBase
		p0[2] = (unsigned long long)u[t2];//WriteBase
		amo++;		
  		p0[6]=0;p0[6]=1;
		
	}
}
/* Array initialization. */
static
void init_array (int n,
		 DATA_TYPE POLYBENCH_3D(A,N,N,N,n,n,n),
		 DATA_TYPE POLYBENCH_3D(B,N,N,N,n,n,n))
{
  int i, j, k;

  for (i = 0; i < n; i++)
    for (j = 0; j < n; j++)
      for (k = 0; k < n; k++)
        A[i][j][k] = B[i][j][k] = (DATA_TYPE) (i + j * (n-k))* 10 ;
}


/* DCE code. Must scan the entire live-out data.
   Can be used also to check the correctness of the output. */
static
void print_array(int n,
		 DATA_TYPE POLYBENCH_3D(A,N,N,N,n,n,n))

{
  int i, j, k;

  POLYBENCH_DUMP_START;
  POLYBENCH_DUMP_BEGIN("A");
  for (i = 0; i < n; i++)
    for (j = 0; j < n; j++)
      for (k = 0; k < n; k++) {
         if ((i * n * n + j * n + k) % 20 == 0) fprintf(POLYBENCH_DUMP_TARGET, "\n");
         fprintf(POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, A[i][j][k]);
      }
  POLYBENCH_DUMP_END("A");
  POLYBENCH_DUMP_FINISH;
}


/* Main computational kernel. The whole function will be timed,
   including the call and return. */
void kernel_heat_3d(
		      int A[2*N][N][N])
{
  int t, i, j, k;
  int tsteps=TSTEPS;
  int n=N;
#pragma scop
    for (t = 1; t <= TSTEPS; t++) {
        for (i = 1; i < _PB_N-1; i++) {if (amo==10) return;
		try_fpga();
            for (j = 1; j < _PB_N-1; j++) {
                kernel_heat_3d_label8:for (k = 1; k < _PB_N-1; k++) {
                    A[i+N][j][k] =   ((A[i+1][j][k] - 2 * A[i][j][k] + A[i-1][j][k])>>3)
                                 + ((A[i][j+1][k] - 2 * A[i][j][k] + A[i][j-1][k])>>3)
                                 + ((A[i][j][k+1] - 2 * A[i][j][k] + A[i][j][k-1])>>3)
                                 + A[i][j][k];
                }
            }
        }
        for (i = 1; i < _PB_N-1; i++) {if (amo==10) return;
			try_fpga();
           for (j = 1; j < _PB_N-1; j++) {
               kernel_heat_3d_label7:for (k = 1; k < _PB_N-1; k++) {
                   A[i][j][k] =   ((A[i+1+N][j][k] - 2 * A[i+N][j][k] + A[i-1+N][j][k])>>3)
                                + ((A[i+N][j+1][k] - 2 * A[i+N][j][k] + A[i+N][j-1][k])>>3)
                                + ((A[i+N][j][k+1] - 2 * A[i+N][j][k] + A[i+N][j][k-1])>>3)
                                + A[i+N][j][k];
               }
           }
       }
    }
#pragma endscop

}

int main(int argc, char** argv)
{
  /* Retrieve problem size. */
  int n = N;
  int tsteps = TSTEPS;
  int (*A)[N][N];
  /* Variable declaration/allocation. */
  


  t2=5;amo=0;
  int i;
for (i=0;i<10;i++)
{	
  A=u[i];
  init_array (n, A, &A[N]);
}

  /* Start timer. */
 // polybench_start_instruments;
	p0 =(unsigned long long *) new((unsigned long long *)0xffff00000000) unsigned long long[10];//Contro Port
	//printf("111111");
	p0[0] = 81;	
	p0[8] = 1;
	p0[3] = 9;//CurrentThreadID
	p0[4] = 2*N*N*N;//Memory Range
	p0[5] = 4;//MemorySize
	p0[7] = 0;//Terminat
  /* Initialize array(s). */
	
  /* Run kernel. */
for (i=0;i<10;i++)
{
    	p0[1] = (unsigned long long)u[i];//ReadBase
		p0[2] = (unsigned long long)u[i];//WriteBase
		amo++;		
  		p0[6]=0;p0[6]=1;while (p0[6]);
}
 // p0[6]=0;p0[6]=1;while(p0[6]);
  /* Stop and print timer. */
 // polybench_stop_instruments;
 // polybench_print_instruments;

  /* Prevent dead-code elimination. All live-out data must be printed
     by the function call in argument. */
 // polybench_prevent_dce(print_array(n, A));

  /* Be clean. */

  return 0;
}
