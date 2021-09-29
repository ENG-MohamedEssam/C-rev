#include <stdio.h>

void main (void)
{
	int i = 1 , v = 0;
	printf("Enter a num = \n");
	scanf("%d",&v);
	while (i < v+1)
	{
		printf("%d * %d = %d\n", v, i, v*i );  
		i++;
	}
}