#include <stdio.h>

void main (void)
{
	int AhmedId = 1234, AhmedPw = 7788,
		AmrId = 5678, AmrPw = 5566,
		WaelId = 9870, WaelPw = 1122;
	int Id, Pw, i;
		
		printf("Enter ID : ");
		scanf("%d",&Id);
		if (Id != AhmedId && Id != AmrId && Id!= WaelId)
		{
			printf("You are not registerd");
		}
		else 
		{
			for (i = 0; i < 3; i++)
			{
				printf("Enter PW: ");
				scanf("%d",&Pw);
				if (Id == AhmedId && Pw == AhmedPw)
				{
					printf("Welcome Ahmed\n");
					break;
				}
				else if (Id == AmrId && Pw == AmrPw)
				{
					printf("Welcome Amr\n");
					break;
				}
				else if (Id == WaelId && Pw == WaelPw)
				{
					printf("Welcome Wael\n");
					break;
				}
				else 
					continue;
			}
			if (i == 3)
				printf("Incorrect Pw 3 times ...");
		}
}