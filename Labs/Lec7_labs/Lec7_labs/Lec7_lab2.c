#include <stdio.h>

void main (void)
{
	char x = 'c';
	int y = 1;
	float z = 2;
	double m = 3;
	printf("size of char = %d\n",sizeof(x));
	printf("size of integer = %d\n",sizeof(y));
	printf("size of float = %d\n",sizeof(z));
	printf("size of double = %d\n",sizeof(m));

}