#include <stdio.h>
#include <stdlib.h>

/*
Demonstrate for loops
*/

int main(void) {

    int n;

    //prompt for and get number of squares to print
    printf("How many squares do you want to print (1-10)?");
    scanf("%d",&n);

	//Print squares from 1 to 10
	for (int i = 1; i <= n; i++) {
		printf("The square of %d is %d.\n", i, i*i);
	}






	return 0;
}
