#include <stdio.h>

enum day{sun, mon, tues, wed, thurs, fri, sat};//I am defining a variable type just like int, char, float.
typedef enum day day;//typedef is used to replace the value of enum day to day. So, later I didn't write enum day anywhere, I only wrote day.
void print_day(day d){

switch(d){
case sun: printf("Sunday");
break;
case mon: printf("Monday");
break;
case tues: printf("Tuesday");
break;
case wed: printf("Wednesday");
break;
case thurs: printf("Thursday");
break;
case fri: printf("Friday");
break;
case sat: printf("Saturday");
break;

default: printf("%d is an error",d);
}
}

day next_day(day d){

return (d + 1 % 7);
}


int main (void){

enum day today=fri;
print_day(today);
printf("\t\t");
print_day(2);
printf("\t");
print_day(4);
printf("\t");
print_day(6);
printf("\t");
print_day(7);
printf("\t\t");
print_day(next_day(today));
printf("\n\n");

return 0;
}
