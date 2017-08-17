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

#define TEXT_SZ 20

int running = 1;//程序是否继续运行的标志
void *shm = NULL;//分配的共享内存的原始首地址
struct shared_use_st *shared;//指向shm
int shmid,cnt;
int num_input_fpga,num_output_fpga;
int sharedid;
struct shared_use_st
{
    int written;//作为一个标志，非0：表示可读，0表示可写
    unsigned long long text[TEXT_SZ];//记录写入和读取的文本
};

void createShare()
{
	num_input_fpga = 13;
	num_output_fpga = 15;
    //创建共享内存
    shmid = shmget((key_t)sharedid, sizeof(struct shared_use_st), 0666|IPC_CREAT);
    if(shmid == -1)
    {
        fprintf(stderr, "shmget failed\n");
        exit(EXIT_FAILURE);
    }
    //将共享内存连接到当前进程的地址空间
    shm = shmat(shmid, 0, 0);
    if(shm == (void*)-1)
    {
        fprintf(stderr, "shmat failed\n");
        exit(EXIT_FAILURE);
    }
    printf("\nMemory attached at %llX\n", (unsigned long long)shm);
	shared = (struct shared_use_st*)shm;
    //设置共享内存
    shared->written = 0;
}

void deleteShare()
{
    //把共享内存从当前进程中分离
    if(shmdt(shm) == -1)
    {
        fprintf(stderr, "shmdt failed\n");
        exit(EXIT_FAILURE);
    }
    //删除共享内存
    if(shmctl(shmid, IPC_RMID, 0) == -1)
    {
        fprintf(stderr, "shmctl(IPC_RMID) failed\n");
        exit(EXIT_FAILURE);
    }
}

int main(int argc, char** argv)
{
    int ppid=getppid();
	FILE *t0 = fopen("fpga_share.txt","r");
	fscanf(t0,"%d",&sharedid);
	fclose(t0);t0 = fopen("fpga_share.txt","w");fclose(t0);
	
	printf("ppid = %d\n",ppid);
	int cpu_running;
    static const int //FPGA Output
        bit_ReadEnable = 5,
        bit_WriteEnable = 6,
        bit_FinishRead = 7,
        bit_FinishWrite = 8,
        bit_ReadAddr = 9,
        bit_Size_ReadData_Output = 10,
        bit_WriteAddr = 11,
        bit_Size_WriteData = 12,
        bit_WriteData = 13,
        bit_Done = 14;
    static const int //FPGA Input
        bit_ReadReady = 5,
        bit_WriteReady = 6,
        bit_ReadData = 7,
        bit_ReadBase = 8,
        bit_WriteBase = 9,
        bit_Num_Read = 10,
        bit_Size_ReadData_Input = 11,
        bit_Run = 12;

    Verilated::commandArgs(argc, argv);

    our = new Vour;

    our->reset = 1;
    our->clk=0;
    int sum,clk,x,y,reset;
    createShare();
    unsigned long long *inputArray = &shared->text[0];
    unsigned long long *outputArray = &shared->text[num_input_fpga];
	shared->written = 0;
	shared->written = 0;
	shared->written = 0;
    while(running)
    {
		cpu_running = (shared->written==0);
		//printf("cpu_running:%d\n",cpu_running);
		if (kill(ppid,0)<0) break;
		if (!cpu_running)
		{
		    if(shared->text[num_input_fpga+num_output_fpga] == 10101)
		    {
		        shared->written = 0;
		        running = 0;
		        break;
		    }
		    //OUTPUT
		    outputArray[bit_ReadEnable] = our->read_enable;
		    outputArray[bit_WriteEnable] = our->write_enable;
		    outputArray[bit_FinishRead] = our->finish_read;
		    outputArray[bit_FinishWrite] = our->finish_write;
		    outputArray[bit_ReadAddr] = our->read_addr;
		    outputArray[bit_WriteAddr] = our->write_addr;
		    outputArray[bit_Done] = our->done;
		    outputArray[bit_Size_WriteData] = our->write_size;
		    outputArray[bit_WriteData] = our->write_data;
		    outputArray[bit_Size_ReadData_Output] = our->read_size_output;

		    bool Vfinish=!Verilated::gotFinish();
		  //  for (int i=0;i<num_input_fpga+num_output_fpga;i++)
		    //    printf("%d:%llu ",i,shared->text[i]);
		    if(Vfinish)
		    {
		        our->clk=1;
		        our->eval();

		        //INPUT
		        our->read_base = inputArray[bit_ReadBase];
		        our->write_base = inputArray[bit_WriteBase];
		        our->num_read = inputArray[bit_Num_Read];
		        our->read_size_input = inputArray[bit_Size_ReadData_Input];
		        our->read_ready = inputArray[bit_ReadReady];
		        our->write_ready = inputArray[bit_WriteReady];
		        our->read_data = inputArray[bit_ReadData];
		        our->reset = inputArray[bit_Run];
		      //  printf("ReadBase -- %llu Reset -- %llu ReadSize -- %llu\n",inputArray[bit_ReadBase],inputArray[bit_Run],inputArray[bit_Size_ReadData_Input]);
		        our->clk=0;
		        our->eval();
		    }
		    else break;
			if (shared->written == 1)
		    	shared->written = 0;
		}
		
    }
    our->final();
    delete our;
    exit(EXIT_SUCCESS);
}
