// Implement Insertion Sort and analyse the time complexity

#include<stdio.h>
#include<time.h>

void insertion_sort(int arr[], int n){
    for(int i=1; i<n; i++){
        int key = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

int main(){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements: ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    clock_t start, end;
    double time_taken;

    start = clock();
    insertion_sort(arr, n);
    end = clock();
    time_taken = ((double)(end-start))/CLOCKS_PER_SEC;

    printf("Sorted array: ");
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\nTime taken for insertion sort: %f\n", time_taken);

    return 0;
}