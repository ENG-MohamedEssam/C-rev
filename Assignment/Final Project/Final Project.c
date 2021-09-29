#include <stdio.h>
#include "STD_TYPES.h"

void admin (void);
void main (void)
{
	s8 mode;
	printf("Please choose the mode : \n");
		printf("'A' for Admin 'U'for user\n");
	scanf("%c",&mode);
	if (mode == 'A' || mode == 'a')
	{
		admin();
	}
	else if (mode == 'U' || mode =='u')
	{
		//user();
	}
	else 
		printf("Error wrong value");
}

void admin (void)
{
	u8 pw;
	u8 counter = 0;
	do
	{
		printf("Password : \n");
		scanf("%d",&pw);
		counter++;
		if (counter >= 3)
		{
			printf("System Shutdown");
			break;
		}
	}while(pw != 1234);
}