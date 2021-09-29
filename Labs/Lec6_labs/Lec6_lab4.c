#include <stdio.h>

void main(void)
{
	int arr[3];
	int *ptr = &arr[0];
	int ans;
	for (int i = 0; i < 3; i++)
	{
		printf("Enter %d num: ",i);
		scanf("%d",&arr[i]);
	}
	
	for (int j = 0; j < 3; j++)
	{
		ans+= ptr[j];
	}
	printf("%d",ans);
}