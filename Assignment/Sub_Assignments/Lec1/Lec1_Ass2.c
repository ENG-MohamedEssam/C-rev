#include <stdio.h>
#include <math.h>

void main (void)
{
	int num, bitNum, eqn, eqn2, res;
	printf("Enter num: \n");
	scanf("%d",&num);
	printf("Enter bitNum: \n");
	scanf("%d",&bitNum);
	eqn = pow(2, bitNum); // number to "nand" at the place of assignment.
	eqn2 = ~eqn ; // not the numbers to assign.
	res = eqn2 & num; // anding the nanded num to the given.
	printf("Num after assignment is : %d\n",res);
}