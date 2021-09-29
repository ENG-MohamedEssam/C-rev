#include <stdio.h>

int n1, n2, res;

int Add();
int Sub();
int Mult();
int Div();
int And();
int Or();
int Not();
int Xor();
int Rem();
int Inc();
int Dec();
int getData1 ();
int getData2 ();


void main (void)
{
	int Id;
	printf("Enter operation Id : ");
	scanf("%d",&Id);
	switch (Id)
	{
		case 1:
		getData2();
		Add();
		printf("res = %d",res);
		break;
		
		case 2: 
		getData2();
		Sub();
		printf("res = %d",res);
		break;
		
		case 3: 
		getData2();
		Mult();
		printf("res = %d",res);
		break;
		
		case 4: 
		getData2();
		Div();
		printf("res = %d",res);
		break;
		
		case 5:
		getData2();
		And();
		printf("res = %d",res);
		break;
		
		case 6:
		getData2();
		Or();
		printf("res = %d",res);
		break;
		
		case 7:
		getData1();
		Not();
		printf("res = %d",res);
		break;
		
		case 8:
		getData2();
		Xor();
		printf("res = %d",res);
		break;
		
		case 9:
		getData2();
		Rem();
		printf("res = %d",res);
		break;
		
		case 10:
		getData1();
		Inc();
		printf("res = %d",res);
		break;
		
		case 11:
		getData1();
		Dec();
		printf("res = %d",res);
		break;
	}
}

int Add()
{
	res = n1 + n2;
}

int Sub()
{
	res = n1 - n2;
}

int Mult()
{
	res = n1 * n2;
}

int Div()
{
	res = n1 / n2;
}

int And()
{
	res = n1 && n2;
}

int Or()
{
	res = n1 || n2;
}

int Not()
{
	res = !n1;
}

int Xor()
{
	res = n1 ^ n2;
}

int Rem()
{
	res = n1 % n2;
}

int Inc()
{
	res = ++n1;
}

int Dec()
{
	res = --n1;
}


int getData1 ()
{
	printf("Enter Op1: ");
	scanf("%d",&n1);
}

int getData2 ()
{
	printf("Enter Op1: ");
	scanf("%d",&n1);
	printf("Enter Op2: ");
	scanf("%d",&n2);
}