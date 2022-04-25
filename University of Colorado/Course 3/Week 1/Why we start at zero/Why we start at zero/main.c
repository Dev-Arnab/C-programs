#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

/*
Demonstrating why we start indexing at zero
*/

int main(void) {

	int score[] = { 100, 95, 90, 85, 80 };

	//Output array information
	for (int i = 0; i < 5; i++) {
		printf("Score[%d] Address: %p Contents: %d\n", i, &score[i], score[i]);
	}





	return 0;
}