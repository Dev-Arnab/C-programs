#include <stdio.h>
#include <stdlib.h>
#define MAX_SCORE 100000

/*
Declare floating-point variables and diaplay output of floating-point operations
*/

int main(void) {

	//Output a score
	int score = 48709;
	printf("Score: %d\n", score);

	//Output a percentage
	float percent = (float)(score * 100) / MAX_SCORE;
	printf("Percentage: %.2f\n", percent);

	//Output a round percentage
	printf("Round percentage: %.0f", percent);


	return 0;
}