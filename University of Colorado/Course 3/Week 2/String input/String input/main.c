#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Demonstrate string input using function
*/

int main(void) {

	char data[100];

	printf("Enter x and y (no spaces, comma-separated): ");
	
	//fgets is a function to input string
	//3 conditions
	//string, size of string and input method(stdin means input of keyboard)
	fgets(data, sizeof(data), stdin);

	//printf string
	printf("Output: %s\n", data);


	return NULL;
}