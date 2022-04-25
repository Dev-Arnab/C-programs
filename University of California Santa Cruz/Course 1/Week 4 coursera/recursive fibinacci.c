#include <stdio.h>

long recursive_fibonacci(int n){

if(n<=1)
    return n;
else
    return (recursive_fibonacci(n-1)+recursive_fibonacci(n-2));
}

int main(void){

int how_much;
int i;

printf("Please enter the number whose factorial you want to know: ");
scanf("%d",&how_much);
printf("\nFibonacci series\n");

for(i=1;i<=how_much;i++)
    printf("%d\t %ld\n",i,recursive_fibonacci(i));
return 0;
}
