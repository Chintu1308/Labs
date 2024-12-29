//Heap(insertion and deletion)

#include<stdio.h>
#include<stdlib.h>

int heap[100],n;

void insert(int num)
{
    int i;
    n=n+1;
    i=n;
    while((i>1)&&(num>heap[i/2]))
    {
        heap[i]=heap[i/2];
        i=i/2;
    }
    heap[i]=num;
}

int delete()
{
    int i,j,x,temp,val;
    if(n==0)
    {
        printf("Heap is empty\n");
        return 0;
    }
    val=heap[1];
    x=heap[n];
    n=n-1;
    i=1;
    j=2*i;
    while(j<=n)
    {
        if((j<n)&&(heap[j]<heap[j+1]))
            j=j+1;
        if(x>=heap[j])
            break;
        heap[i]=heap[j];
        i=j;
        j=2*j;
    }
    heap[i]=x;
    return val;
}

void display()
{
    int i;
    if(n==0)
    {
        printf("Heap is empty\n");
        return;
    }
    for(i=1;i<=n;i++)
        printf("%d ",heap[i]);
    printf("\n");
}

int main()
{
    int ch,num;
    n=0;
    while(1)
    {
        printf("1.Insert\n2.Delete\n3.Display\n4.Exit\n");
        printf("Enter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: printf("Enter the number to be inserted:");
                    scanf("%d",&num);
                    insert(num);
                    break;
            case 2: num=delete();
                    if(num!=0)
                        printf("Deleted number is %d\n",num);
                    break;
            case 3: display();
                    break;
            case 4: exit(0);
            default: printf("Invalid choice\n");
        }
    }
    return 0;
}