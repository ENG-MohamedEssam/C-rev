#include <stdio.h>

int bsort (int size, int arr[size]);
void main (void)
{
	int size = 10;
	int arr[size];
	for (int i = 0; i < size; i++)
	{
		printf("Enter val %d :",i);
		scanf("%d",&arr[i]);
	}
	arr[size] =  bsort (size, arr);
	/*
	for (int j = 0; j < size; j++)
	{
		printf("arr %d = %d\n", j, arr[j]);
	}
	*/
	printf ("max num = %d \nmin num =  %d \n",arr[size - 1], arr[0]);
	
	
}

int bsort (int s, int array[s])
{
	int swap;
	for (int i = 0; i < s-1; i++)
	{
		for (int j = 0; j < s - 1 - i; j++)
		{
			if (array[j] > array[j+1])
			{
				swap = array[j];
				array[j] = array[j+1];
				array[j+1] = swap;
			}
		}
	}
	return array[s];
}