#include<stdio.h>

typedef signed char s8;
typedef unsigned char u8;
typedef signed short int s16;
typedef unsigned short  int u16;
typedef signed long int s32;
typedef unsigned long int u32;
typedef float f32;
typedef double f64;
typedef long double f128;


void main(void)
{
	printf("size of u8 = %d \n",sizeof(u8));
	printf("size of s8 = %d \n",sizeof (s8));
	printf("size of s16 = %d \n",sizeof (s16));
	printf("size of s32 = %d \n",sizeof(s32));
	printf("size of u32 = %d \n",sizeof(u32));
	printf("size of f32 = %d \n",sizeof(f32));
	printf("size of f64 = %d \n",sizeof(f64));
	printf("size of f128 = %d \n",sizeof(f128));
}