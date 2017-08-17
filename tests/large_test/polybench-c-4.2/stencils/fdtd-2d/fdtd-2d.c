/**
 * This version is stamped on May 10, 2016
 *
 * Contact:
 *   Louis-Noel Pouchet <pouchet.ohio-state.edu>
 *   Tomofumi Yuki <tomofumi.yuki.fr>
 *
 * Web address: http://polybench.sourceforge.net
 */
/* fdtd-2d.c: this file is part of PolyBench/C */

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>

/* Include polybench common header. */
#include "../../utilities/polybench.h"

/* Include benchmark-specific header. */
#include "fdtd-2d.h"


/* Array initialization. */
static
void init_array (int tmax,
		 int nx,
		 int ny,
		 DATA_TYPE POLYBENCH_2D(ex,NX,NY,nx,ny),
		 DATA_TYPE POLYBENCH_2D(ey,NX,NY,nx,ny),
		 DATA_TYPE POLYBENCH_2D(hz,NX,NY,nx,ny),
		 DATA_TYPE POLYBENCH_1D(_fict_,TMAX,tmax))
{
  int i, j;

  for (i = 0; i < tmax; i++)
    _fict_[i] = (DATA_TYPE) i;
  for (i = 0; i < nx; i++)
    for (j = 0; j < ny; j++)
      {
	ex[i][j] = ((DATA_TYPE) i*(j+31)) ;
	ey[i][j] = ((DATA_TYPE) i*(j+32)) ;
	hz[i][j] = ((DATA_TYPE) i*(j+33)) ;
      }
}


/* DCE code. Must scan the entire live-out data.
   Can be used also to check the correctness of the output. */
static
void print_array(int nx,
		 int ny,
		 DATA_TYPE POLYBENCH_2D(ex,NX,NY,nx,ny),
		 DATA_TYPE POLYBENCH_2D(ey,NX,NY,nx,ny),
		 DATA_TYPE POLYBENCH_2D(hz,NX,NY,nx,ny))
{
  int i, j;

  POLYBENCH_DUMP_START;
  POLYBENCH_DUMP_BEGIN("ex");
  for (i = 0; i < nx; i++)
    for (j = 0; j < ny; j++) {
      if ((i * nx + j) % 20 == 0) fprintf(POLYBENCH_DUMP_TARGET, "\n");
      fprintf(POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, ex[i][j]);
    }
  POLYBENCH_DUMP_END("ex");
  POLYBENCH_DUMP_FINISH;

  POLYBENCH_DUMP_BEGIN("ey");
  for (i = 0; i < nx; i++)
    for (j = 0; j < ny; j++) {
      if ((i * nx + j) % 20 == 0) fprintf(POLYBENCH_DUMP_TARGET, "\n");
      fprintf(POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, ey[i][j]);
    }
  POLYBENCH_DUMP_END("ey");

  POLYBENCH_DUMP_BEGIN("hz");
  for (i = 0; i < nx; i++)
    for (j = 0; j < ny; j++) {
      if ((i * nx + j) % 20 == 0) fprintf(POLYBENCH_DUMP_TARGET, "\n");
      fprintf(POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, hz[i][j]);
    }
  POLYBENCH_DUMP_END("hz");
}


/* Main computational kernel. The whole function will be timed,
   including the call and return. */

void kernel_fdtd_2d(
		    int ex[3*NX+1][NY])
{
  int t, i, j;

#pragma scop
	int tmax=TMAX;
	int nx=NX;
	int ny=NY;
  for(t = 0; t < TMAX; t++)
    {
      kernel_fdtd_2d_label12:for (j = 0; j < NY; j++)
		ex[0+NX][j] = ex[3*NX][t];
      for (i = 1; i < NX; i++)
		kernel_fdtd_2d_label11:for (j = 0; j < NY; j++)
	  		ex[i+NX][j] = ex[i+NX][j] - (ex[i+2*NX][j]-ex[i-1+2*NX][j])/2;
      for (i = 0; i < NX; i++)
		kernel_fdtd_2d_label10:for (j = 1; j < NY; j++)
	  		ex[i][j] = ex[i][j] - (ex[i+2*NX][j]-ex[i+2*NX][j-1])/2;
      for (i = 0; i < NX - 1; i++)
		kernel_fdtd_2d_label9:for (j = 0; j < NY - 1; j++)
	  		ex[i+2*NX][j] = ex[i+2*NX][j] - 7*(ex[i][j+1] - ex[i][j] +
				       ex[i+1+NX][j] - ex[i+NX][j])/10;
    }

#pragma endscop
}


int main(int argc, char** argv)
{
  /* Retrieve problem size. */
  int tmax = TMAX;
  int nx = NX;
  int ny = NY;

  /* Variable declaration/allocation. */
 // POLYBENCH_2D_ARRAY_DECL(ex,DATA_TYPE,NX,NY,nx,ny);
 // POLYBENCH_2D_ARRAY_DECL(ey,DATA_TYPE,NX,NY,nx,ny);
 // POLYBENCH_2D_ARRAY_DECL(hz,DATA_TYPE,NX,NY,nx,ny);
 // POLYBENCH_1D_ARRAY_DECL(_fict_,DATA_TYPE,TMAX,tmax);
  int ex[3*NX+1][NY];
  /* Initialize array(s). */
  init_array (tmax, nx, ny,(int (*)[NY])ex[0],(int (*)[NY])(&ex[NX]),(int (*)[NY])(&ex[2*NX]),
	      (&ex[3*NX][0]));

  /* Start timer. */
  polybench_start_instruments;

  /* Run kernel. */
  kernel_fdtd_2d (ex);


  /* Stop and print timer. */
  polybench_stop_instruments;
  polybench_print_instruments;

  /* Prevent dead-code elimination. All live-out data must be printed
     by the function call in argument. */
  polybench_prevent_dce(print_array(nx, ny ,(int (*)[NY])ex[0],(int (*)[NY])(&ex[NX]),(int (*)[NY])(&ex[2*NX])));

  /* Be clean. */

  return 0;
}
