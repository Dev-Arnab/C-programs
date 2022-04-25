#include <stdio.h>

int main(void){

int SIZE=5;
int grades[5]={91,92,93,94,95};
double sum;
int i;
double *points_to_sum=&sum;

printf("My grades are:\n");

for(i=0;i<SIZE;i++){
    printf("%d\t",grades[i]);
}
printf("\n\n");

for(i=0;i<SIZE;i++){
    sum=sum+grades[i];
}

printf("\nThe required average is %lf\n",sum/SIZE);
printf("\n\n");

printf("sum is at %p or %lu and is %lf\n\n",points_to_sum,points_to_sum,*points_to_sum);
printf("Grades are at %lu or %p or %x to %lu or %p or %x\n\n",grades,grades,grades,grades+5,grades+5,grades+5);

return 0;
}
