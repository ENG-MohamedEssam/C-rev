#include <stdio.h>

void main (void)
{
	int n1, n2, n3;
	printf("please enter num1: ");
	scanf("%d",&n1);
	printf("please enter num2: ");
	scanf("%d",&n2);
	printf("please enter num3: ");
	scanf("%d",&n3);
	if ((n1 > n2) && (n1 > n3))
		printf("Max num is: %d\n",n1);
	else if ((n2 > n3) && (n2 > n1))
		printf("Max num is : %d\n",n2);
	else 
		printf("Max num is : %d\n",n3);

	
}