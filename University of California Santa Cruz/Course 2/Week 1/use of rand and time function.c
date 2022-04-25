/*Just a random program to generate 5 numbers*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
int i;

srand(time(0));//if this function is used then each time the program run it will generate different numbers.

for(i=0;i<4;i++){
    printf("%d\t\t",rand());
}


return 0;
}
