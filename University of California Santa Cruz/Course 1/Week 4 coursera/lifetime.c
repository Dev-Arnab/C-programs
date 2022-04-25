#include <stdio.h>

int main (voiud){

int x=12;
lifetime:
    {
        int y=x+3;
        printf("%d\t%d\n\n",x,y);
    }

printf("value of x should be 12 now:%d",x);


return 0;
}
