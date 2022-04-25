#include <stdio.h>


int main (void){

int a;
int b;
int sum;

scanf("%d",&a);
scanf("%d",&b);
sum=a+b;

if (((a||b)>-20000000) || ((a||b)<20000000)){
    printf("%d",sum);
}
else{
    printf("please use a integer within the given range.");
}
return 0;
}
