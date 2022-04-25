#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
Demonstrate string length
*/

int main(void) {

	char message[] = "def leopard rocks";
	int i = 0;

	//Count and print the length of strings
	while (message[i] != NULL) {
		i++;
	}

	printf("Number of characters: %d\n", i);

    //Print length of string using function
	printf("%s has %zu characters.\n", message, strlen(message));

	//For safety reasons the following should be used
	printf("The most efficient answer is: %zu", strnlen_s(message, sizeof(message)));



	return (EXIT_SUCCESS);
}