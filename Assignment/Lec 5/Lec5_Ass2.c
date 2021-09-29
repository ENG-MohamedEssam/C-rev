#include <stdio.h>

int bsort (int m, int s, int array[m][s]);
int Highest(int school[3][10]);
int Lowest(int school[3][10]);
int avg(int school[3][10]); 
int pass (int school[3][10]);

void main (void)
{
	int school[3][10];

	for (int j = 0; j < 3; j++ )
	{	
		for (int i = 0; i < 10; i++ )
		{
			printf("Class %d student %d grade : ", j, i);
			scanf("%d",&school[j][i]);
		}
	}
	school[3][10] = bsort (3, 10, school);
	/*
	for (int j = 0; j < 3; j++ )
	{	
		for (int i = 0; i < 10; i++ )
		{
			printf("Class %d student %d grade : %d\n", j, i,school[j][i]);
		}
	}
	*/
	printf("Highest score = %d\n",Highest(school));
	printf("Lowest score = %d\n",Lowest(school));
	printf("avg score = %d\n",avg(school));
	printf("num of students passed : %d\n", pass(school));
	printf("num of students failed : %d\n",(30 - pass(school)));
}

int bsort (int m, int s, int array[m][s])
{
	int swap;
	
	for (int m = 0; m < 3; m++ )
	{	
		for (int i = 0; i < s-1; i++)
		{
			for (int j = 0; j < s - 1 - i; j++)
			{
				if (array[m][j] > array[m][j+1])
				{
					swap = array[m][j];
					array[m][j] = array[m][j+1];
					array[m][j+1] = swap;
				}
			}
		}
	}
	return array[m][s];
}

int Highest(int school[3][10])
{
	int res; 
	if (school[0][9] > school[1][9] && school[0][9] > school[2][9])
	{
		res = school[0][9];
	}
	else if (school[1][9] > school[0][9] && school[1][9] > school[2][9])
	{
		res = school[1][9];
	}
	else 
		res = school[2][9];
	return res;
}

int Lowest(int school[3][10])
{
	int res; 
	if (school[0][0] < school[1][0] && school[0][0] < school[2][0])
	{
		res = school[0][0];
	}
	else if (school[1][0] < school[0][0] && school[1][0] < school[2][0])
	{
		res = school[1][0];
	}
	else 
		res = school[2][0];
	return res;
}

int avg(int school[3][10])
{
	int sum = 0;
	float avg;
	for (int j = 0; j < 3; j++ )
	{	
		for (int i = 0; i < 10; i++ )
		{
			sum += school[j][i];
		}
	}
	return avg = sum / 30.0;
}

int pass (int school[3][10])
{
	int counter = 0;
	for (int j = 0; j < 3; j++ )
	{	
		for (int i = 0; i < 10; i++ )
		{
			if (school[j][i] >= 50)
			{
				counter ++;
			}
		}
	}
	return counter;
}
