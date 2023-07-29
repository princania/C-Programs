#include <stdio.h>

void main(void)
{
	//Step 1: Asking user for and array
	int size;
	printf("Enter the size of the array\n");
	scanf("%i",&size);

	int arr[size];
	printf("Enter the elements of array\n");
	for(int i=0;i<size;i++)
	{
		scanf("%i",&arr[i]);
	}

	//Step 2: Sorting th array using Bubble Sort
	for(int j=0;j<size;j++)
	{
	for(int i=0;i<size-1;i++)
	{
		if(arr[i]>arr[i+1])
		{
			int tmp = arr[i];
			arr[i]=arr[i+1];
			arr[i+1]=tmp;
		}
	}
	}

	//Step 3: Printing the sorted array
	printf("Here is the sorted array\n");
	for(int i=0;i<size;i++)
	{
		printf("%i ",arr[i]);
	}
}
