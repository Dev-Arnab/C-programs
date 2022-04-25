/*This program will convert a given miles and yard distance into kilometers*/
#include<stdio.h>

int main(void){

float miles;
float yards;
float kilometers=1.609*(miles+yards/1760);

printf("Enter number of miles:");
scanf("%f",&miles);
printf("Enter yards:");
scanf("%f",&yards);

/*kilometers=1.609*(miles+yards/1760);*/
printf("%f miles and %f yards equals to %f kilometers",miles,yards,kilometers);

return 0;
}
