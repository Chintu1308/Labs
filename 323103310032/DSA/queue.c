#include <stdio.h>
#include <stdlib.h>
#define  QUEUESIZE 100
int queue[QUEUESIZE];
int front = -1, rear = -1;
void enqueue(int x){
    if(rear == QUEUESIZE - 1){
        printf("Queue overflow!!\n");
        return;
    }
    rear++;
    queue[rear] = x;
    if(front == -1){
        front = 0;
    }
}
void dequeue(){
    if(front == -1 || front>rear){
        printf("Queue underflow!! No elements to remove\n");
        return;
    }
    else{
        printf("The element %d deleted from queue\n", queue[front]);
        front = front + 1;
    }

}
void display(){
    if(rear == -1){
        printf("Queue is empty\n");
        return;
    }
    else{
        for(int i = front; i <= rear; i++){
            printf("%d\n", queue[i]);
        }
    }
}
int main(){
    int choice, n;
    while(1){
    printf("1.enqueue\n2.dequeue\n3.display\n4.Exit\n");
    scanf("%d", &choice);
    switch(choice){
        case 1:
            printf("Enter the number to be insereted: ");
            scanf("%d", &n);
            enqueue(n);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(1);
        default:
            printf("Invalid choice\n");

    }
    }
}

 