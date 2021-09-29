#include <stdio.h>

int n1, n2, n3, n4, mi, ma;
int max ();
int min ();

void main (void)
{
	
	printf ("Enter num1 : ");
	scanf("%d",&n1);
	printf ("Enter num2 : ");
	scanf("%d",&n2);
	printf ("Enter num3 : ");
	scanf("%d",&n3);
	printf ("Enter num4 : ");
	scanf("%d",&n4);
	max();
	min();
	printf("Max num = %d\n",ma);
	printf("Min num = %d\n",mi);
	
}

int max ()
{
	if (n1 > n2 && n1 > n3 && n1 > n4)
		ma = n1;	
	else if (n2 > n1 && n2 > n3 && n2 > n4)
		ma = n2;
	else if (n3 > n1 && n3 > n2 && n3 > n4)
		ma = n3;
	else 
		ma = n4;
}

int min ()
{
	if (n1 < n2 && n1 < n3 && n1 < n4)
		mi = n1;	
	else if (n2 < n1 && n2 < n3 && n2 < n4)
		mi = n2;
	else if (n3 < n1 && n3 < n2 && n3 < n4)
		mi = n3;
	else 
		mi = n4;
}