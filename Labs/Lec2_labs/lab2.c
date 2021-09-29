#include <stdio.h>

void main (void)
{
	int wh, sal;
	printf("please enter your working hours: ");
	scanf("%d",&wh);
	sal = 50 *wh;
	if (wh < 40)
		sal = 0.9*sal;
	printf("your salary is : %d",sal);
}