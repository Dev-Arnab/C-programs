#include <stdio.h>
#include <stdlib.h>


void print_message();

/*
Demonstrate simple function
*/

int main(void) {

	//print welcome message
	print_message();

	return 0;
}

/*
Prints a messaage
*/

void print_message() {
	printf("Welcome to the amazing first function program!\n");
	printf("\n");
	printf("The welcome message was output by\n");
	printf("a function. Amazing,\n");

}