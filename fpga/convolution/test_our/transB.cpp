#include <unistd.h>  
#include <stdlib.h>  
#include <cstdio>  
#include <cstring>
#include <iostream>
#include <sys/shm.h>  

using namespace std;

#define TEXT_SZ 20  
  
int running = 1;//程序是否继续运行的标志  
void *shm = NULL;//分配的共享内存的原始首地址  
struct shared_use_st *shared;//指向shm  
int shmid,cnt;  
int num_input_fpga,num_output_fpga;

struct shared_use_st  
{  
    int written;//作为一个标志，非0：表示可读，0表示可写  
    unsigned long long text[TEXT_SZ];//记录写入和读取的文本  
}; 

void createShare()
{
	num_input_fpga = 4;
	num_output_fpga = 1;
    //创建共享内存  
    shmid = shmget((key_t)1234, sizeof(struct shared_use_st), 0666|IPC_CREAT);  
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
    //设置共享内存  
    shared = (struct shared_use_st*)shm;  
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

int main()  
{  
	createShare();
    while(running)//读取共享内存中的数据  
    {  
        //没有进程向共享内存定数据有数据可读取  
        if(shared->written != 0)  
        {  
            if(shared->text[num_input_fpga+num_output_fpga] == 10101)  
			{
                running = 0;  
				break;
			}
			for (cnt=0;cnt<num_input_fpga;cnt++) printf("%llu ",shared->text[cnt]);			
			for (cnt=num_input_fpga;cnt<num_input_fpga+num_output_fpga;cnt++) scanf("%llu",&shared->text[cnt]);
            shared->written = 0;  
            //输入了end，退出循环（程序）  

        }  
    }  
	deleteShare();
    exit(EXIT_SUCCESS);  
}  
