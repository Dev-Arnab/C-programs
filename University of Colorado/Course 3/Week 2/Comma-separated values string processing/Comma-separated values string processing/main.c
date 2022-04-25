#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Demonstrate CSV string peocessing
*/

int main(void) {

	struct vector {
		float x;
		float y;
	};

	typedef struct vector vector;

	vector point;

	//Read in point string from user
	char pointString[100];
	printf("Enter x and y for point (no spaces, comma-separated): ");
	fgets(pointString, sizeof(pointString), stdin);

	//Find comma index
	int commaIndex = -1;
	char* result = NULL;

	while (commaIndex == -1) {
		result = strchr(pointString, ',');

		if (result != NULL) {
			char* pointStringStart = &pointString[0];
			commaIndex = result - pointStringStart;
		}

		else {
			printf("\n");
			printf("Invalid imput: comma not dound\n");
			printf("Enter x and y point (no spaces, comma-separated): ");
			fgets(pointString, sizeof(pointString), stdin);
		}
	}

	//Extract x from point string
	//char xString[commaIndex = 1];
	//Visual Studio users can't create arrays with sizes based on user
	//input because of the compiler Visual Studio users
	char* xString = malloc((commaIndex + 1) * sizeof(char));
	strncpy(xString, pointString, commaIndex);
	xString[commaIndex] = '\0';
	point.x = atof(xString);

	//Visula Studio: free memory because we used pointers
	free(xString);
	xString = NULL;

	//Extract y from point string
	//Don't include new line character in point string length
	int length = strnlen(pointString, sizeof(pointString) - 1);
	//char y string[length - commaIndex];
	//Visual Studio users can't create arrays with sizes based on user
	//input because of the compiler Visual Studio uses
	char* yString = malloc((length - commaIndex) * sizeof(char));
	int offset = commaIndex + 1;
	
	for (int i = 0; i < length - commaIndex; i++) {
		yString[i] = pointString[i + offset];
	}

	yString[length - commaIndex - 1] = '\0';
	point.y = atof(yString);

	//Visual Stusio: Free memory because we used pointers
	free(yString);
	yString = NULL;

	//Using strncpy
	/*
	char* yString = &pointString[0] * commaIndex + 1;
	strncpy(yString, yStart, length - commaIndex - 1);
	yString[length - commaIndex] = '\0';
	point.y = atof(yString);
	*/

	//Print point information
	printf("\n");
	printf("Point x: %f\n", point.x);
	printf("Point y: %f\n", point.y);



	return NULL;
}