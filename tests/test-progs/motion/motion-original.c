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
/* motion.c, motion vector decoding                                         */

/* Copyright (C) 1996, MPEG Software Simulation Group. All Rights Reserved. */

/*
 * Disclaimer of Warranty
 *
 * These software programs are available to the user without any license fee or
 * royalty on an "as is" basis.  The MPEG Software Simulation Group disclaims
 * any and all warranties, whether express, implied, or statuary, including any
 * implied warranties or merchantability or of fitness for a particular
 * purpose.  In no event shall the copyright-holder be liable for any
 * incidental, punitive, or consequential damages of any kind whatsoever
 * arising from the use of these programs.
 *
 * This disclaimer of warranty extends to the user of these programs and user's
 * customers, employees, agents, transferees, successors, and assigns.
 *
 * The MPEG Software Simulation Group does not represent or warrant that the
 * programs furnished hereunder are free of infringement of any third-party
 * patents.
 *
 * Commercial implementations of MPEG-1 and MPEG-2 video, including shareware,
 * are subject to royalty fees to patent holders.  Many of these patents are
 * general enough such that they are unavoidable regardless of implementation
 * design.
 *
 */




/* private prototypes */


/* ISO/IEC 13818-2 sections 6.2.5.2, 6.3.17.2, and 7.6.3: Motion vectors */
void
motion_vectors (int PMV[2][2][2], int dmvector[2], int motion_vertical_field_select[2][2],
		int s,int motion_vector_count,int mv_format,int h_r_size,int v_r_size,int dmv,int mvscale)
{
  if (motion_vector_count == 1)
    {
      if (mv_format == MV_FIELD && !dmv)
	{
	  motion_vertical_field_select[1][s] =
	    motion_vertical_field_select[0][s] = Get_Bits (1);
	}

      motion_vector (PMV[0][s], dmvector, h_r_size, v_r_size, dmv, mvscale,
		     0);

      /* update other motion vector predictors */
      PMV[1][s][0] = PMV[0][s][0];
      PMV[1][s][1] = PMV[0][s][1];
    }
  else
    {
      motion_vertical_field_select[0][s] = Get_Bits (1);

      motion_vector (PMV[0][s], dmvector, h_r_size, v_r_size, dmv, mvscale,
		     0);

      motion_vertical_field_select[1][s] = Get_Bits (1);

      motion_vector (PMV[1][s], dmvector, h_r_size, v_r_size, dmv, mvscale,
		     0);
    }
}

/* get and decode motion vector and differential motion vector 
   for one prediction */
void
motion_vector (
     int *PMV,
     int *dmvector,
     int h_r_size,
     int v_r_size,
     int dmv,			/* MPEG-2 only: get differential motion vectors */
     int mvscale,		/* MPEG-2 only: field vector in frame pic */
     int full_pel_vector)	/* MPEG-1 only */
{
  int motion_code;
  int motion_residual;

  /* horizontal component */
  /* ISO/IEC 13818-2 Table B-10 */
  motion_code = Get_motion_code ();

  motion_residual = (h_r_size != 0
		     && motion_code != 0) ? Get_Bits (h_r_size) : 0;

  int buff[5]= {PMV[0],h_r_size, motion_code, motion_residual,
			full_pel_vector};
  int a,m,n;
  m = 20; n = 4;
  a = decode_motion_vector (buff, m, &PMV[0],n);
  
  //PMV[0]=buff[0];
  if (dmv)
    dmvector[0] = Get_dmvector ();


  /* vertical component */
  motion_code = Get_motion_code ();
  motion_residual = (v_r_size != 0
		     && motion_code != 0) ? Get_Bits (v_r_size) : 0;

  if (mvscale)
    PMV[1] >>= 1;		/* DIV 2 */

  int buff1[5]= {PMV[1],h_r_size, motion_code, motion_residual,
			full_pel_vector};
  m = 20; n = 4;
  a = decode_motion_vector (buff1, m, &PMV[1],n);
  //PMV[1]=buff1[0];


  if (mvscale)
    PMV[1] <<= 1;

  if (dmv)
    dmvector[1] = Get_dmvector ();

}

/* calculate motion vector component */
/* ISO/IEC 13818-2 section 7.6.3.1: Decoding the motion vectors */
/* Note: the arithmetic here is more elegant than that which is shown 
   in 7.6.3.1.  The end results (PMV[][][]) should, however, be the same.  */

//static void


