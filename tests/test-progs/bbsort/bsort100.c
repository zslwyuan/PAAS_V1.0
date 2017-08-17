/* bsort100.c */


/* BUBBLESORT BENCHMARK PROGRAM:
 * This program tests the basic loop constructs, integer comparisons,
 * and simple array handling of compilers by sorting an array of 20 randomly generated  integers.
 */

#include "bsort100.h"

int bubblesort(int Array[20],int m , int n)
{
   int Sorted = 0;
   int Temp, LastIndex, Index, i;

   bubblesort_label2:for (i = 0; i < 20-1; i++)
   {
      Sorted = 1;
      bubblesort_label1:for (Index = 0; Index < 20-1; Index ++) {
         if (Index > 20-i)
            break;
         if (Array[Index] > Array[Index + 1])
         {
            Temp = Array[Index];
            Array[Index] = Array[Index+1];
            Array[Index+1] = Temp;
            Sorted = 0;
         }
      }

      if (Sorted==1)
         break;
   }
   return Sorted+m+n;
}
