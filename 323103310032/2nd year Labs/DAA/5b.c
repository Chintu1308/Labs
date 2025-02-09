//Write a program to find the Greatest Common Divisor of two numbers using non recursion and find how many steps are required to execute it.

#include<stdio.h>

int GCD(int a, int b, int *steps) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
        (*steps)++;
    }
    return a;
}

int main() {
    int a, b, steps = 0;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    
    printf("The GCD of %d and %d is %d\n", a, b, GCD(a, b, &steps));
    printf("Steps: %d\n", steps);

    return 0;
}
