#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int factorial(int n);
int loop_factorial(int n);

/*
Demonstrates factorial calculation using both recursion and a lpoop
*/
int main(void) {

	//Calculates factorials until user enters a negative number
	int n = 0;

	while (n >= 0) {
		//Prompt for and get input
		printf("Enter n for factorial calculation (negative nunber to quit:)");
		scanf("%d", &n);

		if (n >= 0) {
			printf("\n");
			printf("Factorial calculated recursively: %d\n", factorial(n));
			printf("Factorial calculated with a loop: %d\n", loop_factorial(n));
			printf("\n");
		}
	}



	return (EXIT_SUCCESS);
}

/*
Calculates factorial recursively
*/
int factorial(int n) {
	//Check for termination condition
	if (n == 0) {
		return 1;
	}
	else {
		return n * factorial(n - 1);
	}
}

/*
Calculates factorial using a loop
*/
int loop_factorial(int n) {
	int factorial = 1;

	for (int i = 1; i <= n; i++) {
		factorial *= i;
	}
	return factorial;
}