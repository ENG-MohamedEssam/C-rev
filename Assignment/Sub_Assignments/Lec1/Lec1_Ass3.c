#include <stdio.h>
#include <math.h>

void main (void)
{
	int num, bitNum, eqn, res;
	printf("Enter num: \n");
	scanf("%d",&num);
	printf("Enter bitNum: \n");
	scanf("%d",&bitNum);
	eqn = pow(2, bitNum); // number to "xor" at the place of assignment.
	res = eqn ^ num; // xoring.
	printf("Num after assignment is : %d\n",res);
}