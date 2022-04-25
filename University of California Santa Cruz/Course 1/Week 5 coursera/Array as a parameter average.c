/*It is a code to print grades and find the grades*/
#include <stdio.h>

void print_grades(int how_many, int grades[]){
int i;
for(i=0;i<how_many;i++){
    printf("%d\t",grades[i]);
}
}

double average(int how_many, int grades[]){
int i;
double sum=0.0;

for(i=0;i<how_many;i++){
    sum+=grades[i];
}
return (sum/how_many);

}


int main (void){

const int SIZE = 5;
int grades[5]={91,92,93,94,95};

print_grades(SIZE,grades);
printf("\n\n");
printf("The average of my marks is %.5lf",average(SIZE,grades));

return 0;
}
