#include <new>
#include <iostream>
#include <string>
#include <string.h>
#include <cstdio>
#include <pthread.h>
#include <unistd.h>
#include <sys/syscall.h>
#include <sys/types.h>

unsigned long long p1[401];//Read Area
unsigned long long p2[40001];//Write Area
using namespace std;
int main()
{
	int i;
	for (i=0;i<199;i++)	p1[i]=(unsigned long long)(i*171133321)%123912;
    unsigned long long* p0 = new((unsigned long long *)0xc0000000) unsigned long long[10];//Contro Port
	int u=0;
	int n=0;
	int id=getpid()*getpid();	
	while (1)
	{
	//	printf("tring1 %d\n",getpid());
		p0[0] = id*id;
	//	int flag = 1;		
		//for (u=0;u<20;u++)
		if (p0[0] == id*id) {
		p0[8] = 1;		break;}
	}
	//unsigned long long* p0 = new unsigned long long[10];//Contro Port

	printf("1111\n");

	for (n=0;n<4;n+=1)
	{
		{
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
		}
		

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
	printf("--A-- %d\n",getpid());//for (n=0;n<198;n+=10)printf("%llu ",p2[n*200]);printf("\n");
	printf("hhhhhhhhhhhhhhhhhh\n");
//	p0[7] = 1;

	p0[8] = 0;
    return 0;
}
