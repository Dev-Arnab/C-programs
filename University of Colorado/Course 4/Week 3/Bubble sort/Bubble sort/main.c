#define _CRT_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define NUM_VALUES 8

#define PRINT_DEBUG_INFO true

void bubble_sort(int array[], int count);
void selection_sort(int array[], int count);
void insertion_sort(int array[], int count);

void get_random_array(int array[]);
void print_array(char heading[], int array[], int count);
void print_array_elements(int array[], int count);

void swap_elements(int first_location, int second_location, int array[]);

/*
Demonstrates a variety of iterative sorting algorithms
*/

int main(void) {

	int values[NUM_VALUES];

	//Unsorted array
	get_random_array(values);
	print_array("Unsorted Array", values, NUM_VALUES);

	//Bubble sort
	/**/
	bubble_sort(values, NUM_VALUES);
	printf("\n");
	print_array("Bubble sort result", values, NUM_VALUES);

	//Selection sort
	/**/
	get_random_array(values);
	printf("\n");
	print_array("Unsorted Array", values, NUM_VALUES);
	selection_sort(values, NUM_VALUES);
	printf("\n");
	print_array("Selection Sort Results", values, NUM_VALUES);

	//Insertion sort
	/**/
	get_random_array(values);
	printf("\n");
	print_array("Unsorted Array", values, NUM_VALUES);
	insertion_sort(values, NUM_VALUES);
	printf("\n");
	print_array("Insertion Sort Results", values, NUM_VALUES);



	return (EXIT_SUCCESS);
}

/*
Sets the first 8 elements of the values array to random integers
*/
void get_random_array(int array[]) {
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
Prints teh values in the given array
*/
void print_array(char heading[], int array[], int count) {
	printf("%s\n", heading);
	print_array_elements(array, count);
	printf("\n");
}

/*
Prints the array elements as comma-separated values
*/
void print_array_elements(int array[], int count) {
	for (int i = 0; i < count; i++) {
		printf("%d", array[i]);

		if (i < count - 1) {
			printf(", ");
		}
	}
}

/*
Swaps the elements at the forst location and the second location
in the given array
*/
void swap_elements(int first_location, int second_location, int array[]) {
	if (PRINT_DEBUG_INFO) {
		printf("Swapping %d and %d\n", array[first_location], array[second_location]);
	}

	int temp = array[first_location];
	array[first_location] = array[second_location];
	array[second_location] = temp;
}
/*
Sorts the given array using bubble sort
*/
void bubble_sort(int array[], int count) {
	if (PRINT_DEBUG_INFO) {
		printf("\n");
		printf("Bubble sort\n");
		printf("-----------\n");
		printf("\n");
	}

	//Work from right to left
	for (int k = count - 1; k > 0; k--) {
		//Tranverse unsorted portion of array
		for (int i = 0; i < k; i++) {
			if (PRINT_DEBUG_INFO) {
				printf("Comparing array[%d] (%d) to array[%d] (%d)\n",
					i, array[i], i + 1, array[i + 1]);
			}
			
			//Check for swap
			if (array[i] > array[i + 1]) {
				swap_elements(i, i + 1, array);
			}
		}

		if (PRINT_DEBUG_INFO) {
			printf("\n");
			printf("");
			print_array_elements(array, count);
			printf("\n\n");
		}
	}
}

/*
Sorts the given array using selection sort
*/
void selection_sort(int array[], int count) {
	if (PRINT_DEBUG_INFO) {
		printf("\n");
		printf("Selection Sort\n");
		printf("--------------\n");
		printf("\n");
	}

	//Work from left to right
	for (int k = 0; k < count; k++) {
		int min_location = k;

		//Tranverse unsorted portion of array
		for (int i = k + 1; i < count; i++) {
			if (PRINT_DEBUG_INFO) {
				printf("Comparing array[%d] (%d) to array[%d] (%d)\n",
					i, array[i], min_location, array[min_location]);
			}

			//Check for a new minimum location
			if (array[i] < array[min_location]) {
				min_location = i;

				if (PRINT_DEBUG_INFO) {
					printf("New min location: %d\n", min_location);
				}
			}
		}

		//Swap the elements
		swap_elements(k, min_location, array);

		if (PRINT_DEBUG_INFO) {
			printf("\n");
			printf("After Iteration %d: ", k + 1);
			print_array_elements(array, count);
			printf("\n\n");
		}
	}
}

/*
Sorts the given array using insertion sort
*/
void insertion_sort(int array[], int count) {
	if (PRINT_DEBUG_INFO) {
		printf("\n");
		printf("Insertion Sort\n");
		printf("--------------\n");
		printf("\n");
	}

	//Process array from left to right
	for (int k = 1; k < count; k++) {
		//Set new value to be inserted
		int value = array[k];

		if (PRINT_DEBUG_INFO) {
			printf("Inserting %d\n", value);
		}

		//Find insertion point for new vaklue, shifting as we go
		int i = k - 1;
		while (i >= 0 && value < array[i]) {
			if (PRINT_DEBUG_INFO) {
				printf("Shifting %d onto %d\n", array[i], array[i+1]);
			}

			array[i + 1] = array[i];
			i--;
		}

		//Insert new value
		array[i + 1] = value;

		if (PRINT_DEBUG_INFO) {
			printf("\n");
			printf("After iteration %d: ", k);
			print_array_elements(array, count);
			printf("\n\n");
		}
			 

	}
}