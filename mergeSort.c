#include <stdio.h>

void printarray(int arr[], int size);
void mergeSort(int arr[], int first, int last)

void main()
{
	//Asking user for the unsorted array
	printf("Enter the size of the array\n");
	int size;
	scanf("%i",&size);
	int arr[size];
	printf("Enter the elements of the array\n");
	for(int i=0;i<size;i++)
	{
		scanf("%i",&arr[i]);
	}
	printf("You entered:\n");
	printarray(arr, size);
	mergeSort(arr, 0, size-1);
}

void mergeSort(int arr[], int first, int last)
{
	int f = first;
	int l = last;
	int mid;
	if(f!=l)
	{
		mid = (f+l)/2;
	}
}

void printarray(int arr[], int size)
{
	for(int i=0;i<size;i++)
	{
		printf("%i ",arr[i]);
	}
	printf("\n");
}
