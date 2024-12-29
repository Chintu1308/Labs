//Stack using linked list

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* link;
};

struct Node* top = NULL;

void push(int data) {
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = data;
    temp->link = top;
    top = temp;
}

void pop() {
    if(top == NULL) {
        printf("Stack is Empty\n");
        return;
    }
    struct Node* temp = top;
    top = top->link;
    free(temp);
}

void display() {
    struct Node* temp = top;
    while(temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->link;
    }
    printf("\n");
}

int main() {
    push(1);
    push(2);
    push(3);
    display();
    pop();
    display();
    return 0;
}