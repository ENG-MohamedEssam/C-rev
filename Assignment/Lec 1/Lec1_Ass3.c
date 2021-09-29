#include <stdio.h>

void main (void)
{
	int num1,num2;
	printf("please enter num 1: ");
	scanf("%d",&num1);
	printf("please enter num 2: ");
	scanf("%d",&num2);
	printf("a + b = %d\n",num1+num2);
	printf("a - b = %d\n",num1-num2);
	printf("a & b = %d\n",num1&num2);
	printf("a | b = %d\n",num1|num2);
	printf("a ^ b = %d\n",num1^num2);
}