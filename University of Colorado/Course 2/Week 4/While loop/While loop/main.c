#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

/*
Demonstrate while loop
*/

int main(void) {

	int score;

	//prompt for and get score
	printf("Enter test score(1-100) ");
	scanf("%d", &score);

	//validate score
	while (score < 0 || score>100) {
		//print error message and get new score
		printf("\n");
		printf("Score must be between 0 and 100.\n");
		printf("Enter test score(1-100):");
		scanf("%d", &score);
	}





	return 0;
}