#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
Demonstrates array analysis
*/

int main(void) {

	int score[4];
	int sum = 0;
	int n = sizeof(score) / sizeof(score[0]);

	//Take input from user
	for (int i = 0; i < sizeof(score) / sizeof(score[0]); i++) {
		printf("Enter score: ");
		scanf("%d", &score[i]);
		sum += score[i];

		if (score[i] < 0 || score[i] > 100) {
			printf("\n");
			printf("Score must be between 1 and 100.\n");
			printf("Enter score: ");
			scanf("%d", &score[i]);
		}
	}

	//Calculate mean
	float mean = (float)sum / n;

	//Calculate standard deviation
	//Sum squares of difference of each data point from mean
	//Divide by size
	//Take square root
	float sum_of_squared_difference = 0;
	for (int i = 0; i < n; i++) {
		sum_of_squared_difference = sum_of_squared_difference + powf(score[i] - mean, 2);
	}
	float stdev = sqrt(sum_of_squared_difference / (n - 1));

	//Print scores
	printf("\n\n");
	for (int i = 0; i < sizeof(score) / sizeof(score[i]); i++) {
		printf("Score_%d: %d\n", i + 1, score[i]);
	}


	//Print mean and standard deviation
	printf("\n\n");
	printf("Sum: %d\n", sum);
	printf("Required mean is: %.2f\n", mean);
	printf("Required standard deviation: %.2f\n", stdev);





	return 0;
}