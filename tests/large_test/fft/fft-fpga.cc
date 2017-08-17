
#include <stdio.h>  
#include <stdlib.h>  
#include <math.h>  
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <iostream>
#include <new>
#include <unistd.h>
const int N = 1024;  
const double PI = 3.141593;  

using namespace std;

// These vars will contain the hash
unsigned long long p1[533];//Read Area
unsigned long long p2[533];//Write Area
uint8_t *p;
unsigned long long* p0;

void FFT_test ()  
{  

    unsigned short xreal [N] = {}, ximag [N] = {};  
    int n, i;  
	unsigned long long a=0,b=0,c=0,d=0;
    FILE *input, *output;  
  	memset(p1,0,sizeof(p1));
	memset(p2,0,sizeof(p2));	
	for (i=0;i<N/2;i++)
	{
		a=(5)&0xffff;
		b=(0)&0xffff;
		c=(5)&0xffff;
		d=(0)&0xffff;
		p1[i]=(b<<0)+(a<<16)+(d<<32)+(c<<48);
	}
	p0[6]=1;
	while(p0[6]);
	for (i=0;i<N/2;i++)
	{
		a=(p2[i]>>16)&0xffff;
		b=(p2[i])&0xffff;
		c=(p2[i]>>48)&0xffff;
		d=(p2[i]>>32)&0xffff;
		printf("out %d - %4llx %4llx\n",i*2,a,b);
		printf("out %d - %4llx %4llx\n",i*2+1,c,d);
	}

	printf("======================next=====================\n");
	p0[6]=0;
	for (i=0;i<N/2;i++)
	{
		a=(4*i)&0xffff;
		b=(4*i+1)&0xffff;
		c=(4*i+2)&0xffff;
		d=(4*i+3)&0xffff;
		p1[i]=(b<<0)+(a<<16)+(d<<32)+(c<<48);
	}
	p0[6]=1;
	while(p0[6]);
	for (i=0;i<N/2;i++)
	{
		a=(p2[i]>>16)&0xffff;
		b=(p2[i])&0xffff;
		c=(p2[i]>>48)&0xffff;
		d=(p2[i]>>32)&0xffff;
		printf("out %d - %4llx %4llx\n",i*2,a,b);
		printf("out %d - %4llx %4llx\n",i*2+1,c,d);
	}

	printf("======================next=====================\n");
	p0[6]=0;
	for (i=0;i<N/2;i++)
	{
		a=(127)&0xffff;
		b=(127)&0xffff;
		c=(0)&0xffff;
		d=(0)&0xffff;
		p1[i]=(b<<0)+(a<<16)+(d<<32)+(c<<48);
	}
	p0[6]=1;
	while(p0[6]);
	for (i=0;i<N/2;i++)
	{
		a=(p2[i]>>16)&0xffff;
		b=(p2[i])&0xffff;
		c=(p2[i]>>48)&0xffff;
		d=(p2[i]>>32)&0xffff;
		printf("out %d - %4llx %4llx\n",i*2,a,b);
		printf("out %d - %4llx %4llx\n",i*2+1,c,d);
	}

	printf("======================next=====================\n");
	p0[6]=0;
	for (i=0;i<N/2;i++)
	{
		a=(127)&0xffff;
		b=(127)&0xffff;
		c=(0)&0xffff;
		d=(0)&0xffff;
		p1[i]=(b<<0)+(a<<16)+(d<<32)+(c<<48);
	}
	p0[6]=1;
	while(p0[6]);
	for (i=0;i<N/2;i++)
	{
		a=(p2[i]>>16)&0xffff;
		b=(p2[i])&0xffff;
		c=(p2[i]>>48)&0xffff;
		d=(p2[i]>>32)&0xffff;
		printf("out %d - %4llx %4llx\n",i*2,a,b);
		printf("out %d - %4llx %4llx\n",i*2+1,c,d);
	}

	printf("======================next=====================\n");
	p0[6]=0;
	for (i=0;i<N/2;i++)
	{
		a=(i)&0xffff;
		b=(i)&0xffff;
		c=(i)&0xffff;
		d=(i)&0xffff;
		p1[i]=(b<<0)+(a<<16)+(d<<32)+(c<<48);
	}
	p0[6]=1;
	while(p0[6]);
	for (i=0;i<N/2;i++)
	{
		a=(p2[i]>>16)&0xffff;
		b=(p2[i])&0xffff;
		c=(p2[i]>>48)&0xffff;
		d=(p2[i]>>32)&0xffff;
		printf("out %d - %4llx %4llx\n",i*2,a,b);
		printf("out %d - %4llx %4llx\n",i*2+1,c,d);
	}

}  
  
int main ()  
{  
	p0 =(unsigned long long *) new((unsigned long long *)0xc0000000) unsigned long long[10];//Contro Port
	//printf("111111");
	p0[0] = getpid()*getpid();	
	p0[8] = 1;
	p0[1] = (unsigned long long)p1;//ReadBase
	p0[2] = (unsigned long long)p2;//WriteBase
	p0[3] = getpid();//CurrentThreadID
	p0[4] = 512;//Memory Range
	p0[5] = 8;//MemorySize
	p0[7] = 0;//Terminat
	//printf("22222");
	p0[6] = 0;//RunState
	FFT_test ();
	p0[8] = 0; 
    return 0;  
} 
