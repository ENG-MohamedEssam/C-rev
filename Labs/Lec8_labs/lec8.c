#include <stdio.h>
#include "E:\IMT\Labs\Lec9_labs\STD_TYPES.h"

typedef struct 
{
	u16 salary;
	u16 bonus;
	u16 deductions;
}employee;
employee Ahmed;
employee Waleed;
employee Amr;


void main (void)
{
	printf("Enter Ahmed salary: \n");
	scanf("%d",&Ahmed.salary);
	printf("Enter Ahmed Bonus: \n");
	scanf("%d",&Ahmed.bonus);
	printf("Enter Ahmed Deduction: \n");
	scanf("%d",&Ahmed.deductions);
	
	printf("Enter Waleed salary: \n");
	scanf("%d",&Waleed.salary);
	printf("Enter Waleed Bonus: \n");
	scanf("%d",&Waleed.bonus);
	printf("Enter Waleed Deduction: \n");
	scanf("%d",&Waleed.deductions);
	
	printf("Enter Amr salary: \n");
	scanf("%d",&Amr.salary);
	printf("Enter Amr Bonus: \n");
	scanf("%d",&Amr.bonus);
	printf("Enter Amr Deduction: \n");
	scanf("%d",&Amr.deductions);
	u16 total = Ahmed.salary + Ahmed.bonus - Ahmed.deductions
			+ Amr.salary + Amr.bonus - Amr.deductions
			+ Waleed.salary + Waleed.bonus - Waleed.deductions;
	printf("Total Value = %d\n",total);
}