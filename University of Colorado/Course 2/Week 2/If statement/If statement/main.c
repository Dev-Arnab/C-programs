#define _CRT_SECURE_NO_WARNINGS  //Use this and use scanf
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


int main(void) {

	char answer;

	//prompt for and get answer
	printf("Do you like pizza(y or n)? \n");
	scanf ("%c", &answer);
	answer = tolower(answer);

	//print appropriate message
	if (answer=='y') {
		printf("That's great! I like pizza too.\n");
	}
	else if(answer=='n'){
		printf("That's okay. I'll eat enough for both of us.");
	}
	else {
		printf("I said y or n!!!!");
	}






	return 0;
}
