
/* MY SOURCE CODE
 * File:   main.c
 * Author: <your name here>
 */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MAX_LENGTH 100

typedef struct Vector Vector;
struct Vector
{
	float x;
	float y;
	float z;
};

typedef struct MoveInfo MoveInfo;
struct MoveInfo
{
	Vector velocity;
	float duration;
};

// prototypes for suggested student-implemented functions
// uncomment the prototypes for the functions you implement
int countInputFileLines(char inputFileName[])
{
	FILE* fptr = fopen(inputFileName, "r");
	if (fptr == NULL) {
		fprintf(stderr, "ERROR opening file\n");
		exit(EXIT_FAILURE);
	}
	int linesNum = 0;
	int ch;
	while ((ch = getc(fptr)) != EOF)
	{
		if (ch == '\n') linesNum++;
	}
	fclose(fptr);
	fptr = NULL;
	return linesNum + 1;
}
//void getPointFromString(char string[], Vector *point);
void getMoveInfoBetweenPoints(MoveInfo* moveInfo, Vector firstPoint, Vector secondPoint)
{

	Vector delta;
	delta.x = secondPoint.x - firstPoint.x;
	delta.y = secondPoint.y - firstPoint.y;
	delta.z = secondPoint.z - firstPoint.z;

	moveInfo->duration = sqrt(pow(delta.x, 2.00) + pow(delta.y, 2.00) + pow(delta.z, 2.00));

	moveInfo->velocity.x = delta.x / moveInfo->duration;
	moveInfo->velocity.y = delta.y / moveInfo->duration;
	moveInfo->velocity.z = delta.z / moveInfo->duration;
}


/*
 * I, Robot Programming Assignment
 */
int main(int argc, char** argv)
{
	// IMPORTANT: Only add code in the section
	// indicated below. The code I've provided
	// makes your solution work with the
	// automated grader on Coursera
	char rawFileName[MAX_LENGTH];
	fgets(rawFileName, MAX_LENGTH, stdin);
	while (rawFileName[0] != 'q')
	{
		int stringEndIndex = -1;
		char* result = NULL;
		char* stringStart = &rawFileName[0];

		// handle Windows, MacOS, and Linux
		// check for carriage return
		result = strchr(rawFileName, '\r');
		if (result == NULL)
		{
			// no carriage return found, so find new line
			result = strchr(rawFileName, '\n');
		}

		stringEndIndex = result - stringStart;
		char* inputFileName = malloc((stringEndIndex + 1) * sizeof(char));
		strncpy(inputFileName, rawFileName, stringEndIndex);
		inputFileName[stringEndIndex] = '\0';

		// Add your code between this comment
		// and the comment below. You can of
		// course add more space between the
		// comments as needed
		int linesNum = countInputFileLines(inputFileName);
		FILE* fptr = fopen(inputFileName, "r");
		char lines[100][100];

		Vector* points = malloc(linesNum * sizeof(*points));
		MoveInfo* moves = malloc((linesNum - 1) * sizeof(*moves));
		for (int i = 0; i < linesNum; i++) {
			fgets(lines[i], 100, fptr);
			sscanf(lines[i], "%f,%f,%f\n", &points[i].x, &points[i].y, &points[i].z);
		}

		float total = 0;
		for (int i = 0; i < linesNum - 1; i++) {
			getMoveInfoBetweenPoints(&moves[i], points[i], points[i + 1]);
			total += moves[i].duration;
			printf("%.2f,%.2f,%.2f,%.2f ", moves[i].velocity.x, moves[i].velocity.y, moves[i].velocity.z, moves[i].duration);
		}
		printf("%.2f\n", total);


		free(moves);
		free(points);
		fclose(fptr);

		// Don't add or modify any code below
		// this comment except as indicated below
		free(inputFileName);
		inputFileName = NULL;
		fgets(rawFileName, MAX_LENGTH, stdin);
	}

	return 0;
}

// Add your function implementations between this
// comment and the comment below. You can of course
// add more space between the comments as needed



// Don't add or modify any code below this comment
