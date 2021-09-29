#include <stdio.h>

void main (void)
{
	while (1)
	{
		int n1, n2, res;
		printf("Enter first num : ");
		scanf("%d",&n1);
		printf("Enter second num : ");
		scanf("%d",&n2);
		res = n1 + n2;
		printf("res = %d\n",res);
	}
}