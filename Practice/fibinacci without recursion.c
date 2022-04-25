#include <stdio.h>

int main (void){

int n;
int n1=0, n2=1, n3;
int i;

printf("Upto which number you want to know the fibonacci series: ");
scanf("%d",&n);
printf("%d\t%d",n1,n2);

for(i=2;i<n;i++){
    n3=n1+n2;
    printf("\t%d",n3);
    n1=n2;
    n2=n3;
}

return 0;
}
