#include <stdio.h>
#include <math.h>

void main (void)
{
	int num, bitNum, eqn, res;
	printf("Enter num: \n");
	scanf("%d",&num);
	printf("Enter bitNum: \n");
	scanf("%d",&bitNum);
	eqn = pow(2, bitNum); // number to "or" at the place of assignment.
	res = num | eqn; // oring the numbers to assign.
	printf("Num after assignment is : %d\n",res);
}