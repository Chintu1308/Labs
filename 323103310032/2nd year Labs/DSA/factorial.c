//Recursive code for finding the factorial.
#include<stdio.h>

int factorial(int  n);

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("Factorial of %d is %d\n",n,factorial(n));
    return 0;
}

int factorial(int n)
{
    if(n==0)
        return 1;
    else
        return n*factorial(n-1);
}