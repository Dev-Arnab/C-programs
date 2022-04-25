#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


/*
Implimenting basic floating point calculation
*/

int main(void) {

	//declare variables
	float far_in;
	float cel_out;
	float far_out;

	//input temperature and print it
	scanf("%f", &far_in);
	printf("The given temperature in farenheit is: %f\n", far_in);
	
	//print the temperature in celcius
	cel_out = (100 * (far_in - 32)) / 180;
	printf("The temperature in celcius: %f\n", cel_out);

	//convert the celcius to farenheit and print it
	far_out = ((cel_out * 180) / 100) + 32;
	printf("The temperature in farenheit is: %f\n", far_out);


	return 0;
}