#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

/*
Demonstrates allocating more memory as needed
*/

int main(int argc, char** argv) {

	const int GROW_AMOUNT = 2;

	//Initialize count and capacity and allocate memory
	int count = 0;
	int capacity = 2;
	int* pNumbers = malloc(capacity * sizeof(int));

	//Check for allocation failure
	if (pNumbers == NULL) {
		
		return (EXIT_FAILURE);

	}

	//Get numbers from user until they enter -1
	int n = 0;

	while (n != -1) {
		//Get user input
		printf("Enter a number (-1 to quit): ");
		scanf("%d", &n);

		if (n != -1) {
			//Check for need to allocate more memory
			if (count == capacity) {
				//Increase capacity and get more memory
				capacity *= GROW_AMOUNT;
				pNumbers = realloc(pNumbers, capacity * sizeof(int));

				//Check for allocation failure
				if (pNumbers == NULL) {

					return (EXIT_FAILURE);
				}

				//Output for demonstration purposes
				printf("/nReallocated, new capacity: %d\n", capacity);
			}

			*(pNumbers + count) = n;
			count++;
		}
	}

	free(pNumbers);
	pNumbers = NULL;

	return (EXIT_SUCCESS);
}