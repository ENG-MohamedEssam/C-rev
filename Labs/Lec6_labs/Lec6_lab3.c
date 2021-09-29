#include <stdio.h>

void func(int *ptr1, int *ptr2);
void main(void)
{
	int var1, var2;
	printf("Enter value of var1 : ");
	scanf("%d",&var1);
	printf("Enter value of var2 : ");
	scanf("%d",&var2);
	func(&var1, &var2);
	printf("sum = %d\n",var1);
	printf("sub = %d\n",var2);
	
}

void func(int *ptr1, int *ptr2)
{
	*ptr1 = *ptr1 + *ptr2; // sum
	*ptr2 = *ptr1 - 2*(*ptr2); //sub
}

/*
#include <stdio.h>

void func(int a, int b, int * ptr, int ptr2);
void main(void)
{
	int Num1, Num2, SumResult, SubResult;
	printf("Enter value of var1 : ");
	scanf("%d",&Num1);
	printf("Enter value of var2 : ");
	scanf("%d",&Num2);
	func(Num1, Num2, &SumResult, &SubResult);
	printf("sum = %d\n",SumResult);
	printf("sub = %d\n",SubResult);
	
}

void func(int a, int b, int * ptr, int ptr2)
{
	*ptr = a + b;
	*ptr = a - b;
}
*/