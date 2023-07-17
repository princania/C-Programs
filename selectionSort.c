#include <stdio.h>

void printarray(int size, int arr[])
{
	for(int i=0; i<size; i++)
	{
		printf("%i ",arr[i]);
	}
	printf("\n");
}

void main(void)
{
	int size;
	printf("Enter the number of elements.\n");
	scanf("%i",&size);

	int arr[size];

	printf("Enter the elements.\n");
	//Input the elements.
	for(int i=0; i<size; i++)
	{
		scanf("%i",&arr[i]);
	}
	
	printf("Unsorted array list:\n");
	printarray(size,arr);

	int smallest; //to store the index of the smallest number.

	for(int i=0; i<size; i++)
	{
		smallest = i;
		for(int j=i; j<size; j++)
		{
			if(arr[j]<arr[smallest]) //searching for the index of the smallest number.
			{
				smallest = j;
			}
		}
		//swapping the value with the smallest number.
		int temp = arr[smallest];
		arr[smallest]=arr[i];
		arr[i]=temp;
	}
	printf("Sorted array list:\n");
	printarray(size,arr);

}
