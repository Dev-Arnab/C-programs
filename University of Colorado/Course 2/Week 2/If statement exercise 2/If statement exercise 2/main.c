#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/*
Respond to a menu
*/

int main(void) {

	//print out menu
	printf("******************\n");
	printf("N\tNew Game\n");
	printf("L\tLoad Game\n");
	printf("O\tOptions\n");
	printf("Q\tQuit\n");
	printf("******************\n\n");

	//Prompt for and read user's choice
	char x;
	scanf("%c", &x);
	printf("You entered %c\n", x);
	x = tolower(x);

	//Response to user's input
	
		if (x == 'n') {
			printf("Starting new game....\n");
		}
		else if (x == 'l') {
			printf("Loading game....\n");
		}
		else if (x == 'o') {
			printf("Opening options....\n");
		}
		else if (x == 'q') {
			printf("Quiting game....\n");
		}
		else {
			printf("Please follow the above instructions\n");
		}

	return 0;
}