/*Let's see whether you are exceeding your speed limit or not*/
#include <stdio.h>

int main(void){

float speed;
int x;

for(x=0;;x++){
printf("Please write your current speed in kmph:\n");
scanf("%f",&speed);

if(speed<=65){
    printf("Please maintain your speed\n");
}
else{
    printf("Reduce your speed otherwise you will get a ticket\n");
}
}


return 0;
}
