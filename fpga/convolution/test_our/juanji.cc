#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

int main()
{
    freopen("1.txt","w",stdout);
    int i,j;
    for (i=0;i<199;i++)
    {
        printf("ans[%d]<=",i);
        int a,b;
        if (i-99<0) a=0;else a=i-99;
        if (i>99) b=99; else b=i;
        for (j=a;j<=b;j++)
        {
            if (j!=b)printf("tmp[%d]*tmp[%d]+",j,i-j+100);
            else printf("tmp[%d]*tmp[%d];\n",j,i-j+100);
        }
    }
}
