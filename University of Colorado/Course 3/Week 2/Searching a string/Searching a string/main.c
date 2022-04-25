#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Search for a string manually and using function
*/

int main(void) {

	char data[] = "8.7,5.3";
	int i = 0;

	//finding comma manually
	int length = strnlen(data, sizeof(data));
	printf("The length of string is: %zu\n", length);

	while (data[i] != ',' && i < length) {
		i++;
	}

	if (i < length) {
		printf("Comma is at %d\n", i);
	}

	else {
		printf("String length exceeded.\n");
	}

	printf("\n\n\n");

	//Using function to find character
	char* result = NULL;
	result = strchr(data, ',');

	if (result != NULL) {
		printf("Result address: %p\n", result);
		printf("Data string address: %p\n", &data[0]);

		char* dataStart = &data[0];
		printf("Comma is located at %d.\n", result - dataStart);
	}
	else {
		printf("String length exceeded.\tComma not found.\n");
	}


	return 0;
}