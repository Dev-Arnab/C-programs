/*
Author: Marcus V. Saad
Date: 02/02/2020
Program: Compute the average weight for a population of elephant seals read into an array

Input: weight for a population of elephant seals read into an array
Output: average weight for a population of elephant seals (double)
*/

// libraries needed
#include <stdio.h>
#include <math.h>

// declaring the function prototype before using it
void average_weight (int[] , int);

int main(void){
    // definition section
    // declaration of size of array and the array
    const int SIZE = 1000;
    int weight[SIZE];

    int i=0; // will iterate over weight array
    int num; // num will assume the numbers of array

    printf("\nReading file and storing numbers in array...\n");

    // declare a pointer to file and read its content to an array
    // assume that data is in the same directory of this c source file
    FILE *file = fopen("elephant_seal_data.txt", "r");
    while(fscanf(file, "%d", &num) > 0) {
        weight[i] = num;
        i++;
    }

    fclose(file);

    // prints the total numbers in array (which you already know from SIZE)
    printf("Done!\n\n");
    printf("Total numbers in array: %d\n\n", i);

    // call the function to print average of weight and
    // pass the array address of weight and its size
    average_weight(weight, SIZE);

    return 0;
}

void average_weight (int weigth_array[], int how_many){
    int i;
    double sum = 0.0;

    for(i = 0; i < how_many; i++){
        sum = sum + weigth_array[i];
    }
    // print the average with 2 digits
    printf("The average weight for a population of elephant seals (Mirounga angustirostris) is: %.2lf\n\n", sum/how_many);
}
