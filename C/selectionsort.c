#include <stdio.h>

int selectionSort(int arr[], int n)
{
	int i, j, min_idx,temp;
	// One by one move boundary of unsorted subarray
	for (i = 0; i < n-1; i++)
	{
		// Find the minimum element in unsorted array
		min_idx = i;
		for (j = i+1; j < n; j++)
		if (arr[j] < arr[min_idx])
			min_idx = j;

        //swap
        temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;

	}
    return 0;
}

//Function to print an array
int printArray(int arr[], int size)
{
	int i;
	for (i=0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
    return 0;
}

//main program
int main()
{
	int arr[] = {64, 25, 12, 22, 11};
	int n = sizeof(arr)/sizeof(arr[0]);
    printf("original array: \n");
	printArray(arr, n);
	selectionSort(arr, n);
	printf("\nSorted array: \n");
	printArray(arr, n);
	return 0;
}
