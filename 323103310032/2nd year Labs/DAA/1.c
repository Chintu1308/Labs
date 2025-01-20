//1. Implement Selection sort and find how many steps are required to sort 10 elements.

#include <stdio.h>

int selectionSort(int arr[], int n) {
    int i, j, minIndex, temp;
    int stepCount = 0;

    for (i = 0; i < n - 1; i++) {
        minIndex = i;
        for (j = i + 1; j < n; j++) {
            stepCount++;
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }


        if (minIndex != i) {
            temp = arr[minIndex];
            arr[minIndex] = arr[i];
            arr[i] = temp;
            stepCount++;
        }
    }
    return stepCount;
}

int main() {
    int arr[10], i, steps;

    printf("Enter 10 elements to sort: ");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    steps = selectionSort(arr, 10);

    printf("Sorted array: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Total number of steps required: %d\n", steps);

    return 0;
}
