#include <stdio.h>
#include "STD_TYPES.h"
#include <stdlib.h>

typedef struct 
{
	u16 id;
	u16 math; 
	u16 language;
	u16 physics;
	u16 chemistry;
}class;

void main (void)
{
	u8 id;
	class arr[10];
	for(u16 i = 0; i < 10; i++)
	{
		arr[i].id = i;
		arr[i].math = rand()*i;
		arr[i].language = rand()*i;
		arr[i].physics = rand()*i;
		arr[i].chemistry = rand()*i;
	}
	printf("Enter Student id: ");
	scanf("%d",&id);
	if (id > 10)
	{
		printf("Wrong id");
	}
	else
	{
		printf("Math Grade = %d\n",arr[id].math);
		printf("language Grade = %d\n",arr[id].language);
		printf("Physics Grade = %d\n",arr[id].physics);
		printf("Chemistry Grade = %d\n",arr[id].chemistry);
	}
}