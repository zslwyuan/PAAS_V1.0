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

#include <cstdio>
#include <unistd.h>
#include <cstring>

/* Include polybench common header. */
#include "../../utilities/polybench.h"

/* Include benchmark-specific header. */
#include "nussinov.h"

/* RNA bases represented as chars, range is [0,3] */
typedef char base;
#include <new>
using namespace std;
unsigned long long *p0;
#define match(b1, b2) (((b1)+(b2)) == 3 ? 1 : 0)
#define max_score(s1, s2) ((s1 >= s2) ? s1 : s2)
int amo,t2;
int u[61][N+1][N+1];
bool done[61];
/* Array initialization. */
void try_fpga()
{
	if (!p0[6])
	{
		if (amo==54) return;
		while (done[t2]) {t2++;t2=t2%54;}
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
void init_array (
		 int table[N+1][N+1])
{
  int i, j;
  int *seq=&table[N][0];
  //base is AGCT/0..3
  for (i=0; i <N+1; i++) {
     seq[i] = ((i+1)%4);
  }

  for (i=0; i <N; i++)
     for (j=0; j <N+1; j++)
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
  for (i = 0; i < N; i++) {
    for (j = i; j < N; j++) {
      if (t % 20 == 0) printf ( "\n");
      printf ("%d ",table[i][j]);
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
  kernel_nussinov_label11:for (i = N-1; i >= 0; i--) {try_fpga();if (amo==54) return;
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



int n = N;
int main()
{
  /* Retrieve problem size. */
  printf("here");
  int (*table)[N+1];
  /* Variable declaration/allocation. */
	p0 =(unsigned long long *) new((unsigned long long *)0xffff00000000) unsigned long long[10];//Contro Port
	//printf("111111");
	p0[0] = 0;
 p0[6]=0;
	p0[0] = 81;	
	p0[8] = 1;
	p0[3] = 9;//CurrentThreadID
	p0[4] = (N+1)*(N+1);//Memory Range
	p0[5] = 4;//MemorySize
	p0[7] = 0;//Terminat
  /* Initialize array(s). */
    t2=30;amo=0;
    int i;
for (i=0;i<54;i++)
{
  printf("%d\n",i);
	
  table=u[i];
  init_array (table);
}
  /* Start timer. */
  polybench_start_instruments;
	
  /* Run kernel. */
for (i=0;i<54;i++)
{/*
  if (done[i]) continue;done[i]=1;
  printf("CPU processing %d done[%d]=%d\n",i,i,done[i]);
  amo++;table=u[i];
  kernel_nussinov (table);*/
    	p0[1] = (unsigned long long)u[i];//ReadBase
		p0[2] = (unsigned long long)u[i];//WriteBase
//		amo++;		
  		p0[6]=0;p0[6]=1;while (p0[6]);
}
 //p0[6]=0;p0[6]=1;while(p0[6]);
  /* Stop and print timer. */
  polybench_stop_instruments;
  polybench_print_instruments;

  /* Prevent dead-code elimination. All live-out data must be printed
     by the function call in argument. */
	
  print_array(n, u[32]);

  /* Be clean. */
 // POLYBENCH_FREE_ARRAY(seq);
 // POLYBENCH_FREE_ARRAY(table);

  return 0;
}






