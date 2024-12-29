//Singile linked list menu based program
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head=NULL;
void insert(){
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data: ");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    if(head==NULL){
        head=newnode;
    }
    else{
        struct node *temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newnode;
    }
    printf("Data inserted successfully\n");
}
void search(){
    int search;
    printf("Enter the data to search: ");
    scanf("%d",&search);
    struct node *temp=head;
    while(temp!=NULL){
        if(temp->data==search){
            printf("Data found\n");
            return;
        }
        temp=temp->next;
    }
    printf("Data not found\n");
}

