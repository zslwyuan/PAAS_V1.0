#include <unistd.h>  
#include <stdlib.h>  
#include <cstdio>  
#include <cstring>
#include <iostream>
#include <sys/shm.h>  

using namespace std;

#define TEXT_SZ 20  
  
struct shared_use_st  
{  
    int written;//作为一个标志，非0：表示可读，0表示可写  
    unsigned long long text[TEXT_SZ];//记录写入和读取的文本  
}; 

int running;  
void *shm = NULL;  
struct shared_use_st *shared;  
unsigned long long buffer[BUFSIZ + 1];//用于保存输入的文本  
int shmid,cnt;  
int num_input_fpga,num_output_fpga;

void createShare()
{
	num_input_fpga = 4;
	num_output_fpga = 1;
	running = 1;  
	shared_use_st *shared = NULL;  
    //创建共享内存  
    shmid = shmget((key_t)1234, sizeof(struct shared_use_st), 0666|IPC_CREAT);  
    if(shmid == -1)  
    {  
        fprintf(stderr, "shmget failed\n");  
        exit(EXIT_FAILURE);  
    }  
    //将共享内存连接到当前进程的地址空间  
    shm = shmat(shmid, (void*)0, 0);  
    if(shm == (void*)-1)  
    {  
        fprintf(stderr, "shmat failed\n");  
        exit(EXIT_FAILURE);  
    }  
    printf("Memory attached at %llX\n", (unsigned long long)shm);  
}

void deleteShare()
{
    //把共享内存从当前进程中分离  
    if(shmdt(shm) == -1)  
    {  
        fprintf(stderr, "shmdt failed\n");  
        exit(EXIT_FAILURE);  
    }  
}

int main()  
{  

    //设置共享内存  
    
	createShare();
	shared = (struct shared_use_st*)shm;  
    while(running)//向共享内存中写数据  
    {  
		
        //数据还没有被读取，则等待数据被读取,不能向共享内存中写入文本  
        while(shared->written == 1)   {}  
        //向共享内存中写入数据  		
		for (cnt=num_input_fpga;cnt<num_input_fpga+num_output_fpga;cnt++) printf("%llu ",shared->text[cnt]);
		printf("\n");
		for (cnt=0;cnt<num_input_fpga;cnt++) scanf("%llu",&shared->text[cnt]);
		scanf("%llu",&shared->text[num_input_fpga+num_output_fpga]);
        //写完数据，设置written使共享内存段可读  
        shared->written = 1;  
        //输入了end，退出循环（程序）  
        if(shared->text[num_input_fpga+num_output_fpga] == 10101)  
            running = 0;  
    }  
	deleteShare();
    exit(EXIT_SUCCESS);  
}
