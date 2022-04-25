#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

/*
Print even numbers in user-specified range
*/

int main(void) {

	//integer declaration
	int n;

	//prompt for and take user specified range
	printf("Input the range of even number: ");
	scanf("%d", &n);

	//for loop
	for (int i = 0; i <= n; i++) {
		if (i % 2 == 0) {
			printf("%d\n", i);
		}
	}
	printf("\n\n");

	//Print a row of asterisks that are a user-specified max width
	int x;
	printf("Input the width: ");
	scanf("%d", &x);

	for (int i = 1; i <= x; i++) {
		printf("*\t");
	}
	printf("\n\n");

	//3rd
	int row;
	int width;
	printf("Input number of rows: ");
	scanf("%d", &row);
	printf("\n");
	printf("Input number of width:");
	scanf("%d", &width);

	//loop
	for (int i = 1; i <= row; i++) {
		for (int a = 1; a <= width; a++) {
			printf("*\t");
		}
		printf("\n");
	}
	printf("\n\n");


    //4th
	int a;
	printf("Enter number of rows: ");
	scanf("%d", &a);
	printf("\n");

	for (int i = 1; i <= a; i++) {
		for (int j = 1; j <=i; j++) {
			printf("*");
		}
		printf("\n");
	}


	return 0;
}