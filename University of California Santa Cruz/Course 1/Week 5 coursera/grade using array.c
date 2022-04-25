#include <stdio.h>

int main(){

const int size=5;
int grades[5]={83,99,95,97,93};
double sum;
int i;

printf("\nMy grades are:\n");

for(i=0;i<size;i++)
    printf("%d\t",grades[i]);
    printf("\n\n");

for(i=0;i<size;i++)
    sum=sum+grades[i];
printf("My average marks is %lf\n",sum/size);


return 0;
}
