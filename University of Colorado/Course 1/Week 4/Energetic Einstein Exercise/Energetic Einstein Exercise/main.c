#include <stdio.h>
#include <stdlib.h>;
#include <math.h>

/*
Calculate energy from mass
*/

int main(void) {

	//Declare constants and variables
	int c = (3 * pow(10,8));
	float m;

	//Take input from user
	printf("Enter mass in kg: \n");
	scanf_s("%f", &m);

	//Calculate and print energy
	float E;
	E = m * pow(c, 2);
	printf("Energy in joule is %.2f", E);



	return 0;
}