#include<stdio.h>
#define MAX 5
 
int queue[MAX];
int front = -1;
int rear = -1;

void enqueue(int value){
    if(rear==MAX-1){
        printf("Queue is Overflow");
    }else if(front == -1 && rear ==-1){
        front = 0; 
        rear  = 0; 

    }else{
        rear++;
    }
    
    queue[rear]=value;
    printf("%d omserted into queue \n ", value);
    
}

int main(){
     int a;
     printf("please enter a value: ");
     scanf("%d",&a);
      int b;
     printf("please enter a value: ");
     scanf("%d",&b);
      enqueue(a);
      enqueue(b);
       return 0;
}