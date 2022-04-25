#include <stdio.h>
#include <stdlib.h>

/*
Demonstrates char datatype
*/

int main(void) {

	char menu_choice = 'z';//give breakpoint here and debug. Value assigned to z will be -52
	menu_choice = 120;//step over 1 time, assigned value will be 122(ASCII value of z)


	return 0;//step over another time and the value will be 120
}