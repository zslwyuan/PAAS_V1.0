/**
 * This version is stamped on May 10, 2016
 *
 * Contact:
 *   Louis-Noel Pouchet <pouchet.ohio-state.edu>
 *   Tomofumi Yuki <tomofumi.yuki.fr>
 *
 * Web address: http://polybench.sourceforge.net
 */
/* nussinov.c: this file is part of PolyBench/C */

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>

/* Include polybench common header. */
#include "../../utilities/polybench.h"

/* Include benchmark-specific header. */
#include "nussinov.h"

/* RNA bases represented as chars, range is [0,3] */
typedef char base;

#define match(b1, b2) (((b1)+(b2)) == 3 ? 1 : 0)
#define max_score(s1, s2) ((s1 >= s2) ? s1 : s2)

/* Array initialization. */
static
void init_array (int n,
                 int POLYBENCH_1D(seq,N,n),
		 int table[N+1][N+1])
{
  int i, j;

  //base is AGCT/0..3
  for (i=0; i <n; i++) {
     seq[i] = ((i+1)%4);
  }

  for (i=0; i <n; i++)
     for (j=0; j <n; j++)
       table[i][j] = 0;
}


/* DCE code. Must scan the entire live-out data.
   Can be used also to check the correctness of the output. */
static
void print_array(int n,
		int table[N+1][N+1])

{
  int i, j;
  int t = 0;

  POLYBENCH_DUMP_START;
  POLYBENCH_DUMP_BEGIN("table");
  for (i = 0; i < n; i++) {
    for (j = i; j < n; j++) {
      if (t % 20 == 0) fprintf (POLYBENCH_DUMP_TARGET, "\n");
      fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, table[i][j]);
      t++;
    }
  }
  POLYBENCH_DUMP_END("table");
  POLYBENCH_DUMP_FINISH;
}


/* Main computational kernel. The whole function will be timed,
   including the call and return. */
/*
  Original version by Dave Wonnacott at Haverford College <davew@cs.haverford.edu>,
  with help from Allison Lake, Ting Zhou, and Tian Jin,
  based on algorithm by Nussinov, described in Allison Lake's senior thesis.
*/
void kernel_nussinov(int table[N+1][N+1])
{
  int i, j, k;int n=N;
  int *seq=&table[N][0];
#pragma scop
  kernel_nussinov_label11:for (i = N-1; i >= 0; i--) {
	  kernel_nussinov_label13:for (j=i+1; j<N; j++) {

   if (j-1>=0)
      table[i][j] = max_score(table[i][j], table[i][j-1]);
   if (i+1<N)
      table[i][j] = max_score(table[i][j], table[i+1][j]);

   if (j-1>=0 && i+1<N) {
     /* don't allow adjacent elements to bond */
        table[i][j] =(i<j-1)?( max_score(table[i][j], table[i+1][j-1]+match(seq[i], seq[j]))):(max_score(table[i][j], table[i+1][j-1]));
   }

   kernel_nussinov_label12:for (k=i+1; k<j; k++) {
      table[i][j] = max_score(table[i][j], table[i][k] + table[k+1][j]);
   }
  }
 }
#pragma endscop

}


int main(int argc, char** argv)
{
  /* Retrieve problem size. */
  int n = N;

  /* Variable declaration/allocation. */
  int table[N+1][N+1];

  /* Initialize array(s). */
  init_array (n, &table[N][0], table);

  /* Start timer. */
  polybench_start_instruments;

  /* Run kernel. */
  kernel_nussinov (table);

  /* Stop and print timer. */
  polybench_stop_instruments;
  polybench_print_instruments;

  /* Prevent dead-code elimination. All live-out data must be printed
     by the function call in argument. */
  polybench_prevent_dce(print_array(n, table));

  /* Be clean. */
 // POLYBENCH_FREE_ARRAY(seq);
 // POLYBENCH_FREE_ARRAY(table);

  return 0;
}
