//This program searches for a particular number in an array using the Binary Search Algorithm.

#include<stdio.h>

void main(void)
{
	int arr[] = {5, 9, 12, 16, 22, 35, 63, 77, 78, 89, 95, 100};
	int length = sizeof(arr)/sizeof(arr[0]);
	int first = 0;
	int last = length-1;
	//Number to be searched
	int search = 88;
	
	int found = 0;

	while(found == 0) //Assuming that the number is definetly present
	{
		int middle = (last + first)/2;

		if(middle == first) //Checking if the number is not present in the array, dry run concludes that if the number is not present it will get in a infinite loop where every time it tries to find the next middle index, it will be same as the first index.
		{
			found = 1;
			printf("It is not present in the array");
		}
		
		if(arr[middle] == search)
		{
			found = 1;
			printf("It is present in index: %i",middle);
		}
		else if(arr[middle] < search)
		{
			first = middle;
			
		}
		else
		{
			last = middle;
		}
	}
}
