#include <stdio.h>
#define MAX 10

int front = -1;
int rear = -1;
int pqval[MAX];
int pqpr[MAX];

int isEmpty() {
    if(front == -1 || front > rear){
        return 1;
    }
    return 0;
}

int isFull() {
    if(rear == (MAX - 1)){
        return 1;
    }
    return 0;
}

void dequeue() {
    if (isEmpty()) {
        printf("Priority queue underflow\n");
        return;
    } else {
        printf("Element (%d, %d) deleted from queue\n", pqval[front], pqpr[front]);
        front++;
        return;
        }
    }


void enqueue(int data, int priority) {
    if (isFull()) {
        printf("Queue overflow, element can't be inserted\n");
        return;
    }
    if (rear == -1) {
        rear++;
        pqval[rear] = data;
        pqpr[rear] = priority;
        front = 0;
        return;
    } 
    else {
        int i;
        i = rear-1;
        rear++;
        while  (i >= front && pqpr[i] < priority){
            pqval[i + 1] = pqval[i];
            pqpr[i + 1] = pqpr[i];
            i--;
        }
        pqval[i + 1] = data;
        pqpr[i + 1] = priority;
        return;
    }
    printf("Element (%d, %d) inserted into queue\n", data, priority);
}

void display() {
    if (isEmpty()) {
        printf("Queue is empty\n");
        return;
    }
    for (int i = front; i <= rear; i++) {
        printf("Element: %d, Priority: %d\n", pqval[i], pqpr[i]);
    }
}

int main() {
    int choice, data, priority;
    while (1) {
        printf("1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter the element to be inserted: ");
                scanf("%d", &data);
                printf("Enter the priority of the element: ");
                scanf("%d", &priority);
                enqueue(data, priority);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice\n");
                return 1;
        }
    }
    return 0;
}