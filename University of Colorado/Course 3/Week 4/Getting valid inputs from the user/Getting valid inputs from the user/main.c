#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int get_valid_input(char prompt_string[], char error_string[],
	int lower_limit, int upper_limit);

float average_array(int score[], int count);

/*
Demonstrate input validation using functions
*/

int main(void) {

	//Get number of scores to enter
	int n = get_valid_input("How many scores do you want to enter (1 to 10)? ",
		"Number of scores must be between 1 and 10!", 1, 10);

	//printf("N is %d", n);

	//Read in scores
	//int score[n];
	int* score = malloc(n * sizeof(int));

	for (int i = 0; i < n; i++) {

		score[i] = get_valid_input("Enter score (0 to 100): ",
			"Score must be between 0 and 100!", 0, 100);
	}


	//Print average scores
	printf("Average score: %.2f.\n", average_array(score, n));


	//Free men=mory
	free(score);
	score = NULL;



	return NULL;
}



/*
Get valid integer input from user
*/
int get_valid_input(char prompt_string[], char error_string[],
	int lower_limit, int upper_limit) {

	int input;

	//prompt for get user input
	printf(prompt_string);
	scanf("%d", &input);

	//Validate input
	while (input<lower_limit || input>upper_limit) {
		//Print error message and get new input
		printf("\n");
		printf(error_string);
		printf("\n");
		printf(prompt_string);
		scanf("%d", &input);
	}

}

/*
Average of array
*/
float average_array(int score[], int count) {

	int sum = 0;

	for (int i = 0; i < count; i++) {
		sum += score[i];
	}

	return ((float)sum / count);
}