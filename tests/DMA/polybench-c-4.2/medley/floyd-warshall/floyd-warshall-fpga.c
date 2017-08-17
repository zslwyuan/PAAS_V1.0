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

/* Include polybench common header. */
#include "../../utilities/polybench.h"

/* Include benchmark-specific header. */
#include "floyd-warshall.h"
#include <new>
using namespace std;
unsigned long long* p0;

/* Array initialization. */
static
void init_array (int n,
		 DATA_TYPE POLYBENCH_2D(path,N,N,n,n))
{
  int i, j;

  for (i = 0; i < n; i++)
    for (j = 0; j < n; j++) {
      path[i][j] = (i+n)*(j+n)+7;
  //    if ((i+j)%13 == 0 || (i+j)%7==0 || (i+j)%11 == 0)
   //      path[i][j] = 999;
    }
}


/* DCE code. Must scan the entire live-out data.
   Can be used also to check the correctness of the output. */
static
void print_array(int n,
		 DATA_TYPE POLYBENCH_2D(path,N,N,n,n))

{
  int i, j;

  POLYBENCH_DUMP_START;
  POLYBENCH_DUMP_BEGIN("path");
  for (i = 0; i < n; i++)
    for (j = 0; j < n; j++) {
      if ((i * n + j) % 20 == 0) fprintf (POLYBENCH_DUMP_TARGET, "\n");
      fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, path[i][j]);
    }
  POLYBENCH_DUMP_END("path");
  POLYBENCH_DUMP_FINISH;
}


/* Main computational kernel. The whole function will be timed,
   including the call and return. */
//static
void kernel_floyd_warshall(int path[N][N])
			//   DATA_TYPE POLYBENCH_2D(path,N,N,n,n))
{
  int i, j, k;
  int n=N;
  kernel_floyd_warshall_label0:for (k = 0; k < _PB_N; k++)
    {
      kernel_floyd_warshall_label1:for(i = 0; i < _PB_N; i++)
	kernel_floyd_warshall_label2:for (j = 0; j < _PB_N; j++)
	  path[i][j] = (path[i][j] < path[i][k] + path[k][j]) ?
	    (path[i][j]) : (path[i][k] + path[k][j]);
    }

}


int main(int argc, char** argv)
{
  /* Retrieve problem size. */
  int n = N;

  /* Variable declaration/allocation. */
  POLYBENCH_2D_ARRAY_DECL(path, DATA_TYPE, N, N, n, n);
	p0 =(unsigned long long *) new((unsigned long long *)0xc0000000) unsigned long long[10];//Contro Port
	//printf("111111");
    p0[1] = (unsigned long long)path;//ReadBase
	p0[2] = (unsigned long long)path;//WriteBase
	p0[0] = 81;	
	p0[8] = 1;
	p0[3] = 9;//CurrentThreadID
	p0[4] = 64*64;//Memory Range
	p0[5] = 4;//MemorySize
	p0[7] = 0;//Terminat

  /* Initialize array(s). */
  init_array (n, POLYBENCH_ARRAY(path));

  /* Start timer. */
  polybench_start_instruments;
  int b[512*1024/4];
  int pp;p0[6]=0;
  for (pp=0;pp<128*1024/4;pp++)
	b[pp]=pp;
  /* Run kernel. */
  //kernel_floyd_warshall ( POLYBENCH_ARRAY(path));
  p0[6]=0;p0[6]=1;while(p0[6]);
  while(!p0[10]);
  /* Stop and print timer. */
  polybench_stop_instruments;
  polybench_print_instruments;

  /* Prevent dead-code elimination. All live-out data must be printed
     by the function call in argument. */
 // polybench_prevent_dce(print_array(n, POLYBENCH_ARRAY(path)));

  /* Be clean. */
  //POLYBENCH_FREE_ARRAY(path);

  return 0;
}
