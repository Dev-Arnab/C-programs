#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Demonstrate basics of strings
*/

int main(void) {

	char message[] = "abcdefgh";

	//Output string information
	int i = 0;
	while (message[i] != NULL) {
		printf("Meaasge_%d Address: %p Content: %c\n", i, &message[i], message[i]);
		i++;
	}

	//Print message
	printf("Message: %s/n", message);

	//Practice from javatpoint
	char ch[] = { 'j', 'a', 'v', 'a', 'p', 'o', 'i', 'n', 't', '\0' };
	char ch2[] = "javapoint";

	printf("\n\n");
	printf("Char array value is: %s\n", ch);
	printf("String literal value: %s\n", ch2);

	return 0;
}