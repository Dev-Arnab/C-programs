#include <stdio.h>
#include <math.h>

int  main(void){

double x;
double y;
int i;
double value;

printf("A table for values of sine and cosine from 0 to 1:\n");
printf("Values of sine angles:\n");
for(i=0;i<=10;i+i++){
    value=i/10.0;
    printf("Sine value for %.1lf is %.5lf\n",value,sin(value));
}

printf("\n\nValues of cosine angles:\n");
for(i=0;i<=10;i++){
    value=i/10.0;
    printf("Cosine values for %.1lf is %.5lf\n",value,cos(value));

}

return 0;
}
