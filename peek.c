#include<stdio.h>
#define MAX 5
int stack[MAX];
int top=-1;
void peek(){
    if(top==-1){
        printf("stack is empty: ");
    }else{
        printf("Top element is %d",stack[top]);
    }
}
int main(){
    stack[++top]=10;
    stack[++top]=20;
      stack[++top]=500;
    stack[++top]=70;

    peek();
    

}
