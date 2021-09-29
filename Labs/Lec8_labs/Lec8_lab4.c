#include <stdio.h>
#include "STD_TYPES.h"
#pragma pack(1)
typedef struct 
{
	u16 x;
	u32 y;
	u16 z;
	u32 k;
}mystruct;

mystruct Ahmed;
void main (void)
{
	printf("Size = %d",sizeof(Ahmed));
}