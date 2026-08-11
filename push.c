#include<stdio.h>
#define MAX 5

int stack[MAX];
int top=-1;
void push(){
    int value;
   
    if(top==MAX-1){
        printf("stack is overFlow:");
    }else{
        printf("enter your value: ");
        scanf("%d",&value);
        top++;
        stack[top]=value;
        printf("%d pushed into stack \n",value);
    }
}
int main(){
    push();
    push();
    push();
    push();
    push();
     push();

    return 0;
}