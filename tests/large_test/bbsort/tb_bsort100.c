#include "bsort100.h"
#include <cstdio>
#include <new>
#include <unistd.h>

using namespace std;
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
   a = bubblesort(number_array,m , n);
   printf("------Sorted Array-------\n");
   for(i=0; i<20; i++)
   {
    printf("%d \n", number_array[i]);
   }
  return 0;
}
