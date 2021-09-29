#include <stdio.h>

void main (void)
{
	int n;
	printf("please enter a num : ");
	scanf("%d",&n);
	if ((n%2) == 0)
		printf("Even Num");
	else if ((n%2) != 0)
		printf("Odd num");
	else 
		printf("The code is not right");
	
}