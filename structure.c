//This program is to describe the use of Custom Data Types, using struct keyword.

#include <stdio.h>
#include <string.h>

typedef struct
{
	char name[20];
	char number[20];
}person;

int main(void)
{
	person people[2];

	strcpy(people[0].name, "Prem");
	strcpy(people[0].number, "9523024564");

	strcpy(people[1].name, "Shruti"); //Shruti is my ex-girlfriend, I really loved her.
	strcpy(people[1].number, "7488550973");
	
	for(int i=0; i<2; i++)
	{
		if(strcmp(people[i].name, "Shruti") == 0)
		{
			printf("Name = %s\nNumber = %s\n", people[i].name, people[i].number);
			return 0;
		}
	}
	printf("Contact not found");
	return 1;

}



