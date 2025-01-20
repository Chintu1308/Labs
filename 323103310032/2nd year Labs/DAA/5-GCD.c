//Write a program to find the Greatest Common Divisor of two numbers using recursion and find how many steps are required to execute it.

#include <stdio.h>

int GCD(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return GCD(b, a % b);
    }
}

int main() {
    int a, b;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    
    printf("The GCD of %d and %d is %d\n", a, b, GCD(a, b));

    return 0;
}
