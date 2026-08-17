#include <stdio.h>

#define MAX 100

int main()
{
    int n;
    int stack[MAX];
    int top = -1;
    int i;
    int smallest;

    printf("Enter a number: ");
    scanf("%d", &n);
    for(i = 2; i <= n; i++)
    {
        if(n % i == 0)
        {
            top++;
            stack[top] = i;
        }
    }
    smallest = stack[top];

    while(top != -1)
    {
        if(stack[top] < smallest)
        {
            smallest = stack[top];
        }

        top--;
    }

    printf("Smallest Common Divisor = %d", smallest);

    return 0;
}