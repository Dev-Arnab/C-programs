//This program will print out the next day you enter
#include <stdio.h>

enum day{sun,mon,tues,wed,thurs,fri,sat};//here i declared type

void print_day(enum day d){
    switch(d){
        case sun:
            printf("Sunday\n");
            break;
        case mon:
            printf("Monday\n");
            break;
        case tues:
            printf("Tuesday\n");
            break;
        case wed:
            printf("Wednesday\n");
            break;
        case thurs:
            printf("Thursday\n");
            break;
        case fri:
            printf("Friday\n");
            break;
        case sat:
            printf("Saturday\n");
            break;
        default:
            printf("%d is an error",d);
        }
}

enum day next_day(enum day d){
    return(d+1%7);
}

int main(){

enum day today=fri;
print_day(today);
printf("\n\n");
print_day((next_day(today)));
printf("\n\n");
return 0;

}
