#include<stdio.h>

void main (void)
{
	float x = 0.75;
	double y = 0.75;
	if (x > y)
		printf("float is bigger");
	else if (y > x)
		printf("double is bigger");
	else if (x == y)
		printf("Equal");
}