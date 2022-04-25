#include <stdio.h>

double square(double);
double cube(double);

int main(void){

int how_many;
int x;
int y;

printf("I want square and cube from 1 to n where n is:");
scanf("%d",&how_many);
printf("Square and cube by interval 0f 0.1:\n");

for(x=1;x<=how_many;x++)
    for(y=0;y<10;y++)
    printf("%lf\t %lf\t %lf\n",x+y/10.0,square(x+y/10.0),cube(x+y/10.0));

return 0;
}

double square(double a)
{
    return(a*a);
}

double cube(double a)
{
    return (a*a*a);
}
