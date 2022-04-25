#include <stdio.h>

void write_very(int count){

while(count>0){
    printf("%d. very\n",count);
    count--;
}
printf("very\n");
}

int main (void){

int repeat;
printf("How much do you love her??!\n");
scanf("%d",&repeat);
printf("I love her\n");
write_very(repeat);
printf("much");

return 0;
}
