#include<stdio.h>
#define MAX 5
int stack[MAX];
int top = -1;

void push(){
    int value;
    if(top==MAX-1)
    {
        printf("Stack OverFlow \n ");
    }else{
        printf("pleae enter value: ");
        scanf("%d",&value);
        top++;
        stack[top]= value;
        printf("%d pushed into stack \n ",value);
    }
    
}
void pop(){
    if(top==-1)
    {
        printf("Stack is under Flow:");
    }else{
        printf("%d popped from stack \n",stack[top]);
        top--;
    }
}
void print(){
    int i;
    if(top == -1){
        printf("Stack is empty \n");
    }else{
        printf("stack elements are \n ");
        for(i = top; i>=0; i--){
            printf("%d \n ",stack[i]);
        }
    }
}
void peek(){
    if(top == -1){
        printf("stack is empty \n ");
    }else{
        printf("Top element = %d \n ",stack[top]);
    }
}
void peep(){
    int position;
    printf("enter position from top");
    scanf("%d",&position);
    if(position <=0 || position> top +1){
        printf("Invalid position \n ");
    }
    else{
        printf("element = %d \n ", stack[top-position +1]);
    }
}
void change()
{
    int position, value;

    printf("Enter position from top: ");
    scanf("%d", &position);

    if (position <= 0 || position > top + 1)
    {
        printf("Invalid position!\n");
    }
    else
    {
        printf("Enter new value: ");
        scanf("%d", &value);

        stack[top - position + 1] = value;

        printf("Element changed successfully.\n");
    }
}

int main()
{
    int choice;

    while (1)
    {
        printf("\n----- STACK MENU -----\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Print\n");
        printf("4. Peek\n");
        printf("5. Peep\n");
        printf("6. Change\n");
        printf("7. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                push();
                break;

            case 2:
                pop();
                break;

            case 3:
                print();
                break;

            case 4:
                peek();
                break;

            case 5:
                peep();
                break;

            case 6:
                change();
                break;

            case 7:
                printf("Program exited.\n");
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}