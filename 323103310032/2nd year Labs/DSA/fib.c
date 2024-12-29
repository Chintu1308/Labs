//fibnacci search

#include<stdio.h>

fibonacci_search(int a[],int n,int key)
{
    int fib2=0;
    int fib1=1;
    int fib=fib1+fib2;
    while(fib<n)
    {
        fib2=fib1;
        fib1=fib;
        fib=fib1+fib2;
    }
    int offset=-1;
    while(fib>1)
    {
        int i=(offset+fib2<n-1)?offset+fib2:n-1;
        if(a[i]<key)
        {
            fib=fib1;
            fib1=fib2;
            fib2=fib-fib1;
            offset=i;
        }
        else if(a[i]>key)
        {
            fib=fib2;
            fib1=fib1-fib2;
            fib2=fib-fib1;
        }
        else
        {
            return i;
        }
    }
    if(fib1 && a[offset+1]==key)
    {
        return offset+1;
    }
    return -1;
}
