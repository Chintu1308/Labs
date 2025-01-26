// 2. Implement and Analysis factorial of a number program using iterative and recursive methods

#include<stdio.h>
#include<time.h>

int factorial_iterative(int n){
    int fact = 1;
    for(int i=1; i<=n; i++){
        fact *= i;
    }
    return fact;
}

int factorial_recursive(int n){
    if(n == 0){
        return 1;
    }
    return n * factorial_recursive(n-1);
}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    clock_t start, end;
    double time_taken;

    start = clock();
    printf("Factorial of %d using iterative method: %d\n", n, factorial_iterative(n));
    end = clock();
    time_taken = ((double)(end-start))/CLOCKS_PER_SEC;
    printf("Time taken for iterative method: %f\n", time_taken);

    start = clock();
    printf("Factorial of %d using recursive method: %d\n", n, factorial_recursive(n));
    end = clock();
    time_taken = ((double)(end-start))/CLOCKS_PER_SEC;
    printf("Time taken for recursive method: %f\n", time_taken);

    return 0;
}