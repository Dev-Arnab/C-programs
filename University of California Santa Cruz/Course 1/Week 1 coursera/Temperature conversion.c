/*This is a program that will convert farenheit temperature into celcius.*/
#include<stdio.h>

int main(void){

double F;
double C;

printf("Please enter the temperature in farenheit:");
scanf("%lf",&F);
C=(F-32)/1.8;

printf("The value of the given temperature in celcius is %lf",C);


return 0;
}
