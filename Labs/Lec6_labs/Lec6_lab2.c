#include <stdio.h>

void func(int *ptr1, int *ptr2);
void main(void)
{
	int var1, var2;
	printf("Enter value of var1 : \n");
	scanf("%d",&var1);
	printf("Enter value of var2 : \n");
	scanf("%d",&var2);
	func(&var1, &var2);
	printf("Res = %d",var1);
	
}

void func(int *ptr1, int *ptr2)
{
	*ptr1 = *ptr1+*ptr2;
}