#include <stdio.h>
#include <stdlib.h>

/*
Demonstrate floating point data types
*/

int main(void) {

	//collected data
	int hours_driven = 5;
	int miles_driven = 262;

	//calculate and print miles per hour
	float mph = (float)miles_driven / (float)hours_driven;//Here the data type is not changed, it just converts integer to float for this calculation. And it will be enough to convert only one to float, there is no need to convert both of them to floating point numbers
	printf("MPH: %8.1f\n", mph);//The 8 before the decimal point defines the width of the output

	return 0;
}