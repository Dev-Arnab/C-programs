#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


/*
Print positive number
*/

int main(void) {

	float x;

	printf("Enter a number: ");
	scanf("%f", &x);

	if (x > 0) {
		printf("You entered a positive number.\n");
	}
	else if (x == 0) {
		printf("You entered a non-negativ number.\n");
	}
	else {
		printf("You entered a negative number.\n");
	}



	return 0;
}