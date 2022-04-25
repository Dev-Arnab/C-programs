#include <stdio.h>

typedef struct person person;
//Global structure
struct person{

char name[50];
int age;
float salary;

};


int main (void){

person person[4];
int i;

for(i=0;i<4;i++){
 printf("Enter information for person %d\n",i+1);
 printf("Enter name: ");
 fflush(stdin);
 gets(person[i].name);
 printf("Enter age: ");
 scanf("%d",&person[i].age);
 printf("Enter salary: ");
 scanf("%f",&person[i].salary);
 printf("\n");
 }

printf("\n\nInformations about the persons\n");

for(i=0;i<4;i++){
    printf("Informations about person %d\n",i+1);
    printf("Name: %s\n",person[i].name);
    printf("Age: %d\n",person[i].age);
    printf("Salary: %.2f\n",person[i].salary);

}

return 0;
}
