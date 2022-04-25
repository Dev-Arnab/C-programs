#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct person{

char name[50];
int age;
float salary;

};

void display(struct person p){

printf("Name: %s\n",p.name);
printf("Age: %d\n",p.age);
printf("Salary: %f\n",p.salary);

}

int main (void){

struct person person1;

strcpy(person1.name,"Dev Jyoti Ghosh Arnab");
person1.age=17;
person1.salary=60000;

display(person1);

return 0;
}
