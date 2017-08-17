#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cstdint>
#include <iostream>
#include <stack>
#include <unistd.h>

using namespace std;

stack<unsigned long long> stk1;

unsigned long long p1[259];//Read Area
unsigned long long p2[259];//Write Area
unsigned long long* p0;

int main(int argc, char **argv) {
 
    FILE* fd=fopen("input","r");
	p0 =(unsigned long long *) new((unsigned long long *)0xc0000000) unsigned long long[10];//Contro Port
	//printf("111111");
	p0[0] = getpid()*getpid();	
	p0[8] = 1;
	p0[1] = (unsigned long long)p1;//ReadBase
	p0[2] = (unsigned long long)p2;//WriteBase
	p0[3] = getpid();//CurrentThreadID
	p0[4] = 25;//Memory Range
	p0[5] = 8;//MemorySize
	p0[7] = 0;//Terminat
	//printf("22222");

	int n=1000,amo=25,i;
	unsigned long long num;
	while (n--)
	{
		p0[6]=0;
		for (i=0;i<amo;i++)
		{
			fscanf(fd,"%llu",&num);
			p1[i]=num;
		}
		p0[6] = 1;
		while (p0[6]);
		for (i=0;i<amo;i++)
		{
			printf("%llu ",p2[i]);
		}
		printf("\n");
 	}
	p0[8] = 0;
    return 0;
}

