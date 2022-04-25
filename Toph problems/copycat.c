#include <stdio.h>

int main(void){

int i;
scanf("%d",&i);

if(i>-200000000 || i<200000000){
    printf("%d",i);
}
else{
    printf("please follow the integer.");
}
return 0;
}
