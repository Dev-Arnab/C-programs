#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define TIME_TO_MOVE 3

#ifndef M_PI//It means if M_PI is not defined then the following line will define it
#define M_PI 3.14159265358979323846
#endif

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

	//Calculate distance, speed and direction between the two points
	float delta_x = x_two - x_one;
	float delta_y = y_two - y_one;
	float distance = sqrtf(powf(delta_x, 2) + powf(delta_y, 2));
	float speed = distance / TIME_TO_MOVE;
	float direction = atan2f(delta_y, delta_x);//It is inverse function od tangent
	direction *= 180 / M_PI;//Same as direction = ((direction * 180) / M_PI);


	//Print out speed and direction between two points
	printf("\n\n");
	printf("Speed: %.2f\n", speed);
	printf("Direction: %.2f\n", direction);


	return 0;
}