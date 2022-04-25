#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

#define EXPAND_MULTIPLY_FACTOR 2

#define ADD_VALUE 1
#define REMOVE_VALUE 2
#define FIND_VALUE 3
#define PRINT_COUNT 4
#define PRINT_VALUES 5
#define QUIT 6

#define FUNCTION_FAIL 0
#define FUNCTION_SUCCESS 1
#define VALUE_NOT_FOUND -1

//Dynamic array data
//We use a pointer here, but we can traet values as
//an array throughout our code
int* values;
int count = 0;
int capacity = 4;

int get_valid_integer(char promp_string[], char error_string[],
	int lower_bound, int upper_bound);
void print_operation_menu();
int get_operation();
int add_value(int value);
int find_value(int value);
int remove_value(int value);
void print_value();

/*
Demonstrates dynamic array operations
*/

int main(void) {

	//Create initial array
	values = malloc(capacity * sizeof(int));

	if (values == NULL) {
		printf("Fatal error, unable to allocate memory for values.\n");
		return (EXIT_FAILURE);
	}

	int operation = -1;

	while (operation != QUIT) {

		operation = get_operation();

		if (operation == ADD_VALUE) {
			int value = get_valid_integer("Enter value to add (0-100):",
				"Value must be between 0 and 100", 0, 100);
			printf("\n");

			if (!add_value(value)) {
				printf("Fatal error, unable to allocate memory for values.\n");
				return(EXIT_FAILURE);
			}
			else {
				printf("%d added\n", values[count - 1]);
			}
		}
		else if (operation == REMOVE_VALUE) {
			int value = get_valid_integer("Enter value to add (0-100):",
				"Value must be between 0 and 100", 0, 100);
			printf("\n");

			if (!remove_value(value)) {
				printf("%d not removed (not found)\n", value);
			}
			else {
				printf("%d removed\n", value);
			}
		}
		else if (operation == FIND_VALUE) {
			int value = get_valid_integer("Enter value to add (0-100):",
				"Value must be between 0 and 100", 0, 100);
			int result = find_value(value);
			printf("\n");

			if (result!=VALUE_NOT_FOUND) {
				printf("%d found at location %d.\n",value, result+1);
			}
			else {
				printf("%d not found\n", value);
			}
		}
		else if (operation == PRINT_COUNT) {
			printf("\n");
			printf("You have %d vaolues stored.\n", count);
		}
		else if (operation == PRINT_VALUES) {
			print_value();
		}
	}


	return (EXIT_SUCCESS);
}

/*
Get valid integer input from user
*/
int get_valid_integer(char prompt_string[], char error_string[],
	int lower_bound, int upper_bound) {
	int input;

	//Prompt for and get input
	printf(prompt_string);
	scanf("%d", &input);

	//Validate input
	while (input<lower_bound || input>upper_bound) {
		printf("\n");
		printf(error_string);
		printf("\n");
		printf(prompt_string);
		scanf("%d", &input);
	}

	return input;
}

/*
Print the menu of valid operations
*/
void print_operation_menu() {
	printf("\n");
	printf("Operations\n");
	printf("----------\n");
	printf("1. Add Value\n");
	printf("2. Remove Value\n");
	printf("3. Find Value\n");
	printf("4. Print Count\n");
	printf("5. Print Values\n");
	printf("6. Quit\n");

}

/*
Gets the operation the user wants to perform
*/
int get_operation() {

	print_operation_menu();
	printf("\n");
	return get_valid_integer("Select the operation to perform (1-6): ",
		"Operation must be between 1 and 6", 1, 6);
}
/*
Adds the given value to the array
*/
int add_value(int value) {

	//Grow araray if necessary
	if (count == capacity) {
		capacity *= EXPAND_MULTIPLY_FACTOR;
		values = realloc(values, capacity * sizeof(int));

		if (values == NULL) {
			return FUNCTION_FAIL;
		}
	}

	//Add new value
	values[count] = value;
	count++;
	return FUNCTION_SUCCESS;
}

/*
Finds the location of the given value in the array
Return -1 if value is not found
*/
int find_value(int value) {

	for (int i = 0; i < count; i++) {
		if (values[i] == value) {
			return i;
		}
	}

	return VALUE_NOT_FOUND;
}

/*
Removes the given value from the array
*/
int remove_value(int value) {

	int result = find_value(value);

	if (result == VALUE_NOT_FOUND) {
		return FUNCTION_FAIL;
	}
	else {
		values[result] = values[count - 1];
		count--;
		return FUNCTION_SUCCESS;
	}
}

/*
Print the values in the array
*/
void print_value() {

	printf("\n");
	printf("Values: ");

	for (int i = 0; i < count; i++) {
		printf("%5d", values[i]);
	}
}