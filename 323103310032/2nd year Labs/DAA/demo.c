#include <stdio.h>  
#include <stdlib.h>  

// Swap function  
void swap(int *a, int *b, int *steps) {  
    int temp = *a;  
    *a = *b;  
    *b = temp;  
    (*steps)++; // Increment steps for each swap  
}  

// Partition function to plaintce the pivot in the correct position  
int partition(int arr[], int low, int high, int *steps) {
    int pivot = arr[low];  // Using the first element as pivot
    int i = low - 1, j = high + 1;

    while (1) {
        // Move i to the right
        do {
            i++;
            (*steps)++;  // Count comparison
        } while (arr[i] < pivot);

        // Move j to the left
        do {
            j--;
            (*steps)++;  // Count comparison
        } while (arr[j] > pivot);

        // If pointers cross, return partition index
        if (i >= j)
            return j;

        // Swap arr[i] and arr[j] and count swap step
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        (*steps)++;
    }
}


// Quick sort function with recursion  
void quick_sort(int arr[], int low, int high, int *steps) {  
    if (low < high) {  
        int pi = partition(arr, low, high, steps); // Partitioning index  
        quick_sort(arr, low, pi - 1, steps);      // Recursively sort elements before partition  
        quick_sort(arr, pi + 1, high, steps);     // Recursively sort elements after partition  
    }  
}  

// Print the array  
void print_array(int arr[], int size) {  
    for (int i = 0; i < size; i++) {  
        printf("%d ", arr[i]);  
    }  
    printf("\n");  
}  

int main() {  
    int n, steps = 0;  

    // Prompt user for the number of elements  
    scanf("%d", &n);  

    // Allocate memory for the array  
    int *arr = (int *)malloc(n * sizeof(int));  
    if (arr == NULL) {  
        printf("Memory allocation failed");  
        return 1;  
    }  

    // Input array elements from the user  
    for (int i = 0; i < n; i++) {  
        scanf("%d", &arr[i]);  
    }  

    // Perform quicksort  
    quick_sort(arr, 0, n - 1, &steps);  

    // Print the sorted array  
    printf("Sorted array: ");  
    print_array(arr, n);  
    
    // Print the number of steps  
    printf("Number of steps: %d\n", steps);  

    // Free allocated memory  
    free(arr);  

    return 0;  
}