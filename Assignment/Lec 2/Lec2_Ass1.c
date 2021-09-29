#include <stdio.h>

void main (void)
{
	int n1, n2, n3, n4, n5,
		n6, n7, n8, n9, n10,
		ns;
	printf("Please Enter Num1: ");
	scanf("%d",&n1);
	printf("Please Enter Num2: ");
	scanf("%d",&n2);
	printf("Please Enter Num3: ");
	scanf("%d",&n3);
	printf("Please Enter Num4: ");
	scanf("%d",&n4);
	printf("Please Enter Num5: ");
	scanf("%d",&n5);
	printf("Please Enter Num6: ");
	scanf("%d",&n6);
	printf("Please Enter Num7: ");
	scanf("%d",&n7);
	printf("Please Enter Num8: ");
	scanf("%d",&n8);
	printf("Please Enter Num9: ");
	scanf("%d",&n9);
	printf("Please Enter Num10: ");
	scanf("%d",&n10);
	printf("Enter the value to seach for: ");
	scanf("%d",&ns);
	if (ns == n1)
		printf("Value exists at Num1.\n");
	else if (ns == n2)
		printf("Value exists at Num2.\n");
	else if (ns == n3)
		printf("Value exists at Num3.\n");
	else if (ns == n4)
		printf("Value exists at Num4.\n");
	else if (ns == n5)
		printf("Value exists at Num5.\n");
	else if (ns == n6)
		printf("Value exists at Num6.\n");
	else if (ns == n7)
		printf("Value exists at Num7.\n");
	else if (ns == n8)
		printf("Value exists at Num8.\n");
	else if (ns == n9)
		printf("Value exists at Num9.\n");
	else if (ns == n10)
		printf("Value exists at Num10.\n");
	else 
		printf("It's location isn't found\n");
}