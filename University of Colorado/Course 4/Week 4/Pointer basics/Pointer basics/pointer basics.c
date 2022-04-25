#include <stdio.h>
#include <stdlib.h>

/*
Demonstrates basics of pointers
*/

int main(int argc, char** argv) {

	int score = 500;

	//Declare variables and display information
	printf("Score value:          %d\n", score);
	printf("Score address:        %p\n", &score);
	printf("Size of score:        %d\n", sizeof(score));

	//Declare pointer and display information
	int* pScore = &score;

	printf("\n");
	printf("Score pointer value:  %p\n", pScore);
	printf("Score value:          %d\n", *pScore);


	return (EXIT_SUCCESS);
}