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
	for (i=0;i<199;i++)	
	{	printf("%d\n",i);
		p1[i]=(unsigned long long)(i*171133321)%123912;
	}
    
    return 0;
}
