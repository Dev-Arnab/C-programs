#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

/*
Demonstrate arrays
*/

int main(void) {

	int score[5];

	//fill the arrays with test scores
		for (int i = 0; i < 5; i++) {
			printf("Enter score %d: ", i + 1);
			scanf("%d", &score[i]);

			while (score[i] < 0 || score[i] > 100) {
				printf("\n");
				printf("Score must be between 0 and 100.\n");
				printf("Enter score %d: ", i + 1);
				scanf("%d", &score[i]);
			}
		}

		//print array
		printf("\n\n");
		for (int i = 0; i < 5;i++) {
			printf("Score %d: %d\n", i + 1, score[i]);
		}

	return 0;
}