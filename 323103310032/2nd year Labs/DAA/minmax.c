#include <stdio.h>

// Iterative functions
void findMinMaxIterative(int arr[], int n, int *min, int *max) {
    *min = arr[0];
    *max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < *min)
            *min = arr[i];
        if (arr[i] > *max)
            *max = arr[i];
    }
}

// Recursive functions
int findMinRecursive(int arr[], int n) {
    if (n == 1)
        return arr[0];
    int min = findMinRecursive(arr, n - 1);
    return (arr[n - 1] < min) ? arr[n - 1] : min;
}

int findMaxRecursive(int arr[], int n) {
    if (n == 1)
        return arr[0];
    int max = findMaxRecursive(arr, n - 1);
    return (arr[n - 1] > max) ? arr[n - 1] : max;
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Iterative approach
    int minIter, maxIter;
    findMinMaxIterative(arr, n, &minIter, &maxIter);
    printf("Iterative approach:\n");
    printf("Minimum element: %d\n", minIter);
    printf("Maximum element: %d\n", maxIter);

    // Recursive approach
    int minRec = findMinRecursive(arr, n);
    int maxRec = findMaxRecursive(arr, n);
    printf("Recursive approach:\n");
    printf("Minimum element: %d\n", minRec);
    printf("Maximum element: %d\n", maxRec);

    return 0;
}