#include <stdio.h>

void main (void)
{
	int H, i, j, l, n;
	printf("Enter hight : ");
	scanf("%d",&H);
	for (l = 0; l < H+3; l++)
	{
		for (i = 0; i < H;i++)
		{
			printf(" ");
		}
		for (j = 0;j <= n;j++)
		{
			printf("*");
		}
		n = n+2;
		printf("\n");
		H--;
	}
	
}
/*
....*
...***
..***** 
.*******
*/