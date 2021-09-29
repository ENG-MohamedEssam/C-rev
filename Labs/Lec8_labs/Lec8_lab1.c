#include<stdio.h>
#include "E:\IMT\Labs\Lec9_labs\STD_TYPES.h"


#pragma pack(4)

typedef struct 
{
	s16 x;
	s32 y;
	s16 m;
	s32 a;
}S;

void main (void)
{
	S A;
	printf("Size of struct = %d ",sizeof(A));
}