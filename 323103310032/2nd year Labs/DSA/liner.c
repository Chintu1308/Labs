//Liner Search for the element in the array.

#include<stdio.h>

int search(int a[], int n, int s){            
    for(int i=0; i<n; i++){
        if(a[i]==s){
            printf("%d is at the index %d\n",s ,i+1);
            return i;
        }
    }
    
    printf("Element not found");
    
}

void main(){
    int n, s;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int a[n];
    
    printf("Enter the elements of array: ");
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }

    printf("Enter the element to be searched: ");
    scanf("%d",&s);
    search(a,n,s);
}