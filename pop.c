#include<stdio.h>
#define MAX 5
int stack[MAX];
int top = -1;
 
 void pop(){
    if(top==-1){
        printf("stack is UnderFlow \n ");
    }else{
        printf("%d popped from stack \n ",stack[top]);
        top--;
    }
 }
 int main(){
    stack[++top]=10;
    stack[++top]=20;
    stack[++top]=30;
    stack[++top]=40;
    pop();
     pop();
      pop();
       pop();
        pop();
         pop();
 }