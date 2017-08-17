
#include <stdio.h>  
#include <stdlib.h>  
#include <math.h>  
  
const int N = 1024;  
const double PI = 3.141593;  
  
inline void swap (double &a, double &b)  
{  
    double t;  
    t = a;  
    a = b;  
    b = t;  
}  
  
void bitrp (double xreal [], double ximag [], int n)  
{  
    // 位反转置换 Bit-reversal Permutation  
    int i, j, a, b, p;  
  
    for (i = 1, p = 0; i < n; i *= 2)  
        {  
        p ++;  
        }  
    for (i = 0; i < n; i ++)  
        {  
        a = i;  
        b = 0;  
        for (j = 0; j < p; j ++)  
            {  
            b = (b << 1) + (a & 1);    // b = b * 2 + a % 2;  
            a >>= 1;        // a = a / 2;  
            }  
        if ( b > i)  
            {  
            swap (xreal [i], xreal [b]);  
            swap (ximag [i], ximag [b]);  
            }  
        }  
}  
  
void FFT(double xreal [], double ximag [], int n)  
{  
    // 快速傅立叶变换，将复数 x 变换后仍保存在 x 中，xreal, ximag 分别是 x 的实部和虚部  
    double wreal [N / 2], wimag [N / 2];
	 double treal, timag, ureal, uimag, arg;  
    int m, k, j, t, index1, index2;  
      
    bitrp (xreal, ximag, n);  
  
    // 计算 1 的前 n / 2 个 n 次方根的共轭复数 W'j = wreal [j] + i * wimag [j] , j = 0, 1, ... , n / 2 - 1  
    arg = - 2 * PI / n;  
    treal = cos (arg);  
    timag = sin (arg);  
    wreal [0] = 1.0;  
    wimag [0] = 0.0;  
    for (j = 1; j < n / 2; j ++)  
        {  
        wreal [j] = wreal [j - 1] * treal - wimag [j - 1] * timag;  
        wimag [j] = wreal [j - 1] * timag + wimag [j - 1] * treal;  
        }  
  
    for (m = 2; m <= n; m *= 2)  
        {  
        for (k = 0; k < n; k += m)  
            {  
            for (j = 0; j < m / 2; j ++)  
                {  
                index1 = k + j;  
                index2 = index1 + m / 2;  
                t = n * j / m;    // 旋转因子 w 的实部在 wreal [] 中的下标为 t  
                treal = wreal [t] * xreal [index2] - wimag [t] * ximag [index2];  
                timag = wreal [t] * ximag [index2] + wimag [t] * xreal [index2];  
                ureal = xreal [index1];  
                uimag = ximag [index1];  
                xreal [index1] = ureal + treal;  
                ximag [index1] = uimag + timag;  
                xreal [index2] = ureal - treal;  
                ximag [index2] = uimag - timag;  
                }  
            }  
        }  
}  
  

void FFT_test ()  
{  

    double xreal [N] = {}, ximag [N] = {};  
    int n, i;  
    FILE *input, *output;  
  	
	for (i=0;i<N;i++)
	{
		xreal[i]=5;
		ximag[i]=0;
	}     
    FFT (xreal, ximag, N);  
	for (i=0;i<N;i++)
	{
		printf("out %d - %lf %lf\n",i,xreal[i],ximag[i]);
	}

	printf("======================next=====================\n");
	for (i=0;i<N;i++)
	{
		xreal[i]=(2*i)&0xffff;
		ximag[i]=(2*i+1)&0xffff;
	}     
	
    FFT (xreal, ximag, N);  
	for (i=0;i<N;i++)
	{
		printf("out %d - %lf %lf\n",i,xreal[i],ximag[i]);
	}

	printf("======================next=====================\n");
	for (i=0;i<N;i++)
	{
		if (i%2==0) {xreal[i]=127;ximag[i]=127; }else {xreal[i]=0;ximag[i]=0;}
		
	}     
	
    FFT (xreal, ximag, N);  
	for (i=0;i<N;i++)
	{
		printf("out %d - %lf %lf\n",i,xreal[i],ximag[i]);
	}

	printf("======================next=====================\n");
	for (i=0;i<N;i++)
	{
		if (i%2==0) {xreal[i]=127;ximag[i]=127; }else {xreal[i]=0;ximag[i]=0;}
	}     
	
    FFT (xreal, ximag, N);  
	for (i=0;i<N;i++)
	{
		printf("out %d - %lf %lf\n",i,xreal[i],ximag[i]);
	}

	printf("======================next=====================\n");
	for (i=0;i<N;i++)
	{
		xreal[i]=(i/2)&0xffff;
		ximag[i]=(i/2)&0xffff;
	}     
	
    FFT (xreal, ximag, N);  
	for (i=0;i<N;i++)
	{
		printf("out %d - %lf %lf\n",i,xreal[i],ximag[i]);
	}
}  
  
int main ()  
{  
    FFT_test ();  
  
    return 0;  
} 
