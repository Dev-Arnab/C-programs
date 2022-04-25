#include <stdio.h>
#include <stdlib.h>

void do_even_binary_search();
void do_odd_binary_search();
int binary_search(int search_value, int search_array[], int upper_bound, int lower_bound);

/*
Demonstrates binary search using recursion
*/

int main(int argc, char** argv) {

	do_even_binary_search();
	do_odd_binary_search();


	return (EXIT_SUCCESS);
}

/*
Performs binary search of an even-sized array
*/
void do_even_binary_search() {

	int search_array[] = { 1,3,4,12,17,21,33,42,42,42, };
	int search_array_size = sizeof(search_array) / search_array[0];

	printf("Even array, value in array\n");

	int result = binary_search(3, search_array, 0, search_array - 1);
	if (result != -1) {
		printf("Found value at %d\n", result);
	}
	else {
		printf("Didn't find value\n");
	}

	printf("\n");

	printf("Even array, value not in array\n");
	result = binary_search(43, search_array, 0, search_array_size - 1);

	if (result != -1) {
		printf("Found value at %d\n", result);
	}
	else {
		printf("Didn't find value\n");
	}

	printf("\n");
}
/*
Performs binary search of an odd-sized array
*/
void do_odd_binary_search() {
	int search_array[] = { 1,3,5,12,17,21,33,42,42,42,42 };
	int search_array_size = sizeof(search_array) / sizeof(search_array[0]);

	printf("Odd array, value in array\n");

	int result = binary_search(3, search_array, 0, search_array_size - 1);

	if (result != -1) {
		printf("Found value at %d\n", result);
	}
	else {
		printf("Didn't find value\n");
	}
	printf("\n");

	printf("Odd array, value not in array\n");

	result = binary_search(43, search_array, 0, search_array_size - 1);

	if (result != -1) {
		printf("Found value at %d\n", result);
	}
	else {
		printf("Didin't find value\n");
	}
	
	printf("\n");
}
/*
Performs a binary search for given value
*/
int binary_search(int search_value, int search_array[], int upper_bound, int lower_bound) {

	//Check exhausted array termination condition
	if (lower_bound > upper_bound) {
		return -1;
	}

	//Check found value termination condition
	int middle_location = lower_bound + (upper_bound - lower_bound) / 2;
	int middle_value = search_array[middle_location];

	if (middle_value == search_value) {
		return middle_location;
	}

	//Do recursive call on appropriate part of array
	if (middle_value > search_value) {
		return binary_search(search_value, search_array, lower_bound, upper_bound, middle_location - 1);
	}
	else {
		return binary_search(search_value, search_array, middle_location + 1, upper_bound);
	}
}