#include <stdio.h>

void main (void)
{
	int x, y, ans1, ans2;
	printf("Please Enter number 1: ");
	scanf("%d",&x);
	printf("Please Enter number 2: ");
	scanf("%d",&y);
	ans1 = x + y;
	ans2 = x * y;
	printf("a + b = %d\n",ans1);
	printf("a x b = %d\n",ans2);
	
}