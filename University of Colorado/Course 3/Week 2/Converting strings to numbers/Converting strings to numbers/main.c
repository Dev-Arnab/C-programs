#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Demonstrate converting strings to numbers
*/

int main(void) {

	char floatStringData[100];
	float floatData;

	//read in float data
	printf("Enter floating point data: ");
	fgets(floatStringData, sizeof(floatStringData), stdin);

	printf("Float string data: %s\n", floatStringData);

	//Convert and print float data
	floatData = atof(floatStringData);
	printf("Float data: %f.\n", floatData);

	printf("\n\n");
	char intStringData[100];
	int intData;

	//Read in int data
	printf("Enter integer data: ");
	fgets(intStringData, sizeof(intStringData), stdin);

	printf("Int string data: %s\n", intStringData);

	//Convert and print integer data
	intData = atoi(intStringData);
	printf("Integer data: %d", intData);


	return NULL;
}