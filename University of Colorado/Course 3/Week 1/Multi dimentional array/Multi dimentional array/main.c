#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

/*
Demonstrate multidimensional array
*/

int main(void) {

	//calculate and store multiplication table
	int table[3][5];

	for (int i = 0; i < 3; i++) {

		for (int j = 0; j < 5; j++) {

			table[i][j] = (i + 1) * (j + 1);
		}
	}

	//Output multiplication table
	//Print header
	printf("     ");
	for (int i = 1; i <= sizeof(table[0]) / sizeof(table[0][0]); i++) {

		printf("%5d", i);
	}

	printf("\n");

	//Print multiplication array
	for (int i = 1; i <= sizeof(table) / sizeof(table[0]); i++) {
		printf("%5d", i);

		for (int j = 1; j <= sizeof(table[0]) / sizeof(table[0][0]); j++) {
			printf("%5d", table[i - 1][j - 1]);
		}
		printf("\n");
	}


	return 0;
}