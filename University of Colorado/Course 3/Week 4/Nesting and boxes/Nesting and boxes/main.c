#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int get_valid_input(char prompt_string[], char error_string[],
	int lower_bound, int upper_bound);

void print_character(char character, int num_times);

void print_box_interior(int width, int height);


/*
Print a box
*/

int main(void) {

	int height;
	int width;

	//Get valid width and height from user
	width = get_valid_input("Enter width (3-20): ", "Width must be betwee 3 and 20",
		3, 20);

	height = get_valid_input("Enter height (3-20): ", "Height must be between 3 and 20",
		3, 20);

	//Print top of box
	printf("\n");
	print_character('*', width);
	printf("\n");

	//print inerior of the box
	print_box_interior(width, height);

	//Print bottom of the box
	print_character('*', width);
	printf("\n");






	return (EXIT_SUCCESS);
}

int get_valid_input(char prompt_string[], char error_string[],
	int lower_bound, int upper_bound) {

	int input;

	//prompt for and get input
	printf(prompt_string);
	scanf("%d", &input);

	//Input validation
	while (input < lower_bound || input > upper_bound) {

		printf("\n");
		printf(error_string);
		printf("\n");
		printf(prompt_string);
		scanf("%d", &input);
	}

	return input;
}

/*

*/
void print_character(char character, int num_times) {

	for (int i = 0; i < num_times; i++) {
		printf("%c", character);
	}
}

/*
Prints the interior of the box
*/
void print_box_interior(int width, int height) {

	for (int i = 2; i < height; i++) {
		print_character('*', 1);
		print_character(' ', width - 2);
		print_character('*', 1);
		printf("\n");
	}
}