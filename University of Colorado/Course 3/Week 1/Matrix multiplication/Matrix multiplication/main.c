#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

/*
Demonstrate matrix multiplication
*/

int main(void) {

	//Declare and initialize matrics
	int first_matrix[2][3] = { {1, 2, 3,},
							   {4, 5, 6} };
	int second_matrix[3][2] = { {7, 8},
							    {9, 10},
							    {11, 12} };

	int result[2][2] = { 0 };
	
	//printf("%d %d %d %d", result[0][0], result[0][1], result[1][0], result[1][1]);
    //printf("%d\t %d\t %d\t %d\t", sizeof(first_matrix), sizeof(first_matrix[0]), sizeof(second_matrix[0]), sizeof(second_matrix [0][0]));
	//Multiply thr matics
	for (int i = 0; i < sizeof(first_matrix) / sizeof(first_matrix[0]); i++) {
		//i<((2*3*4)/(3*4))=2
		
		for (int j = 0; j < sizeof(second_matrix[0]) / sizeof(second_matrix[0][0]); j++) {
			//j<((2*4)/(1*4)=2
	
			//i is the row of first matrix
			//j is the column of second matrix
			int first_matrix_column = 0;
			int second_matrix_row = 0;

			//Iterate however many columns are in the first matrix or
			//however rows are un the second matrix
			//These nunbers must be the same for matrix multiplication to work
			for (int n = 0; n < sizeof(first_matrix[0]) / sizeof(first_matrix[0][0]); n++) {
				//n<((3*4)/(1*4))=3
				result[i][j] = result[i][j] + first_matrix[i][first_matrix_column] * second_matrix[second_matrix_row][j];

				//Move to next first matrix colun and second matrix row
				first_matrix_column++;
				second_matrix_row++;
			}

		}
	}

	//Print the answer
	printf("\n\n");
	printf("Results:\t\t\n");
	for (int i = 0; i < sizeof(result) / sizeof(result[0]); i++) {
		//i<((4*4)/(1*4))=2
		for (int j = 0; j < sizeof(result[0]) / sizeof(result[0][0]); j++) {
			//j<((2*4)/(1*4))=2
			printf("%5d", result[i][j]);
		}
		printf("\n");
	}




	return 0;
}