#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include<stdlib.h>

/*
Find minimum and maximun from an array
*/

int main(void) {

	//int score[5];
	int n;

	
	//Take number of inputs from user

	printf("Input number of inputs: ");
	scanf("%d", &n);
	printf("\n");

	while (n > 10 || n < 5) {
		printf("Number of scores must be between 5 and 10.\n");
		printf("Number of scores: ");
		scanf("%d", &n);
	}

	int* score = malloc(n * sizeof(int));

	int min_score = score[0];
	int max_score = score[0];

	//Take input from user and input validation
	for (int i = 0; i < n; i++) {
		printf("Enter scores between 0 and 100.\n");
		printf("Enter score_%d: ", i + 1);
		scanf("%d", &score[i]);

		while (score[i] < 0 || score[i] > 100) {
			printf("Score must be between 0 and 100.\n");
			printf("Enter score_%d: ", i + 1);
			scanf("%d", &score[i]);
		}

		
		if (score[i] > max_score) {
			max_score = score[i];

		}

		if (score[i] < score[0]) {
			min_score = score[i];
		}
	}

	printf("\n\n");
	printf("Maximum score: %d\n", max_score);
	printf("Minimun score: %d\n", min_score);





	return 0;
}