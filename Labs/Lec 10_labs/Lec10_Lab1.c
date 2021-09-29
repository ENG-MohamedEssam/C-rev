#include <stdio.h>
#include "STD_TYPES.h"
#include <stdlib.h>

void sort(u8 num, u8 *ptr);
void main(void)
{
	u8 num;
	printf("Enter num of val to be sorted : ");
	scanf("%d",&num);
	u8 *ptr = (u8*) malloc(num* sizeof(u8));
	for (u8 i = 0; i < num; i++)
	{
		printf("Enter num %d = \n",i);
		scanf("%d",&ptr[i]);
	}
	sort(num, ptr);
	for (u8 i = 0; i < num; i++)
	{
		printf("\n%d\n",ptr[i]);
	}
}

void sort(u8 num, u8 *ptr)
{
	u16 dummy = 0;
	for (u8 i = 0; i < num-1; i++)
	{
		for (u8 j = 0; j < num-i-1; j++)
			if (ptr[j] > ptr[j+1])
			{
				dummy = ptr[j];
				ptr[j] = ptr[j+1];
				ptr[j+1] = dummy;
			}
	}
}