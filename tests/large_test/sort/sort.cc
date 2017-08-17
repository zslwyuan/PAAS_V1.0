#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cstdint>
#include <iostream>
#include <algorithm>

using namespace std;
unsigned long long p1[259];//Read Area
unsigned long long p2[259];//Write Area
unsigned long long* p0;
bool compare(unsigned long long a,unsigned long long b)
{
      return a>b;   

}
int main(int argc, char **argv) {
 
    FILE* fd=fopen("input","r");
	p0 =(unsigned long long *) new((unsigned long long *)0xc0000000) unsigned long long[10];//Contro Port
	
	int n=1000,amo=25,i;
	unsigned long long num;
	while (n--)
	{
		for (i=0;i<amo;i++)
		{
			fscanf(fd,"%llu",&num);
			p1[i]=num;
			p2[i]=num;
		}
		sort(p2,p2+amo,compare);
		for (i=0;i<amo;i++)
		{
			printf("%llu ",p2[i]);
		}
		printf("\n");
 	}
    return 0;
}

