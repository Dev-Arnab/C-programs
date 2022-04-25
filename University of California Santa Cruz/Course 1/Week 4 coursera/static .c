#include <stdio.h>

extern int reps=0;

void f(void){

static int called=0;
printf(" ,f called %d\n",called);
called++;
reps=reps+called;

}

int main (void){

auto int i;

for(i=0;i<10;i++){
    printf("i local= %d, reps global= %d",i,reps);
    f();
}






}
