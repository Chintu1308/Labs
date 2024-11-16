//Write a program to implement the following Stack applications Factorial

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int stack[100],top=-1;
    stack[++top]=n;
    int result = 1;
    while(top != -1)
    {
        n = stack[top--];
        result *= n;
        if(n > 1)
        {
            stack[++top] = n - 1;
        }
    }
    printf("Factorial is %d\n", result);
    return 0;
}