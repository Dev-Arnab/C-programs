#include <stdio.h>
#include <math.h>
int main(void){

double x;
scanf("%lf",&x);
while(x>1 || x<0){
    printf("Please enter a value between 0 and 1:");
    scanf("%lf",&x);
}
printf("The sine of angle x degree is %lf\n",sin(x));

return 0;
}
