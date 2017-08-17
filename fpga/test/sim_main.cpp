#include<iostream>
#include "Vour.h"
#include "verilated.h"
#include<stdio.h>
#include<ctime>
#include <string>
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include<fcntl.h>
#include<limits.h>
#include<sys/stat.h>
#include<sys/types.h>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <sys/shm.h>
#include <signal.h>

using namespace std;
Vour *our;

int main(int argc, char** argv)
{

    while(1)
    {
		our->eval();		
    }
    our->final();
    delete our;
}
