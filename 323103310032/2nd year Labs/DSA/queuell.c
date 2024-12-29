//Normal Queue using linked list 

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *front = NULL;

void insert(int data)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = NULL;
    if(front == NULL)
    {
        front = temp;
    }
    else
    {
        struct node *p = front;
        while(p->next != NULL)
        {
            p = p->next;
        }
        p->next = temp;
    }
}

void delete()
{
    if(front == NULL)
    {
        printf("Queue is empty\n");
    }
    else
    {
        struct node *temp = front;
        front = front->next;
        free(temp);
    }
}

void display()
{
    struct node *p = front;
    while(p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

int main()
{
    insert(10);
    insert(20);
    insert(30);
    insert(40);
    display();
    delete();
    display();
    return 0;
}