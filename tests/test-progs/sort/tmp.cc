#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cstdint>
#include <iostream>
#include <stack>

using namespace std;
bool used[256];
int main(int argc, char **argv) 
{
 
    FILE* fd=fopen("input","w");
	int n=1000,amo=25,i;
	unsigned long long num;
	while (n--)
	{
		memset(used,0,sizeof(used));
		for (i=1;i<=amo;i++)
		{
			int x=rand()%256;
			while (used[x]) x=rand()%256;
			fprintf(fd,"%d ",x);
			used[x]=1;
		}
		fprintf(fd,"\n");
 	}
    return 0;
}

