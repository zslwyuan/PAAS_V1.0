#include <new>
#include <iostream>
#include <string>
#include <cstdio>
#include <pthread.h>
#include <unistd.h>
#include <sys/syscall.h>
#include <sys/types.h>

unsigned long long p1[401];//Read Area
unsigned long long p2[401];//Write Area
unsigned long long p3[40001];
using namespace std;
int main()
{
	printf("ALGORITHM %u\n",(unsigned)getpid());
    unsigned long long* p0 = new((unsigned long long *)0xc0000000) unsigned long long[10];//Contro Port
	//unsigned long long* p0 = new unsigned long long[10];//Contro Port

	p0[8] = 1;
	p0[1] = (unsigned long long)p1;//ReadBase
	p0[2] = (unsigned long long)p2;//WriteBase
	printf("read area : %llu\n",p0[1]);
	printf("write area : %llu\n",p0[2]);
	p0[3] = getpid();//CurrentThreadID
	p0[4] = 200;//Memory Range
	p0[5] = 8;//MemorySize	
	p0[7] = 0;//Terminat	
	p0[6] = 0;//RunState
	p0[6] = 0;//RunState
    if (p0[6] == 0)
    {
        p1[0] = 1;
        p1[1] = 3;
        p1[2] = 7;
        p1[3] = 17;
            p0[6] = 1;
        while (p0[6]);
        printf("ans -- %llu\n",p2[0]);
	}
	int i;
	int n;
	printf("area n : %llu\n",(unsigned long long)&n);
	int m;
	for (i=0;i<199;i++)	p1[i]=(unsigned long long)(i*171133321)%12391231;
	printf("1\n");
	for (n=0;n<100;n++)
		for (m=0;m<100;m++)
		{
			p2[n+m]=(unsigned long long)(p2[n+m]+(p1[n]*p1[m+100]));
		}
	printf("2\n");
	n=1;
	for (n=0;n<199;n++)printf("%llu ",p2[n]);printf("\n");
	printf("3\n");
	p0[7] = 1;
	for (n=0;n<40000;n++)p3[n]=n;
	for (n=0;n<40000;n++)p3[n]=p3[n]+n;
    return 0;
}
