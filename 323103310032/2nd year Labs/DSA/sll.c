//Single linked list(insert and delete at beg, end, display  and reverse list methods)

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;

void insert_beg(int data)
{
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = head;
    head = newnode;
}

void insert_end(int data)
{
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = NULL;
    if(head == NULL)
    {
        head = newnode;
    }
    else
    {
        struct node *temp = head;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
    }
}

void delete_beg()
{
    if(head == NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        struct node *temp = head;
        head = head->next;
        free(temp);
    }
}

void delete_end()
{
    if(head == NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        struct node *temp = head;
        struct node *prev = NULL;
        while(temp->next != NULL)
        {
            prev = temp;
            temp = temp->next;
        }
        if(prev == NULL)
        {
            head = NULL;
        }
        else
        {
            prev->next = NULL;
        }
        free(temp);
    }
}

void display()
{
    struct node *temp = head;
    while(temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void reverse()
{
    struct node *prev = NULL;
    struct node *current = head;
    struct node *next = NULL;
    while(current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
}

int main()
{
    insert_beg(10);
    insert_beg(20);
    insert_end(30);
    insert_end(40);
    display();
    delete_beg();
    display();
    delete_end();
    display();
    return 0;
}