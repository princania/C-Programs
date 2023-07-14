#include <stdio.h>

void main(void)
{
	int i;
	printf("Enter a number between between 0 to 127 to know it's ASCII character\n");
	scanf("%i",&i);
	printf("The ASCII character represent by %i is: %c \n",i,i);
}
