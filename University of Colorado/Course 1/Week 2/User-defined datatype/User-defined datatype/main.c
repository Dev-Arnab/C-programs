#include <stdio.h>
#include <stdlib.h>

/*
Demonstrate user defined datatype
*/

int main(void) {

	typedef struct Student student;

	struct Student {
		int number;
		float percentage;
		char grade;
	};

	//initialize and print student information
	student student0 = { 1190, 92.34, 'A'};
	printf("Student0:\n");
	printf("---------\n");
	printf("Number: %d\n", student0.number);
	printf("Percent: %.1f\n", student0.percentage);
	printf("Grade: %c\n", student0.grade);
	printf("\n");

	student student1;
	student1.number = 1188;
	student1.percentage = 92.2;
	student1.grade = 'A';
	printf("Student1:\n");
	printf("---------\n");
	printf("Number: %d\n", student1.number);
	printf("Percent: %.1f\n", student1.percentage);
	printf("Grade: %c\n", student1.grade);


	return 0;
}