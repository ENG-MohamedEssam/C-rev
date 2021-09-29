#include <stdio.h>

int BubbleSort(int s, int *ptr);
void main(void)
{
	int size = 10, arr[size];
	for (int i = 0; i < size; i++)
	{
		printf("Enter num %d : ", i);
		scanf("%d",&arr[i]);
	}
	arr[size] = BubbleSort(size, arr);
	for (int j = 0; j < size; j++)
	{
		printf("arr %d = %d \n", j, arr[j]);
	}
}

int BubbleSort(int s, int arr[s])
{
	int swap;
	for (int i = 0; i < s - 1 ; i++)
	{
		for (int j = 0; j < s - 1 - i; j++)
		{
			if (arr[j] > arr[j+1])
			{
				swap = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = swap;
			}
		}
	}
	return arr[s];
}


