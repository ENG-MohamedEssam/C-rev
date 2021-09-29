#include <stdio.h>

void main (void)
{
	int G;
	printf ("Enter grade: ");
	scanf("%d",&G);
	if (G >= 0 && G < 50)
		printf("Failed");
	else if (G >= 50 && G < 65)
	printf("Normal");
	else if (G >= 65 && G < 75)
	printf("Good");
	else if (G >= 75 && G < 85)
	printf("Very Good");
	else if (G >= 85)
	printf("Excellent");
	else
		printf("Enter a valid value");
}
