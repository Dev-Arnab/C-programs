#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

/*
Demonstrates dynamic memory allocation
*/

int main(int argc, char** argv) {
	
	int count;

	//Get valid array size
	printf("Number of scores to enter (1-5): ");
	scanf("%d", &count);

	while (count < 1 || count>5) {

		printf("\n");
		printf("Number of scirea must be between 1 and 5!!\n");
		printf("Number of scores to enetr (1-5): ");
		scanf("%d", &count);
	}

	//Allocate memory for scores
	int* pScores = malloc(count * sizeof(int));

	//Check for failure memory allocation
	if (pScores == NULL) {
		return (EXIT_FAILURE);
	}

	//Read in scores
	for (int i = 0; i < count; i++) {
		//Prompt for and get valid test score
		printf("Enter score_%d (0-100): ", i + 1);
		scanf("%d", pScores + i);

		while (*(pScores + i) < 0 || *(pScores + i) > 100) {
			printf("\n");
			printf("Score must be between 0 and 100\n");
			printf("Enter score_%d (0-100): ", i + 1);
			scanf("%d", pScores + i);
		}
	}

	//Print test scores
	printf("\n");

	for (int i = 0; i < count; i++) {
		printf("Score_%d: %d\n", i + 1, *(pScores + i));
	}

	//Free memory
	free(pScores);
	pScores = NULL;


	return (EXIT_SUCCESS);
}