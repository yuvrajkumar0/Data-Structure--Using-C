#include<stdio.h>
#include<string.h>

#define MAX 100
int main(){
 char str[MAX];
 char stack[MAX];
 int top = -1;
 int i;

 printf("Enter a string: ");
 scanf("%s",str);

 for(i=0; i<strlen(str); i++){
    top++;
    stack[top]=str[i];
 }
 printf("Reverse string: ");
 while(top !=-1){
    printf("%c", stack[top]);
    top --;
    
 }
 return 0;
}
