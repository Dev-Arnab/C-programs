#include <stdio.h>
#include <stdlib.h>

/*
Demonstrates walking an array with pointers
*/

int main(int argc, char** argv) {

	//Initialize variable
	int scores[4] = { 70, 80, 90, 100 };
	int size = sizeof(scores) / sizeof(scores[0]);

	//Print out scores
	for (int i = 0; i < size; i++) {
		printf("Address: %p\n", &scores[i]);
		printf("Score_%d: %d\n", i + 1, scores[i]);
	}

	//Display array contents using pointer
	int* pScores = &scores[0];
	printf("\n");

	for (int i = 0; i < size; i++) {
		//printf("Element address: %p\n", pScores);
		//printf("Score_%d: %d\n", i + 1, *pScores);
		//pScores++;
		//printf("Element address: %p\n", pScores + i);
		//printf("Score_%d: %d\n", i + 1, *(pScores + i));
		printf("Element address; %p\n", pScores + i);
		printf("Score_%d: %d\n", i+1, pScores[i]);
	}

	//Show the above code in float
	//Initialize variable
	double double_scores[4] = { 200.0, 190.0, 190.0, 180.0 };
	int double_size = sizeof(double_scores) / sizeof(double_scores[0]);
	printf("\n\n");

	//Print out scores
	for (int i = 0; i < size; i++) {
		printf("Address: %p\n", &double_scores[i]);
		printf("Score_%d: %f\n", i + 1, double_scores[i]);
	}

	//Display array contents using pointer
	double* pdouble_scores = &double_scores[0];
	printf("\n");

	for (int i = 0; i < size; i++) {
		printf("Element address: %p\n", pdouble_scores);
		printf("Score_%d: %f\n", i + 1, *pdouble_scores);
		pdouble_scores++;
	}



	return (EXIT_SUCCESS);
}