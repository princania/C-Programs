#include <stdio.h>
void main()
{
	char ch;
	printf("Enter a character\n");
	scanf("%c",&ch);

	if((ch>=97 && ch<=122) || (ch >= 65 && ch <= 90))
	printf("It is a alphabet");
	else
		printf("It is not a alphabet");
}
