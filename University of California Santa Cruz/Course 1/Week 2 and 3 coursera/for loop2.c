/*a little appication of for loop*/
#include <stdio.h>

int main (void){

int i;
int sum=0;

for(i=1;i<5;i++){
    sum=sum+i;
    printf("Sum is %d, i is %d\n",sum,i);
}

return 0;
}
