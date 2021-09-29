#include <stdio.h>

#define SET_BIT(VAR,BIT_NO)	(1<<BIT_NO)|VAR
#define CLR_BIT(VAR,BIT_NO)	~(1<<BIT_NO)&VAR
#define TOG_BIT(VAR,BIT_NO)	(1<<BIT_NO)^VAR

void main (void)
{
	int x, y, set, clr, tog;
	printf("Enter a num: ");
	scanf("%d",&x);
	printf("Enter bit num: ");
	scanf("%d",&y);
	set = SET_BIT(x,y);
	clr = CLR_BIT(x,y);
	tog = TOG_BIT(x,y);
	printf("Set = %d\n",set);
	printf("Clr = %d\n",clr);
	printf("Tog = %d\n",tog);
}
/*
#include <stdio.h>

#define SET_BIT(VAR,BIT_NO)	VAR = (1<<BIT_NO)|VAR
#define CLR_BIT(VAR,BIT_NO)	VAR = ~(1<<BIT_NO)&VAR
#define TOG_BIT(VAR,BIT_NO)	VAR = (1<<BIT_NO)^VAR

void main (void)
{
	int x, y, set, clr, tog;
	printf("Enter a num: ");
	scanf("%d",&x);
	printf("Enter bit num: ");
	scanf("%d",&y);
	SET_BIT(x,y);
	printf("Set = %d\n",x);
	CLR_BIT(x,y);
	printf("Set = %d\n",x);
	TOG_BIT(x,y);
	printf("Set = %d\n",x);
}
*/

/*
#define SET_BIT(VAR,BIT_NO)	VAR |=(1<<BIT_NO)
#define CLR_BIT(VAR,BIT_NO)	VAR &= (~(1<<BIT_NO))
#define TOG_BIT(VAR,BIT_NO)	VAR ^= (1<<BIT_NO)
*/