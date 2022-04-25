#include <stdio.h>

int main(void){

int arr[10000];
int i;
double sum=0.0;
int n;

printf("Please enter the number of terms that you want to average:");
scanf("%d",&n);

for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
    sum=sum+arr[i];
}

printf("\nThe sum of the numbers is: %lf\n",sum);
printf("The average of the numbers is %lf\n",sum/n);


return 0;
}
