#include <stdio.h>
#include <stdlib.h>

float average_scores(int one, int two);
float average_array(int score[], int count);

/*
Demonstrates functions with parameters
*/

int main(void) {

	int score_1 = 100;
	int score_2 = 99;
	int score[] = { 300, 200, 100 };
	int count = sizeof(score) / sizeof(score[0]);

	//Calculate and print average of two scores
	float average_score = average_scores(score_1, score_2);

	printf("Average of %d and %d is: %.2f.\n", score_1, score_2, average_score);

	//Calculate and print average of two scores array

	//average_array(score, count);

	printf("Average of array is: %.2f\n", average_array(score, count));



	return 0;
}

/*
Aveage of scores
*/
float average_scores(int one, int two) {

	return ((float)(one + two) / 2);
}

/*
Average of array
*/
float average_array(int score[], int count) {

	int sum = 0;
//	int count = 0;

	for (int i = 0; i < count; i++) {

		sum += score[i];

	}

	return ((float)sum / count);
}