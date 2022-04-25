#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

/*
Keep track of maximum input values
*/

int main(void) {

	int x;
	int y;
	printf("Enter a number: ");
	scanf("%d", &x);

	for (int i = 0;; i++) {
		if (x == -1) {
			break;
		}
		else {
			printf("Enter another number: ");
			scanf("%d", &y);
			
			if (y == -1) {
				break;
			}
			else if(y>x) {
				x = y;
			}

		}
		
	}

	if (x == -1) {
		printf("Enter another number\n");
	}

	else {
		printf("Highest number is: %d", x);
	}


	return 0;
}