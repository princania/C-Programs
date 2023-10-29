#include<stdio.h>

void main()
{
	typedef struct Vehical
	{

		char *name;
		int price;
	} Cars;
	Cars alto;
	alto.name = "Alto LXI";
	alto.price = 400000;

	printf("Name  : %s",alto.name);
	printf("Price : %d",alto.price);
}
