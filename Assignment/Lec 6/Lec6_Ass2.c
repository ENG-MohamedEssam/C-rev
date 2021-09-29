#include<stdio.h>

void main (void)
{
	int x = 1, y = 2, z = 3;
	int *p = &x, *q = &y, *r = &z, *dummy = NULL;
	printf("x = %d\n",x);
	printf("y = %d\n",y);
	printf("z = %d\n",z);
	printf("p = %d\n",p);
	printf("q = %d\n",q);
	printf("r = %d\n",r);
	printf("*p = %d\n",*p);
	printf("*q = %d\n",*q);
	printf("*r = %d\n",*r);
	printf("Swapping Pointers\n");
	dummy = p;
	p = q;
	q = r;
	r = dummy;
	printf("x = %d\n",x);
	printf("y = %d\n",y);
	printf("z = %d\n",z);
	printf("p = %d\n",p);
	printf("q = %d\n",q);
	printf("r = %d\n",r);
	printf("*p = %d\n",*p);
	printf("*q = %d\n",*q);
	printf("*r = %d\n",*r);
	
}