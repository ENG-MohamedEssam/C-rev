#include <stdio.h>

int Arrip (int arr[3][3]);
int mult(int arr[3][3], int arr2[3][3], int arr3[3][3]);
void mat(int arr[3][3]);

void main (void)
{
	int arr[3][3], arr2[3][3], arr3[3][3];
	printf("Matrix 1\n");
	arr[3][3] = Arrip(arr);
	printf("Matrix 2\n");
	arr2[3][3]= Arrip(arr2);
	
	printf("\n");
	printf("Matrix 1 = \n");
	mat(arr);
	printf("Matrix 2 = \n");
	mat(arr2);
	arr3[3][3] = mult(arr, arr2, arr3);
	printf("OP matrix = \n");
	mat(arr3);
}

int Arrip (int arr[3][3])
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("Enter num in r %d c %d :", i, j);
			scanf("%d",&arr[i][j]);
		}
	}
	return arr[3][3];
}

int mult(int arr[3][3], int arr2[3][3], int arr3[3][3])
{
	int x, y = 0, ans = 0;
	while (y < 3)
	{
		for (x = 0; x < 3; x++)
		{
			for (int i = 0; i < 3; i++)
			{
				ans += arr[x][i] * arr2[i][y];
			}
			arr3[x][y] = ans;
			ans = 0;
		}
		y++;
		ans = 0;
	}
	return arr3[3][3];
}

void mat(int arr[3][3])
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d,",arr[i][j]);
		}
		printf("\n");
	}
}