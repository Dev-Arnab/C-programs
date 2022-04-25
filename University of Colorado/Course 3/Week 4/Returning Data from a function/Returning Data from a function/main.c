#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int get_random();

/*
Demonstrates returning data from a function
*/

int main(void) {

	//Initialize random number generator and generate random numbers
	srand(time(0));

	for (int i = 1; i <= 5; i++) {
		printf("Random Number_%d: %d\n", i, get_random());
	}




	return NULL;
}

/*
Generates random number
*/
int get_random() {
	
	return rand();
}