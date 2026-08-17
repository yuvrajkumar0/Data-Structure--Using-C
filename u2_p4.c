#include <stdio.h>

#define MAX 100

int main()
{
    double n;
    int stack[MAX];
    int top = -1;
    int fact = 1;
    int i;

    printf("Enter a number: ");
    scanf("%.2f", &n);

    
    for(i = 1; i <= n; i++)
    {
        top++;
        stack[top] = i;
    }

     
    while(top != -1)
    {
        fact = fact * stack[top];
        top--;
    }

    printf("Factorial of %d = %d", n, fact);

    return 0;
 }