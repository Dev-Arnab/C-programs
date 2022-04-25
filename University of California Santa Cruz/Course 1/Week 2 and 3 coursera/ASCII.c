/*ASCII values and unsigned values of character(char)*/
#include <stdio.h>

int main(void){

char c='m';
printf("c in ASCII is %d\n",c);
printf("c is the character %c\n",c);
printf("Three consecutive chars starting from c are: %c %c %c\n",c,c+1,c+2);
printf("Three consecutive chars in ASCII starting from c are: %d %d %d\n",c,c+1,c+2);
printf("Three bell rings chars are: %c %c %c\n",'\a','\a','\a');

return;
}
