#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

/*
Demonstrations of array initiallization
*/

int main(void) {

	int score[5] = {0};

	//print score
	for (int i = 1; i <= 5; i++) {
		printf("Score %d is %d\n", i, score[i - 1]);
	}





	return 0;
}