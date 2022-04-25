#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define TIME_TO_MOVE 3

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

/*
Calculate velocity and direction between two user defined co-ordinated
*/

int main(void) {

	typedef struct vector vector;

	struct vector {
		float x;
		float y;
	};

	//Initialize variables
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


	//calculate deltas
	float delta_x = x_two - x_one;
	float delta_y = y_two - y_one;

	//Calculate and print velocity vector
	vector velocity;
	velocity.x = delta_x / TIME_TO_MOVE;
	velocity.y = delta_y / TIME_TO_MOVE;
	printf("Velocity vector: (%.2f,%.2f)", velocity.x, velocity.y);

	//Calculate distance, speed and direction

	float distance = sqrtf(powf(delta_x, 2) + powf(delta_y, 2));
	float speed = distance / TIME_TO_MOVE;
	float direction = atan2f(delta_y,delta_x);
	direction *= 180 / M_PI;

	//Print speed an direction
	printf("\n\n");
	printf("Speed: %.2f\n", speed);
	printf("Direction: %.2f", direction);

	//Another method to calculate velocity vector
	printf("Another method to calculate velocity vector\n");

	//calciulate unit direction vector
	vector unit_direction;
	unit_direction.x = delta_x;
	unit_direction.y = delta_y;
	float length = sqrtf(powf(unit_direction.x, 2) + powf(unit_direction.y, 2));
	unit_direction.x /= length;
	unit_direction.y /= length;

	//calculate and print velocity vector
	velocity.x = unit_direction.x * speed;
	velocity.y = unit_direction.y * speed;
	printf("Velocity vector: (%.2f,%.2f)\n", velocity.x, velocity.y);




	return 0;
}