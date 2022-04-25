#include <stdio.h>
#include <stdlib.h>

/*
Demonstrates pointers to struct
*/

int main(int argc, char** argv) {

	struct student {
		int number;
		float percent;
		char grade;
	};

	typedef struct student student;

	//Declare struct variable, pointer to struct, and print information
	student student_0 = { 101010101, 89.5, 'B' };
	student* pStudent_0 = &student_0;

	printf("Student_0\n");
	printf("---------\n");
	printf("Number: %d\n", pStudent_0->number);
	printf("Percent: %.1f\n", pStudent_0->percent);
	printf("Grade: %c\n", pStudent_0->grade);
	printf("\n");

	//It is another method to interact with struct
	//Declare pointer to new struct, initiation, and print information
	student* pStudent_1 = malloc(sizeof(student));

	//Check for allocation failure
	if (!pStudent_1) {
		return (EXIT_FAILURE);
	}

	(*pStudent_1).number = 2222222222;
	(*pStudent_1).percent = 59.99;
	(*pStudent_1).grade = 'F';

	printf("Student_1\n");
	printf("---------\n");
	printf("Number: %d\n", (*pStudent_1).number);
	printf("Percet: %.1f\n", (*pStudent_1).percent);
	printf("Grade: %c\n", (*pStudent_1).grade);

	//Free memory
	free(pStudent_1);
	pStudent_1 = NULL;

	return (EXIT_SUCCESS);
}