/*Logical operator*/
#include <stdio.h>

int main (void){
int weather,outside;

printf("Are you going outside??\n");
printf("If you are going outside then answer 1 and if not then answer 0\n");
scanf("%d",&outside);

printf("Is it raining outside?\n");
printf("If raining then answer 1 and if not then answer 0\n");
scanf("%d",&weather);

if(outside && weather)
    printf("Take umbrella or a rain coat");
else
    printf("Dress normally");

return 0;
}
