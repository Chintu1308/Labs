//Circiler queue
#include<stdio.h>
#include<stdlib.h>

#define MAX 10
int Circlerqueue[MAX];
int front=-1, rear=-1;
void insert(int x){
    if(front==(rear+1)%MAX){
        printf("Queue is overflow, so element cannot be inserted\n");
        return;
    }
    if(front==-1){
        front=0;
        rear=(rear+1)%MAX;
        Circlerqueue[rear]=x;
    }
}

void delete(){
    if(front==-1){
        printf("Queue is underflow, so element cannot be deleted\n");
        return;
    }
    else{
        printf("Element deleted from queue is %d\n",Circlerqueue[front]);
        if(front==rear){
            front=-1;
            rear=-1;
        }
        else{
            front=(front+1)%MAX;
        }
    }
}

void display(){
    int i;
    if(front==-1){
        printf("Queue is empty\n");
        return;
    }
    else{
        printf("Elements in the queue are: ");
        for(i=front;i<=MAX-1;i++){
            printf("%d ",Circlerqueue[i]);
        }
        for(i=0;i<=rear;i++){
            printf("%d ",Circlerqueue[i]);
        }
        printf("%d\n",Circlerqueue[i]);
    }
}

int main(){
    int choice, n;
    while(1){
        printf("1.Insert\n2.Delete\n3.Display\n4.Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                printf("Enter the number to be inserted: ");
                scanf("%d",&n);
                insert(n);
                break;
            case 2:
                delete();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(1);

            default:
                printf("Invalid choice\n");
                return 1;
        }
    }
}