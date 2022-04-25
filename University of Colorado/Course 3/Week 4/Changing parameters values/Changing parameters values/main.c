#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

void swap_values(int *first_value, int *second_value);

/*
Swap two values
*/

int main(void) {

	int value_1 = 5;
	int value_2 = 10;

	printf("Before swap\n");
	printf("-----------\n");
	printf("Value_1: %d\n", value_1);
	printf("Value_2: %d\n", value_2);

	swap_values(&value_1, &value_2);

	printf("\n\n");
	printf("After swap\n");
	printf("----------\n");
	printf("Value_1: %d\n", value_1);
	printf("Value_2: %d\n", value_2);






	return (EXIT_SUCCESS);
}

/*
Swaps the two values
*/
void swap_values(int *first_value, int *second_value) {

	int temp;
	temp = *second_value;
	*second_value = *first_value;
	*first_value = temp;
	

}