/*It is a program about loop that I didn't understand*/
#include <stdio.h>
int main (void){
int blanks=0;
int digits=0;
int letters=0;
int others=0;
int c='2';
//looping variable
int i=0;
while(i<=18){
    if(c==' ')
        ++blanks;
    else if(c>='0' && c<='9')
        ++digits;
    else if((c>='a') && (c<='z') || (c>='A') && (c<='Z'))
        ++letters;
    else++others;
    i++;
}
printf("blanks=%d, digits=%d, letters=%d,",blanks, digits, letters);
printf("others=%d\n\n",others);
return 0;
}
