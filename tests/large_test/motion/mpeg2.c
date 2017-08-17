/*
+--------------------------------------------------------------------------+
| CHStone : a suite of benchmark programs for C-based High-Level Synthesis |
| ======================================================================== |
|                                                                          |
| * Collected and Modified : Y. Hara, H. Tomiyama, S. Honda,               |
|                            H. Takada and K. Ishii                        |
|                            Nagoya University, Japan                      |
|                                                                          |
| * Remark :                                                               |
|    1. This source code is modified to unify the formats of the benchmark |
|       programs in CHStone.                                               |
|    2. Test vectors are added for CHStone.                                |
|    3. If "main_result" is 0 at the end of the program, the program is    |
|       correctly executed.                                                |
|    4. Please follow the copyright of each benchmark program.             |
+--------------------------------------------------------------------------+
*/
/*
 * Copyright (C) 2008
 * Y. Hara, H. Tomiyama, S. Honda, H. Takada and K. Ishii
 * Nagoya University, Japan
 * All rights reserved.
 *
 * Disclaimer of Warranty
 *
 * These software programs are available to the user without any license fee or
 * royalty on an "as is" basis. The authors disclaims any and all warranties, 
 * whether express, implied, or statuary, including any implied warranties or 
 * merchantability or of fitness for a particular purpose. In no event shall the
 * copyright-holder be liable for any incidental, punitive, or consequential damages
 * of any kind whatsoever arising from the use of these programs. This disclaimer
 * of warranty extends to the user of these programs and user's customers, employees,
 * agents, transferees, successors, and assigns.
 *
 */
#include <stdio.h>

//#include "init.h"
#include "config.h"
//#include "global.h"

#include "getbits.c"
#include "decode.c"
#include "getvlc.c"

#include "motion.c"
const int inPMV[2][2][2] = { {{45, 207}, {70, 41}}, {{4, 180}, {120, 216}} };
const int inmvfs[2][2] = { {232, 200}, {32, 240} };
const int outPMV[2][2][2] =
  { {{1566, 206}, {70, 41}}, {{1566, 206}, {120, 216}} };
const int outmvfs[2][2] = { {0, 200}, {0, 240} };

int evalue;

void
Initialize_Buffer ()
{
  ld_Incnt = 0;
  ld_Rdptr = ld_Rdbfr + 2048;
  ld_Rdmax = ld_Rdptr;
  ld_Bfr = 68157440;
  Flush_Buffer (0);		/* fills valid data into bfr */
}

int
main ()
{
	p0 =(unsigned long long *) new((unsigned long long *)0xc0000000) unsigned long long[10];//Contro Port
	//printf("111111");
	p0[0] = 81;	
	p0[8] = 1;
	p0[3] = 9;//CurrentThreadID
	p0[4] = 5;//Memory Range
	p0[5] = 4;//MemorySize
	p0[7] = 0;//Terminat
  int i, j, k;
  int main_result;
  int PMV[2][2][2];
  int dmvector[2];
  int motion_vertical_field_select[2][2];
  int s, motion_vector_count, mv_format, h_r_size, v_r_size, dmv, mvscale;

      main_result = 0;
      evalue = 0;
      System_Stream_Flag = 0;
      s = 0;
      motion_vector_count = 1;
      mv_format = 0;
      h_r_size = 200;
      v_r_size = 200;
      dmv = 0;
      mvscale = 1;
      for (i = 0; i < 2; i++)
	{
	  dmvector[i] = 0;
	  for (j = 0; j < 2; j++)
	    {
	      motion_vertical_field_select[i][j] = inmvfs[i][j];
	      for (k = 0; k < 2; k++)
		PMV[i][j][k] = inPMV[i][j][k];
	    }
	}

      Initialize_Buffer ();
      motion_vectors (PMV, dmvector, motion_vertical_field_select, s,
		      motion_vector_count, mv_format, h_r_size, v_r_size, dmv,
		      mvscale);

      for (i = 0; i < 2; i++)
	for (j = 0; j < 2; j++)
	  {
	    main_result +=
	      (motion_vertical_field_select[i][j] != outmvfs[i][j]);
	    for (k = 0; k < 2; k++)
	      main_result += (PMV[i][j][k] != outPMV[i][j][k]);
	  }

  
    printf ("%d\n", main_result);
  return main_result;

}
