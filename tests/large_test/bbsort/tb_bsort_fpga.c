#include "bsort100.h"
#include <cstdio>
#include <new>
#include <unistd.h>

using namespace std;
int number_array[20];//Read Area
unsigned long long* p0;

int main()
{
   int number_array[20] = {1,2,200,10,34,65,23,78,79,11,23,55,123,1001,91,11221,1,7,203020,12};
   int i;
   printf("------Original Array-------\n");
   for(i=0; i<20; i++)
   {
	 printf("%d \n", number_array[i]);
	}
   int m=20; int n=20; int a;

	p0 =(unsigned long long *) new((unsigned long long *)0xc0000000) unsigned long long[10];//Contro Port
	//printf("111111");
	p0[0] = getpid()*getpid();	
	p0[8] = 1;
	p0[1] = (unsigned long long)number_array;//ReadBase
	p0[2] = (unsigned long long)number_array;//WriteBase
	p0[3] = getpid();//CurrentThreadID
	p0[4] = 20;//Memory Range
	p0[5] = 4;//MemorySize
	p0[7] = 0;//Terminat
	//printf("22222");
	p0[6] = 0;//RunState
	p0[6]=1;
	while(p0[6]);
	p0[8] = 0; 

 //  a = bubblesort(number_array,m , n);
   printf("------Sorted Array-------\n");
   for(i=0; i<20; i++)
   {
    printf("%d \n", number_array[i]);
   }
  return 0;
}
