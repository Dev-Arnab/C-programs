#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>

//node structure
typedef struct list{ int data; struct list *next;}list;

//create list
list* createList(int d){
  list* head = malloc(sizeof(list));
  head -> data = d;
  head -> next = NULL;
  return head;
}

//adds element at beginning of list
list* addToFront(int d,list* h){
  list* head=createList(d);
  head -> next = h;
  return head;
}

//swaps the pointer of the nodes a and b
void swap(list* a,list* b){
    int temp = a->data;
    a->data = b->data;
    b->data = temp;
}

void bubbleSort(list* a){
    int swapped,i;
    list* ptr;
    list* lptr = NULL;
    if(a == NULL) return;

    do{
        swapped = 0;
        ptr = a;

        while(ptr->next != lptr){
            if(ptr->data > ptr->next->data){
                swap(ptr,ptr->next);
                swapped = 1;
            }
            ptr = ptr->next;
        }
        lptr = ptr;
    }
    while(swapped);
}
//creates list from array values
list* arrayToList(int d[],int size){
  list* head = createList(d[0]);
  int i;
  for(i=1;i<size;i++){
    head = addToFront(d[i],head);
  }
  return head;
}

//prints the created list
void printList(list *h){
  int i =0;
  while(h != NULL){
    if(i%5 == 0) printf("\n");
    printf("%d\t",h -> data);
    h = h -> next;
    i = i +1;
  }
}

void main(){
  //the assignment is to generate 100 values
  //and store em in a list and sort
  //them using bubble sort. Print them with 5
  // elements in a row until the end
  srand(time(0));
  //generates array of 100 random numbers
  int data[100];
  list* head = NULL;
  for(int i=0; i < 100;i++){
    data[i]=rand()%1000;
  }
  //converts the array to linked list and prints the list
  head = arrayToList(data,100);
  printf("List before sorted::");
  printList(head);

  //the list is sorted and then printed again

  printf("\n\nList after sorted::");
  bubbleSort(head);
  printList(head);
}
