/*
* File:   main.c
* Author: Dr. T
*/

#include <stdio.h>
#include <stdlib.h>

#define NUM_VALUES 8

void mergeSort(int array[], int count);
void merge(int array[], int left[], int leftCount, int right[], int rightCount);
void copyRange(int to[], int from[], int start, int end);

void getRandomArray(int array[]);
void printArray(char heading[], int array[], int count);

/*
* Demonstrates merge sort
*/
int main(int argc, char** argv)
{
	int values[NUM_VALUES];

	// merge sort
	getRandomArray(values);
	printf("\n");
	printArray("Unsorted Array", values, NUM_VALUES);
	mergeSort(values, NUM_VALUES);
	printf("\n");
	printArray("Merge Sort Results", values, NUM_VALUES);

	return (EXIT_SUCCESS);
}

/*
* Sets the first 8 elements of the values array
* to random integers
*/
void getRandomArray(int array[])
{
	array[0] = 8;
	array[1] = 3;
	array[2] = 6;
	array[3] = 1;
	array[4] = 9;
	array[5] = 2;
	array[6] = 5;
	array[7] = 7;
}

/*
* Prints the values in the given array
*/
void printArray(char heading[], int array[], int count)
{
	printf("%s\n", heading);
	for (int i = 0; i < count; i++)
	{
		printf("%d", array[i]);
		if (i < count - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}

/*
* Sorts the given array using merge sort
*/
void mergeSort(int array[], int count)
{
	// termination condition when array is a single element
	if (count == 1)
	{
		return;
	}

	// build left and right halves for recursion
	int middleLocation = count / 2;
	//int left[middleLocation];
	// Visual Studio users can't create arrays with sizes determined
	// at run time because of the compiler Visual Studio uses
	int* left = malloc(middleLocation * sizeof(int));
	copyRange(left, array, 0, middleLocation - 1);
	int rightCount = count - middleLocation;
	//int right[rightCount];
	// Visual Studio users can't create arrays with sizes determined
	// at run time because of the compiler Visual Studio uses
	int* right = malloc(rightCount * sizeof(int));
	copyRange(right, array, middleLocation, count - 1);

	// recursively sort both sides
	mergeSort(left, middleLocation);
	mergeSort(right, rightCount);

	// merge the two halves together and return
	merge(array, left, middleLocation, right, rightCount);

	// Visual Studio, free memory
	free(left);
	left = NULL;
	free(right);
	right = NULL;
}

/*
* Copies the elements from start to end from the from array
* into the to array
*/
void copyRange(int to[], int from[], int start, int end)
{
	int fromIndex = start;
	for (int i = 0; i < (end - start + 1); i++)
	{
		to[i] = from[fromIndex];
		fromIndex++;
	}
}

/*
* Merges the left and right arrays into the given array
*/
void merge(int array[], int left[], int leftCount, int right[], int rightCount)
{
	int resultIndex = 0;

	// loop continues while both left and right have at least one element
	int leftIndex = 0;
	int rightIndex = 0;
	while (leftIndex < leftCount &&
		rightIndex < rightCount)
	{
		// add appropriate element to result
		if (left[leftIndex] <= right[rightIndex])
		{
			array[resultIndex] = left[leftIndex];
			leftIndex++;
		}
		else
		{
			array[resultIndex] = right[rightIndex];
			rightIndex++;
		}
		resultIndex++;
	}

	// copy rest of left or right array as appropriate
	while (leftIndex < leftCount)
	{
		array[resultIndex] = left[leftIndex];
		leftIndex++;
		resultIndex++;
	}
	while (rightIndex < rightCount)
	{
		array[resultIndex] = right[rightIndex];
		rightIndex++;
		resultIndex++;
	}
}
