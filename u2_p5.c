#include <stdio.h>

#define MAX 100

int main()
{
    int base, power;
    int stack[MAX];
    int top = -1;
    int result = 1;
    int i;

    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter power: ");
    scanf("%d", &power);

    
    for(i = 1; i <= power; i++)
    {
        top++;
        stack[top] = base;
    }
 
    while(top != -1)
    {
        result = result * stack[top];
        top--;
    }

    printf("%d^%d = %d", base, power, result);

    return 0;
}