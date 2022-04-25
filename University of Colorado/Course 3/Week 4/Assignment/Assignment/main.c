/*
 * File:   main.c
 * Author: <your name here>
 */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 100

#define MIN 1
#define MAX 96

typedef struct LinkedList LinkedList;
struct LinkedList
{
	int data;
	LinkedList* next;
};
LinkedList* head;
LinkedList* tail;

// prototypes for student-implemented functions
int getValidInteger(int lowerBound, int upperBound);
float averageIntegerArray(int values[], int count);
int findExtremeInIntegerArray(int minOrMax, int values[], int count);

// prototypes for Dr. T functions
void buildLinkedListFromString(char string[]);
void addNodeToList(LinkedList** headPointer, LinkedList** tailPointer,
	LinkedList* node);
LinkedList* getNode(char string[], int spaceIndex);
int getNumber();

/*
 * Height Statisticamator Programming Assignment
 */
int main(int argc, char** argv)
{
	// IMPORTANT: Only add code in the section
	// indicated below. The code I've provided
	// makes your solution work with the 
	// automated grader on Coursera
	char input[MAX_LENGTH];
	fgets(input, MAX_LENGTH, stdin);
	while (input[0] != 'q')
	{
		buildLinkedListFromString(input);

		// Add your code between this comment
		// and the comment below. You can of
		// course add more space between the
		// comments as needed

		int Count = getValidInteger(1, 100);
		int values[MAX_LENGTH];
		for (int i = 0; i < Count; i++)
		{
			values[i] = getValidInteger(1, 96);
		}
		float Average = averageIntegerArray(values, Count);
		int MaximumValue = findExtremeInIntegerArray(1, values, Count);
		int MinimumValue = findExtremeInIntegerArray(0, values, Count);
		printf("%.2f %d %d\n", Average, MinimumValue, MaximumValue);

		// Don't add or modify any code below
		// this comment except as indicated below
		fgets(input, MAX_LENGTH, stdin);
	}

	return 0;
}

// Add your function implementations between this 
// comment and the comment below. You can of course 
// add more space between the comments as needed

int getValidInteger(int lowerBound, int upperBound)
{
	int Number;
	Number = getNumber();
	while (Number < lowerBound || Number > upperBound)
	{
		Number = getNumber();
	}
	return Number;
}
//Finds the average of the array
float averageIntegerArray(int values[], int count)
{
	int i, Sum = 0;
	float Average;
	for (i = 0; i < count; i++)
	{
		Sum += values[i];
	}
	Average = (float)Sum / count;
	return Average;
}

//Finds the Max and Min Element of the array 
int findExtremeInIntegerArray(int minOrMax, int values[], int count)
{
	int C = values[0], Result;
	if (minOrMax == 0)
	{
		for (int i = 0; i < count; i++)
		{
			if (values[i] <= C)
			{
				C = values[i];
			}
		}
		Result = C;
	}
	else
	{
		for (int j = 0; j < count; j++)
		{
			if (values[j] > C)
			{
				C = values[j];
			}
		}
		Result = C;
	}
	return Result;
}

// Don't add or modify any code below this comment

/*
* Builds a linked list of input values from provided string
*/
void buildLinkedListFromString(char string[])
{
	// find first space in string
	int spaceIndex = -1;
	char* result = NULL;
	result = strchr(string, ' ');
	char* stringStart = &string[0];

	// loop while there are more spaces in string
	while (result != NULL)
	{
		spaceIndex = result - stringStart;

		// build new node and add to list
		LinkedList* node = getNode(stringStart, spaceIndex);
		addNodeToList(&head, &tail, node);

		// find next space in string
		string = &string[0] + spaceIndex + 1;
		result = strchr(string, ' ');
		stringStart = &string[0];
	}

	// add final node to list
	LinkedList* node = getNode(stringStart,
		strlen(stringStart));
	addNodeToList(&head, &tail, node);
}

/*
* Adds a node to the linked list
*/
void addNodeToList(LinkedList** headPointer, LinkedList** tailPointer,
	LinkedList* node)
{
	// add node to linked list
	if (*headPointer == NULL)
	{
		// adding to empty list
		*headPointer = node;
	}
	else
	{
		// add to end of list
		(*tailPointer)->next = node;
	}
	*tailPointer = node;
}

/*
* Gets a node for the linked list
*/
LinkedList* getNode(char string[], int length)
{
	// extract int from string
	char* intString = malloc((length + 1) * sizeof(char));
	strncpy(intString, string, length);
	intString[length] = '\0';
	int value = atoi(intString);

	// free memory
	free(intString);
	intString = NULL;

	// build and return node
	LinkedList* node;
	node = malloc(sizeof(struct LinkedList));
	node->data = value;
	node->next = NULL;
	return node;
}

/*
* Get a number from the linked list. If the linked
* list is empty, returns -1
*/
int getNumber()
{
	// check for empty list
	int value;
	if (head != NULL)
	{
		// save value at front of list
		value = head->data;

		// move along list
		LinkedList* temp = head;
		head = head->next;
		free(temp);
	}
	else
	{
		// empty list
		value = -1;
	}
	return value;
}
