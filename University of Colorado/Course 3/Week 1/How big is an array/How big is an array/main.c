#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

/*
Demonstrate array size retrival
*/

int main(void) {

	int score[5];

	/*
	int n;

	//get valid arrat size
	printf("Number of scores to enter(1-5): ");
	scanf("%d", &n);

	while (n < 1 || n>5) {
		printf("\n");
		printf("Number of scores must be between 1 and 5.\n");
		printf("Number of scores to enter(1-5): ");
		scanf("%d", &n);
	}
	*/

	//declare array and demonstrate size calculations
	printf("\n");
	//int score[n];
	printf("Total array size: %lu\n", sizeof(score));
	printf("Array element size: %lu\n", sizeof(score[0]));
	printf("Number of array elements: %lu\n", sizeof(score) / sizeof(score[0]));
	printf("\n\n");

	//Read in scores
	for (int i = 0; i < sizeof(score) / sizeof(score[0]); i++) {
		printf("Enter score_%d: ", i + 1);
		scanf("%d", &score[i]);

		if (score[i] < 0 || score[i] > 100) {
			printf("\n");
			printf("Score must be between 0 and 100.\n");
			printf("Enter score_%d: ", i + 1);
			scanf("%d", &score[i]);
		}
	}

	//Print in score
	for (int i = 0; i < sizeof(score) / sizeof(score[0]); i++) {
		printf("\n\n");
		printf("Score_%d: %d\n", i + 1, score[i]);
	}


	return 0;
}