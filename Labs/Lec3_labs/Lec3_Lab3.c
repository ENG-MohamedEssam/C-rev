#include <stdio.h>

void main (void)
{
	int i, n = 0, sum = 0;
	float avg;
	printf("Enter 10 numbers: \n");
	for (i = 0; i < 10; i++)
	{
		scanf("%d",&n);
		sum +=n;
	}
	avg = sum / 10.0;
	printf("sum = %d\n",sum);
	printf("avg = %f\n",avg);
}