#include <stdio.h>
#include <math.h>

void main (void)
{
	int num, shft, res, shftDir;
	printf("Enter num: ");
	scanf("%d",&num);
	printf("Enter shift num: ");
	scanf("%d",&shft);
	printf("Enter shift direction 1 for left 2 for right: ");
	scanf("%d",&shftDir);
	if (shftDir == 1)
	{
		res = num * pow(2,shft);
		printf("Res = %d\n",res);
	}
	else if (shftDir == 2)
	{
		res = num / pow(2,shft);
		printf("Res = %d\n",res);
	}
	else 
		printf("Enter a valid value \n");
	
}