#include <stdio.h>
#include <stdlib.h>

/*
Demonstrates changing the pointed to value
*/

int main(int argc, char** argv) {

	//De3clare and initialize variables and pointers
	int score = 500;
	int* pScore = &score;

	//Display score value
	printf("Score:   %d\n", score);
	printf("Address: %p\n", &score);

	//Change score through pointer
	*pScore += 100;

	//Display modified score value
	printf("\n");
	printf("Score:   %d\n", score);
	printf("Address: %p\n", &score);

	return (EXIT_SUCCESS);
}