#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

/*
Demonstrate array size using pointers
*/

int main(void) {

	//int score[5];

	int n;

	//get valid array size
	printf("Number of scores to enter (1-5): ");
	scanf("%d", &n);

	if (n < 1 || n > 100) {
		printf("\n");
		printf("Number of scores must be between 1 and 5.\n");
		printf("Number of scores to enter (1-5): ");
		scanf("%d", &n);
	}

	//Visual Studio Users can't create arrays with sizes based
	//on user unout becaus of the compiler Visual Stdio user

	/*

	int score[n];
	printf("Total array size: %lu\n", sizeof(score));
	printf("Array element size: %lu\n", sizeof(score[0]));
	printf("Number of array elements: %lu\n", sizeof(score) / sizeof(score[0]));
	printf("\n\n");

	*/

	//We can'r use sizeof on a pointer to find out how
	//much memory was allocated for the pointer
	int* score = malloc(n * sizeof(int));
	printf("Totla array size: %lu\n", n * sizeof(int));
	printf("Array element size: %lu\n", sizeof(score[0]));
	printf("Number of array elements: %lu\n", n * sizeof(int) / sizeof(score[0]));
	printf("\n\n");

	//Read scores
	//for(int i=0;i<sizeof(score)/sizeof(score[0]);i++)
	for (int i = 0; i < n; i++) {
		//prompt for and get valid input
		printf("Enter score_%d: ", i+1);
		scanf("%d", &score[i]);

		while (score[i] < 0 || score[i] > 100) {
			printf("\n");
			printf("Score must be between 0 and 100.\n");
			printf("Enter score_%d: ", &score[i]);
		}
	}

	//Print test scores
	printf("\n\n");
	//for(int i = 0; i < sizeof (score) / sizeof(score[0]); i++)
	for (int i = 0; i < n; i++) {
		printf("Score_%d: %d\'n", i + 1, score[i]);
	}

	//It's always good practice to free memory and null pointers
	//ehen you are done with them
	//free(score);
	//score = NULL;






	return 0;
}