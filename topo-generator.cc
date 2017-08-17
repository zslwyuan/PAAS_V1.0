#include <iostream>
#include <fstream>
#include <cstdlib>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<fcntl.h>
#include<limits.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<unistd.h>
#include <sys/shm.h>
#include <sys/time.h>
#include <sys/types.h>    
#include <sys/wait.h>
using namespace std;
FILE *fdin1, *fdout1,*fdin2,*fdin3;
char s[10000];

bool used[131072];
int best[4];
double minv;

int main()
{
	
	string tmp;
	double now;
	minv = 1000000;

	int a,b,c,d,tt;a=4;b=5;c=6;d=7;
	memset(used,sizeof(used),0);
	fdin1 = fopen("./configurations","r");	
//	freopen("./result","w",stdout);
	fdout1 = fopen("./result","w");
	while(fgets(s,10000,fdin1))
	{
		fprintf(fdout1,"command ---- %s\n",s);
		//puts(s);
//		fprintf(fdout1,"%s\n",s);
		system(s);
		fdin3 = fopen("./tmp","r");
		fdin2 = fopen("./m5out/stats.txt","r");
		while (fgets(s,10000,fdin2))
		{
			tmp=s;
			if (tmp.find("sim_ticks")!=string::npos)
			{
			//	puts(s);
				fprintf(fdout1,"---- %s\n",s);
			//	printf("---- %s\n",s);
				break;
			}
		}
		fclose(fdin2);
		string tt;
		while (fgets(s,10000,fdin3))
		{
			tmp=s;
			if (tmp.find("Reset FPGA")!=string::npos)
			{
				tt=s;				
			}
		}
		fprintf(fdout1,"reset @ ---- %s\n",tt.c_str());
		fclose(fdin3);
	}
	return 0;
}
