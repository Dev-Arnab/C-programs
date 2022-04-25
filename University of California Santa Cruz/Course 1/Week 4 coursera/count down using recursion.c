#include <stdio.h>

int func(int);

int main (void){

int i,n;
printf("From where you want to start the count down: ");
scanf("%d",&n);

printf("%d",func(n));

return 0;
}

int func(int n){
if(n>0){
    printf("%d\n",n);
    return func(n-1);
}

else{
    printf("Blast off\n");

}
}
