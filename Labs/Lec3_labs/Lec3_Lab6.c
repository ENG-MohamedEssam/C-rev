#include <stdio.h>

void main (void)
{
	int n = 0, newN = 1; 
	printf("Enter num : ");
	scanf("%d",&n);
	do 
	{
		newN *= n; 
		n = n-1;
	}while(n > 0);
	printf("Answer = %d",newN);
}