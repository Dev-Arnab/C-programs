/*There is a problem in the code that I couldn't find out*/
#include <stdio.h>

int fibonacci(int);
int main (void){

int n;
int f;

printf("Enter the value of n: ");
scanf("%d",&n);
f=fibonacci(n);
printf("%d",f);

}

int fibonacci(int n){

if(n<=1){
    return 1;}
else{
    return fibonacci(n-1)+fibonacci(n-2);}

}
