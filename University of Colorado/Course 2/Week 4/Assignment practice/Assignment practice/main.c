#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

/*
Get numbers and print number of numbers and average
*/

int main(void) {

	int input;
	int sum;
	int i;

	printf("Enter positive integer: ");
	scanf("%d", &input);
	sum = input;

	for (i=0;; i++) {
		if (input == -1) {
			break;
		}
		if (input != -1) {
			printf("Enter another number: ");
			scanf("%d", &input);
			sum = sum + input;

		}

		
	}
	sum += 1;
	printf("Total numbers: %d\n", i);
	printf("Total sum: %d\n", sum);
	printf("Average: %.2f\n", (float)sum / i);





	return 0;
}