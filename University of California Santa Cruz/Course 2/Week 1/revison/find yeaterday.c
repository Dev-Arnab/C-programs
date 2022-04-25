//This is a code to find yesterday
#include <stdio.h>

enum day{Sun,Mon,Tues,Wed,Thurs,Fri,Sat};

void print_day(enum day d)
{
    switch(d)
    {
    case Sun:
        printf("Sunday");
        break;
    case Mon:
        printf("Monday");
        break;
    case Tues:
        printf("Tuesday");
        break;
    case Wed:
        printf("Wednesday");
        break;
    case Thurs:
        printf("Thursday");
        break;
    case Fri:
        printf("Friday");
        break;
    case Sat:
        printf("Saturday");
        break;
    default:
        printf("%d is not valid",d);
    }
}

enum day next_day(enum day d){
    if(d==Sun){
        return 6;
    }
    else{
    return (d-1%7);
    }
}

int main(){
    enum day d=Sat;
    print_day(d);
    printf("\n\n");
    print_day(next_day(d));
    printf("\n\n");
    return 0;
}
