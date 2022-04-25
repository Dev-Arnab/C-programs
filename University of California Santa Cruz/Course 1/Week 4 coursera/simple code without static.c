#include <stdio.h>
int func(void);
int main (void){

printf("%d",func());
printf("\n%d",func());

return 0;
}

int func()
{
    int count=0;
    count++;

    return count;
}
