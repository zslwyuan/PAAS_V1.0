

int decode_motion_vector (int buff[5], int m, int * y, int n)
 {
	/* MPEG-1 (ISO/IEC 11172-1) support */




  int lim, vec;
  int r_size;

  r_size = buff[1] % 32;
  lim = 16 << r_size;
  vec = buff[4] ? (buff[0] >> 1) : (buff[0]);

  if (buff[2] > 0)
    {
      vec += ((buff[2] - 1) << r_size) + buff[3] + 1;
      if (vec >= lim)
	vec -= lim + lim;
    }
  else if (buff[2] < 0)
    {
      vec -= ((-buff[2] - 1) << r_size) + buff[3] + 1;
      if (vec < -lim)
	vec += lim + lim;
    }
  *y = buff[4] ? (vec << 1) : vec;
  //*y = full_pel_vector ? (vec << 1) : vec;

  return m+n;
}
