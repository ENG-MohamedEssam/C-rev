#include <stdio.h>

void main (void)
{
	int i, v;
	printf("Enter the result of 3 x 4 = \n");
	scanf("%d",&v);
	while ( v != 12)
	{
		printf("False , try again\n");
		scanf("%d",&v);
	}
	printf("Correct");
}