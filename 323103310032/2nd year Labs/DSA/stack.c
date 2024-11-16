#include <stdio.h>
#include <stdlib.h>
#define STACKSIZE 100
int list[STACKSIZE];
int top = -1;
int isEmpty(){
    if(top == -1){
        return 1;
    }
    else
        return 0;
}
int isFull(){
    if(top == STACKSIZE - 1){
        return 1;
    }
    else 
        return 0;
}
void pop(){
    if(isEmpty()){
        printf("Stack UNDERFLOW!!..Elements not present\n");
    }
    else{
        printf("The element that is popped is %d\n", list[top]);
        top--;
    }
}
void push(int k){
    if(isFull()){
        printf("Stack OVERFLOW!!..Elements can't be inserted\n");
    }
    else{
        top++;
        list[top] = k;
    }
}
void display(){
    if(isEmpty()){
        printf("The stack is empty.\n");
    }
    else{
        for(int i = top; i >=0; i--){
            printf("%d\n", list[i]);
        }
    }
}
int main(){
    int choice,k;
    while(1){
    printf("1.Push\n2.Pop\n3.Display\n4.Exit\n");
    scanf("%d", &choice);
    switch(choice){
        case 1:
            printf("Enter an element: ");
            scanf("%d", &k);
            push(k);
            break;
        case 2:
            pop();
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