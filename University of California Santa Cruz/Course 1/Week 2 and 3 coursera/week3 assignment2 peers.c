#include<stdio.h>
#include<math.h> /* has  sin(), abs(), and fabs() */
int main(void)
{
double interval;
int i;
for(i = 0; i <30; i++)//function inputs for a particular interval
{
 interval = i/10.0;//update statement
 printf("sin( %lf ) = %lf \t", interval, fabs(sin(interval)));//sine function output
 printf("cos( %lf ) = %lf \t", interval, fabs(cos(interval)));//cosine function output
}


printf("\n+++++++\n");
return 0;
}
