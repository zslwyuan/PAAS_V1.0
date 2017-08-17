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

using namespace std;

void controlFPGA(int reg,int val)
{
	reg = reg*64 + 0x20000000;
	__asm
	{
		movq rax, val
		movq rbx, reg
		movq [rbx], rax
	}
}

void ctrl(unsigned long long reg,unsigned long long val)
{
	reg = reg*64 + 0x20000000;
	__asm
	{
		movq rax, val
		movq rbx, reg
		movq [rbx], rax
	}
}

unsigned long long get(unsigned long long reg)
{
	reg = reg*64 + 0x20000000;
	unsigned long long val;
	__asm
	{
		movq rbx, reg
		movq val, [rax]
	}
	return val;
}

int main()
{
	int i;
	printf("ALGORITHM great %u\n",(unsigned)getpid());
	while(get(8));
	ctrl(8,1);
	for (i=0;i<199;i++)	p1[i]=(unsigned long long)(i*171133321)%12391231;
	printf("1\n");
	
	ctrl(1, (unsigned long long)p1);//ReadBase
	ctrl(2, (unsigned long long)p2);//WriteBase
	printf("read area : %llu\n",get(1));
	printf("write area : %llu\n",get(2));
	ctrl(3,getpid());//CurrentThreadID
	ctrl(4,200);//Memory Range
	ctrl(5,8);//MemorySize	
	ctrl(7,0);//Terminat	
	ctrl(6,0);//RunState
	ctrl(6,0);//RunState
    if (get(6) == 0)
    {
	/*for (n=0;n<100;n++)
		for (m=0;m<100;m++)
		{
			p2[n+m]=(unsigned long long)(p2[n+m]+(p1[n]*p1[m+100]));
		}*/
            ctrl(6,1);
        while (get(6));
	}
	int n;
	printf("2\n");
	n=1;
	for (n=0;n<198;n++)printf("%llu ",p2[n]);printf("\n");
	printf("3\n");
	ctrl(7,1);
	ctrl(8,0);
    return 0;
}
