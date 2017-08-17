/*
 * Simple MD5 implementation
 *
 * Compile with: gcc -o md5 -O3 -lm md5.c
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <iostream>
#include <new>
#include <unistd.h>
using namespace std;
// leftrotate function definition
#define LEFTROTATE(x, c) (((x) << (c)) | ((x) >> (32 - (c))))
 
// These vars will contain the hash
//unsigned long long p1[10];//Read Area
unsigned long long p2[10];//Write Area
uint8_t *p;
unsigned long long* p0;

uint8_t msg[70];
void printout()
{			 
		// display result
		p=(uint8_t *)&p2[0];
		printf("%2.2x%2.2x%2.2x%2.2x%2.2x%2.2x%2.2x%2.2x", p[0], p[1], p[2], p[3],p[4], p[5], p[6], p[7]);	 
		p=(uint8_t *)&p2[1];
		printf("%2.2x%2.2x%2.2x%2.2x%2.2x%2.2x%2.2x%2.2x", p[0], p[1], p[2], p[3],p[4], p[5], p[6], p[7]);	 
		puts("");
}


void md5(uint8_t *initial_msg, size_t initial_len) {
 
    // Message (to prepare)
    
 
    int new_len=initial_len*8 + 1;
	if (new_len%512!=448) new_len=(new_len+(448-new_len%512))/8;
   // memcpy(msg, initial_msg, initial_len);
    initial_msg[initial_len] = 128; // write the "1" bit
    uint32_t bits_len = 8*initial_len; // note, we append the len
    memcpy(initial_msg + new_len, &bits_len, 4);           // in bits at the end of the buffer
	p0[6] = 1;
}



char strin[100];

int main(int argc, char **argv) {
 
    FILE* fd=fopen("input","r");
	p0 =(unsigned long long *) new((unsigned long long *)0xc0000000) unsigned long long[10];//Contro Port
	//printf("111111");
	p0[0] = 81;	
	p0[8] = 1;
	p0[1] = (unsigned long long)strin;//ReadBase
	p0[2] = (unsigned long long)p2;//WriteBase
	p0[3] = 9;//CurrentThreadID
	p0[4] = 8;//Memory Range
	p0[5] = 8;//MemorySize
	p0[7] = 0;//Terminat
	p0[6] = 0;//RunState
    int cnt=0;
		while(fgets(strin,40,fd))		
		{
			while (p0[6]); 
			//printf("cnt - %d\n",cnt);
			printout();
			p0[6] = 0;size_t len = strlen(strin);	
			strin[len-1]=0;//printf("%s--",strin);
			len--;
			md5((uint8_t *)strin, len);

		}
	p0[8] = 0;
    return 0;
}

