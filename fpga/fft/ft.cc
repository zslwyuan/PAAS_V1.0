
#include <stdio.h>  
#include <stdlib.h>  
#include <math.h>  
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <iostream>
#include <new>
#include <unistd.h>

FILE *fd;
using namespace std;

void generate(int x)
{
	fprintf(fd,"        else if (depth==%d)\n            begin\n",x);
	int i;
	for (i=x;i>=1;i--)
		fprintf(fd,"                mem[%d] <= mem[%d];\n",i,i-1);
	fprintf(fd,"            end\n");
}

int main ()  
{  
	fd=fopen("hp","w");
	int n,i;
	/*generate(1);
	generate(2);
	generate(3);
	generate(4);
	generate(5);
	generate(6);
	generate(7);
	generate(8);
	generate(9);
	generate(10);
	generate(15);
	generate(31);
	generate(63);
	generate(127);
	generate(255);*/
	generate(513);
    return 0;  
} 
