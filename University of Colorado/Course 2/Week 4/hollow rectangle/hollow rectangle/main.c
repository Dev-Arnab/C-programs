#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

/*
Build a rectangle within a range using asterisks by while and for loops
*/

int main(void) {

	//initializing variable
	int width;
	int height;

	//Prompt for and take input from user
	printf("Enter width (1-20): ");
	scanf("%d", &width);
	printf("Enter height (1-10): ");
	scanf("%d", &height);

	//user input validation
	while (width > 20 || height > 10) {
		printf("Wrong!!! Please enter values with the limit.\n");
		printf("Width (1-20): ");
		scanf("%d", &width);
		printf("Height (1-10): ");
		scanf("%d", &height);
	}

	//print the rectangle
	for (int i = 1; i <=width ; i++) {
		printf("*\t");
	}
	
	printf("\n");

	for (int i = 1; i <= height - 2; i++) {
		printf("*");
		for (int j = 1; j <= width - 1; j++) {
			printf("\t");
		}
		printf("*\n");
	}


	for (int x = 1; x <= width; x++) {
		printf("*\t");
	}

	return 0;
}