/*
 * File:   main.c
 * Author: <your name here>
 */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

#define MAX_LENGTH 100

 /*
  * Walking the Walk Programming Assignment
  */
int main(int argc, char** argv)
{
	// IMPORTANT: Only add code in the section
	// indicated below. The code I've provided
	// makes your solution work with the 
	// automated grader on Coursera
	char input[MAX_LENGTH];
	fgets(input, MAX_LENGTH, stdin);
	while (input[0] != 'q')
	{
		int n = atoi(input);

		// Add your code between this comment
		// and the comment below. You can of
		// course add more space between the
		// comments as needed
		
		//My made up code
		/*
		
		int a = 0;
		int sum = 0;

		while (a < n) {
			printf("%d ", a);
			sum += a;
			a++;
			
		}

		printf("%d\n", sum);
		*/

		//The real code provided by teh instructror
		// allocate memory for int array holding n elements
		int* numbers = malloc(n * sizeof(int));

		// set each element of the array to its index using pointers
		for (int i = 0; i < n; i++)
		{
			*(numbers + i) = i;
		}

		// print the contents of the array without destroyinh the array
		for (int i = 0; i < n; i++)
		{
			printf("%d ", *(numbers + i));
		}

		// calculate and print the sum of the numbers
		int sum = 0;
		for (int i = 0; i < n; i++)
		{
			sum += *(numbers + i);
		}
		printf("%d\n", sum);

		// good pointer use
		free(numbers);
		numbers = NULL;
		
		// Don't add or modify any code below
		// this comment
		fgets(input, MAX_LENGTH, stdin);
	}

	return 0;
}
