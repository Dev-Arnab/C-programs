#include<stdio.h>
#include<stdlib.h>

typedef enum {HR,Sales,Research,Software,Executive} dep;//enum for the given department

typedef struct
{
    dep d;//enum within the structure
    int annual;
    unsigned int security;

} Employee;


int main()
{
    Employee e[10];
    int i;
    for(i=0; i<10; i++)
        e[i].security=i+5;
    printf("Enter the value for employee department\n");

    printf("0\nHR\n1 Sales\n2 Research\n3 Software\n4 Executive\n");
    for(i=0; i<10; i++)
        scanf("%d",&e[i].d);
    for(i=0; i<10; i++)
    {
        switch(e[i].d)
        {
        case 0:
            e[i].annual=10000+(rand()%3000);
            printf("Security %d HR Annual Salary %d\n",e[i].security,e[i].annual);
            break;
        case 1:
            e[i].annual=9000+(rand()%2000);
            printf("Security %d Sales Annual Salary %d\n",e[i].security,e[i].annual);
            break;
        case 2:
            e[i].annual=12000+(rand()%4000);
            printf("Security %d Research Annual Salary %d\n",e[i].security,e[i].annual);
            break;
        case 3:
            e[i].annual=11000+(rand()%3000);
            printf("Security %d Software Annual Salary %d\n",e[i].security,e[i].annual);
        case 4:
            e[i].annual=15000+(rand()%5000);
            printf("Security %d Executive Annual Salary %d\n",e[i].security,e[i].annual);
            break;
        default:
            printf("Error value inserted\n");
        }
        //rand function is used for random salary with the base salary
    }

    return 0;

}
