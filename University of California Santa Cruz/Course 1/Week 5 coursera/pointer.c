#include <stdio.h>

int main(void){

int a=56;
int *x=&a;

printf("Address is %p   %x   %X and the value is %d   %x   %X",x,x,x,*x,*x,*x);

return 0;
}
