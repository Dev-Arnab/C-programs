/*This program calculates area of a circle by taking a given radius*/
#include<stdio.h>
/*#define pi 3.1416*/
int main(void){

float radius;
float area;
float pi=3.1416;

printf("Enter radius:");
scanf("%f",&radius);

area=pi*radius*(radius);

printf("If radius of a circle is %f then  area is %f square meter \n",radius,area);

return 0;
}
