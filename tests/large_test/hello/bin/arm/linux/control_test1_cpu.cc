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
unsigned long long p3[4000001];;
using namespace std;
int main()
{
	int i;
	for (i=0;i<199;i++)	p1[i]=(unsigned long long)(i*171133321)%123912;
    unsigned long long* p0 = new((unsigned long long *)(0xc0000000+30*8)) unsigned long long[10];//Contro Port
	int u=0;
	int n=0;
	//for (u=0;u<getpid()*getpid()/3;u+=100)p3[u]=u;
	while (1)
	{
		while(p0[8]) {p3[n]=n+p3[n];n+=100;if (n>=4000000) n =0;};
		printf("tring1 %d\n",getpid());
		p0[0] = getpid()*getpid();	
		int flag = 1;		
		for (u=0;u<20;u++)
		if (p0[0] != getpid()*getpid()) {flag=0;break;}
		if (flag){p0[8] = 1;printf("get %d\n",getpid());break;}		
	}
	//unsigned long long* p0 = new unsigned long long[10];//Contro Port

	printf("1111\n");

	for (n=0;n<4000000;n+=10000)
	{
		if (n%2000000==0)
		{
			if (p0[0] != getpid()*getpid()) printf("error %d\n",getpid());
			for (i=0;i<199;i++)	p1[i]=(unsigned long long)((i*171133321)+n)%123912;
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
				p0[6] = 1;
				while (p0[6]);
			}if (p0[0] != getpid()*getpid()) printf("error %d\n",getpid());
			printf("--A-- %d\n",getpid());
			for (i=0;i<198;i++)printf("%d: %llu ",i,p2[i]);printf("\n");
			printf("%lld ",p3[n]);
		}p3[n]=n+p3[n];

	}
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
        p0[6] = 1;
        while (p0[6]);
	}
	n=1;
	printf("--A-- %d\n",getpid());for (n=0;n<198;n++)printf("%llu ",p2[n]);printf("\n");
	printf("hhhhhhhhhhhhhhhhhh\n");
//	p0[7] = 1;

	p0[8] = 0;
	while(1)
	{
		while(p0[8]) {p3[n]=n+n;n+=10;if (n>=4000000) n =0;};
		while (u<1000) p3[u*10]=u,u=u+1;
		if (!p0[8]) break;
	}
    return 0;
}
