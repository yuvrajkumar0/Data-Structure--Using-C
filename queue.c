#include<stdio.h>
#define MAX 5
int queue[MAX];
int front =-1;
int rear=-1;

void insert();
void delete_element();
void disply();
void main(){
int op;
do{
  printf("\n 1. Insert");
  printf("\n 2. Delete");
  printf("\n 3. Display");
  printf("\n 1. Exit");

  printf("please enter your choice: ");
  scanf("%d",&op);
  switch(op){
   case 1:
       insert();
       break;
    case 2:
         delete_element();
         break;
    case 3:
        display();
        break;
    default:
        printf("Invlaid option");

  }while(op!=4);
}
void insert()
 {
     int num;
     printf("please enter your number:");
     scanf("%d",num);
     if(rear == MAX-1){
        printf("queue is overFlow: ");
        return ;
     }
     else if(front == -1)
 }
}
void delete_element(){
 int val;
 if(front == -1 || front> rear){
    printf("\n queue is Underflow..");
    return ;
 } else{
         val = queue[front];
         printf("\n Deleted value is:%d ",val);
       }
}
void display()
{
    int i;
    if(front==-1 || front>rear){
        printf("queue is Empty:");
        return;

    }
    else
    {
            for(i=front; i<rear; i++){
                printf("\t",queue[i])
            }
    }
}
