#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

/*
Trying out javatpoint due to load shedding
*/

int main(void) {

	char c[20] = "iloveyouverymuch";
	int count = 0;
	int i = 0;

	while (c[i] != NULL) {
		if (c[i] == 'a' || c[i] == 'e' || c[i] == 'i' || c[i] == 'o' || c[i] == 'u') {
			count++;
		}
		i++;
	}

	printf("Number of vowels: %d\n", count);

	//Accepting strings as input
	char s[20];
	printf("Enter string: ");
	//String can not be input with space
	//To get space, we need to do a minor change
	//We do not need to use & for strings
	scanf("%[^\n]s", s);
	printf("Get string: %s", s);


	//Pointers with strings
	char* p = s;
	printf("\n\n");
	printf("%s", p);

	return NULL;
}