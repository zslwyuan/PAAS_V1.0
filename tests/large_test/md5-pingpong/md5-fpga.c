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
unsigned long long p22[10];
unsigned long long p222[10];
unsigned long long p2222[10];
uint8_t *p;
unsigned long long* p0, *p00,*p000,*p0000;

void printout1(unsigned long long *p2)
{			 
		// display result
		p=(uint8_t *)&p2[0];
		printf("%2.2x%2.2x%2.2x%2.2x%2.2x%2.2x%2.2x%2.2x", p[0], p[1], p[2], p[3],p[4], p[5], p[6], p[7]);	 
		p=(uint8_t *)&p2[1];
		printf("%2.2x%2.2x%2.2x%2.2x%2.2x%2.2x%2.2x%2.2x", p[0], p[1], p[2], p[3],p[4], p[5], p[6], p[7]);	 
		puts("");
}


void md51(uint8_t *initial_msg, size_t initial_len) {
 
    // Message (to prepare)
    
 
    int new_len=initial_len*8 + 1;
	if (new_len%512!=448) new_len=(new_len+(448-new_len%512))/8;
    initial_msg[initial_len] = 128; // write the "1" bit
    uint32_t bits_len = 8*initial_len; // note, we append the len
    memcpy(initial_msg + new_len, &bits_len, 4);           // in bits at the end of the buffer
	p0[6] = 1;
}


char strin1[100];
char strin2[100];
char strin3[100];
char strin4[100];

int main(int argc, char **argv) {
 
    FILE* fd=fopen("input","r");
	p0 =(unsigned long long *) new((unsigned long long *)0xc0000000) unsigned long long[200];//Contro Port
	//printf("111111");
	p0[0] = 81;	
	p0[8] = 1;
	p0[1] = (unsigned long long)strin1;//ReadBase
	p0[2] = (unsigned long long)p2;//WriteBase
	p0[3] = 9;//CurrentThreadID
	p0[4] = 8;//Memory Range
	p0[5] = 8;//MemorySize
	p0[7] = 0;//Terminat
	p0[6] = 0;//RunState
    p00=p0+50;
	p00[0] = 81;	
	p00[8] = 1;
	p00[1] = (unsigned long long)strin2;//ReadBase
	p00[2] = (unsigned long long)p22;//WriteBase
	p00[3] = 9;//CurrentThreadID
	p00[4] = 8;//Memory Range
	p00[5] = 8;//MemorySize
	p00[7] = 0;//Terminat
	p00[6] = 0;//RunState
    p000=p0+100;
	p000[0] = 81;	
	p000[8] = 1;
	p000[1] = (unsigned long long)strin3;//ReadBase
	p000[2] = (unsigned long long)p222;//WriteBase
	p000[3] = 9;//CurrentThreadID
	p000[4] = 8;//Memory Range
	p000[5] = 8;//MemorySize
	p000[7] = 0;//Terminat
	p000[6] = 0;//RunState
    p0000=p0+150;
	p0000[0] = 81;	
	p0000[8] = 1;
	p0000[1] = (unsigned long long)strin4;//ReadBase
	p0000[2] = (unsigned long long)p2222;//WriteBase
	p0000[3] = 9;//CurrentThreadID
	p0000[4] = 8;//Memory Range
	p0000[5] = 8;//MemorySize
	p0000[7] = 0;//Terminat
	p0000[6] = 0;//RunState
    int flag=1,a=0,b=0,c=0,d=0,cnt=0;
	size_t len;
	while (flag)
	{
		if (!a){
		if (fgets(strin1,80,fd))		
		{a=1;
			p0[6] = 0;len = strlen(strin1);	
			strin1[len-1]=0;
			md51((uint8_t *)strin1, len-1);p0[6] = 1;
		} else {a=0;flag=0;}}
		
		if (!b){
		if (fgets(strin2,80,fd))		
		{b=1;
			p00[6] = 0;len = strlen(strin2);	
			strin2[len-1]=0;
			md51((uint8_t *)strin2, len-1);p00[6] = 1;
		} else {b=0;flag=0;}}

		if (!c){
		if (fgets(strin3,80,fd))		
		{c=1;
			p000[6] = 0;len = strlen(strin3);	
			strin3[len-1]=0;
			md51((uint8_t *)strin3, len-1);p000[6] = 1;
		} else {c=0;flag=0;}}

		if (!d){
		if (fgets(strin4,80,fd))		
		{d=1;
			p0000[6] = 0;len = strlen(strin4);	
			strin4[len-1]=0;
			md51((uint8_t *)strin4, len-1);p0000[6] = 1;
		} else {d=0;flag=0;}}


		if (a)
		{
			if (!p0[6]){
			printout1(p2);a=0;/*printf("%d\n",cnt);cnt=0;*/}//else cnt++;
		}
		if (b)
		{
			if (!p00[6]){
			printout1(p22);b=0;}
		}
		if (c)
		{
			if (!p000[6]){
			printout1(p222);c=0;}
		}
		if (d)
		{
			if (!p0000[6]){
			printout1(p2222);d=0;}
		}
	}
	p0[8] = 0;
    return 0;
}

