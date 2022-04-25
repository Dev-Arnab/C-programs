#include <stdio.h>
#include <stdlib.h>
#define OLD_AGE 1962
#define PRESENT_AGE 2020

int main(void) {

	//Display my age
	int age = 18;
	printf("My age: %d\n", age);

	//Display old age
	int old_age = PRESENT_AGE-OLD_AGE;
	printf("Old age: %d\n", old_age);

	//Difference of our age
	int age_difference;
	printf("Difference of our age: %d\n", old_age - age);

	return 0;
}