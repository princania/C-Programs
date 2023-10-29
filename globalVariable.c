#include<stdio.h>
static int a=10;
a=11;
void f()
{
	a++;
}
void g()
{
	a++;
}
void main()
{
	f();
	g();
	a++;
	printf("%d",a);
}
