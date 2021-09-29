#include <stdio.h>

void main(void)
{
	int x = 10;
	printf("x = %d\n",x);
	int *ptr = &x;
	*ptr = 20;
	printf("new val of x = %d",x);
}