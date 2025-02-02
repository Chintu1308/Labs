#include <stdio.h>
#include <time.h>

int binarySearchIterative(int arr[], int n, int k) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == k)
            return mid; 
        else if (arr[mid] < k)
            low = mid + 1;  
        else
            high = mid - 1; 
    }
    return -1; 
}

int binarySearchRecursive(int arr[], int low, int high, int k) {
    if (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == k)
            return mid; 
        else if (arr[mid] < k)
            return binarySearchRecursive(arr, mid + 1, high, k); 
        else
            return binarySearchRecursive(arr, low, mid - 1, k); 
    } 
    return -1; 
}

int main() {
    int n, k;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter sorted elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter an element to search: ");
    scanf("%d", &k);

    clock_t start, end;
    double cpu_time_used;

    // Iterative binary search
    start = clock();
    int resultIterative = binarySearchIterative(arr, n, k);
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    if (resultIterative != -1)
        printf("Iterative: Element found at position %d\n", resultIterative + 1);
    else
        printf("Iterative: Element not found\n");
    printf("Iterative binary search time: %f seconds\n", cpu_time_used);

    // Recursive binary search
    start = clock();
    int resultRecursive = binarySearchRecursive(arr, 0, n - 1, k);
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    if (resultRecursive != -1)
        printf("Recursive: Element found at position %d\n", resultRecursive + 1);
    else
        printf("Recursive: Element not found\n");
    printf("Recursive binary search time: %f seconds\n", cpu_time_used);

    return 0;
}
