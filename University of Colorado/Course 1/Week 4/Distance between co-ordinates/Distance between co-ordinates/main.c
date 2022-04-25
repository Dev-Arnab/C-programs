#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
Calculate distance between two user-defined co-ordinates
*/

int main(void) {

	//Initializing variables
	float x_one;
	float y_one;
	float x_two;
	float y_two;

	//Take input from user
	printf("Enter x for first point: \n");
	scanf_s("%f", &x_one);
	printf("Enter y for first point: \n");
	scanf_s("%f", &y_one);
	printf("Enter x for second point: \n");
	scanf_s("%f", &x_two);
	printf("Enter y for second point: \n");
	scanf_s("%f", &y_two);

	//Calculate and print distance between the two points
	float distance = sqrtf(powf(x_two - x_one, 2) + powf(y_two - y_one, 2));
	printf("\n\n");
	printf("Distamce between the points: %.2f", distance);

	return 0;
}