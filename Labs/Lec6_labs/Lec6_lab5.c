#include <stdio.h>

int mult (int arr[3],int arr2[3],int arr3[3]);

void main(void)
{
	int arr[3], arr2[3], arr3[3];
	for (int i = 0; i < 3; i++)
	{
		printf("Enter num %d in arr :",i);
		scanf("%d",&arr[i]);
		printf("Enter num %d in arr2 :",i);
		scanf("%d",&arr2[i]);
	}
	arr3[3] = mult(arr,arr2,arr3);
	
	printf("Num  = %d ",arr3[0]);
}

int mult (int arr[3],int arr2[3],int arr3[3])
{
	int ans = 0;
	for (int i = 0; i < 3; i++)
	{
		arr3[i] = arr[i] * arr2[i];
		ans += arr3[i];
	}
	arr3[0] = ans;
	return arr3[0];
}