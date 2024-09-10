//Binary search for a sorted array.
#include<stdio.h>

int search(int arr[], int n, int x)
{
    int mid = n/2;
    if(arr[mid] == x) {
        printf("%d found at index %d\n",x, mid);
        return mid;
    }
    else if(arr[mid] > x) {
        printf("%d found at index %d\n",x, search(arr, mid, x));
        return search(arr, mid, x);
    }
    else if(arr[mid] < x) {
        printf("%d found at index %d\n",x, search(arr+mid, n-mid, x));
        return search(arr+mid, n-mid, x);
    }
        

    printf("Element not found\n");
    return -1;
}

void main(){
    int n, s;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for(int i=1; i<=n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to be searched: ");
    scanf("%d", &s);
    search(arr, n, s);
}