#include <stdio.h>
#include <stdio.h>
#include <math.h>

/*
Calculate floor and ceiling for positive numbers
*/

int main(void) {

	//initialize variable
	float x;

	//Take input from user
	printf("Enter a floating point number: ");
	scanf_s("%f", &x);
	printf("\n");

	//Calculate and print floor
	printf("Floor: %d\n", (int)x);

	//Calculate and print ceiling
	printf("Ceiling: %d\n", (int)(x + 0.99));

	//Calculate and print floor and ceiling using math.h
	printf("\n\n");
	printf("Floor using math.h: %d\n", (int)floorf(x));
	printf("Ceiling using math.h: %d\n", (int)ceilf(x));




	return 0;
}