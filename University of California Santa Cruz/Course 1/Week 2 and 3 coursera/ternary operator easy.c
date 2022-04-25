/*It is a easy version of the previous code using nested ternary operator*/
#include <stdio.h>

int main(void){

int a=1;
int b=2;
int ans;

ans=(a==1?(b==2?3:5):0);
printf("The required value is %d\n",ans);


return 0;
}
