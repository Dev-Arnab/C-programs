#include <stdio.h>
#include <assert.h>
//#define NDEBUG//it will turn off the work of assert

int main (void){

float a;
float b;
int i;

for(i=0;;i++){
printf("Input two integers to divide: ");
scanf("%f%f",&a,&b);

assert(b!=0);

printf("The result is %.5f\n\n",a/b);
}
return 0;
}
