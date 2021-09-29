#include <stdio.h>

void main (void)
{
	int id, pass;
	printf("please enter your ID: ");
	scanf("%d",&id);
	if (id)
	{
		printf("Please enter your Password: \n");
		scanf("%d",&pass);
		if (pass)
		{
			printf("user name\n");
		}
		else
			printf("incorrect password\n");
	}
	else 
		printf("incorrect id\n");
}