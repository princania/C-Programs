#include <stdio.h>

int main()
{
	int a=10,b=20,Ans;
	Ans = mul(a,b);
	printf("%d",Ans);
	return 0;
}
int mul(int x, int y)
{
	int temp;
	temp = x*y;
	return temp;
}
