/*This is a more developed version of the previous traffic code using nested ternary operator*/
#include <stdio.h>

int main (void){

int speed;
printf("\nEnter your speed:\n");
scanf("%d",&speed);
speed=(speed<=65)? (65):(speed<=70? (70):(90));

switch(speed){
case 65: printf("No speeding ticket. Hold your speed.\n");
break;
case 70: printf("Speeding ticket.Please slow down.\n");
break;
case 90: printf("Expensive speeding ticket. You might die if you continue this speed.\n");
break;
default: printf("Error!!!!!!!\nPlease enter a positive integer.\n");

}


return 0;
}
