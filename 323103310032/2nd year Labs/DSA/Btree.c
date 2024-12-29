//Binary search tree
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *root=NULL;

void insert(int data)
{
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->left=NULL;
    temp->right=NULL;
    if(root==NULL)
    {
        root=temp;
    }
    else
    {
        struct node *current=root;
        struct node *parent;
        while(1)
        {
            parent=current;
            if(data<parent->data)
            {
                current=current->left;
                if(current==NULL)
                {
                    parent->left=temp;
                    return;
                }
            }
            else
            {
                current=current->right;
                if(current==NULL)
                {
                    parent->right=temp;
                    return;
                }
            }
        }
    }
}

void inorder(struct node *temp)
{
    if(temp!=NULL)
    {
        inorder(temp->left);
        printf("%d ",temp->data);
        inorder(temp->right);
    }
}

void preorder(struct node *temp)
{
    if(temp!=NULL)
    {
        printf("%d ",temp->data);
        preorder(temp->left);
        preorder(temp->right);
    }
}

void postorder(struct node *temp)
{
    if(temp!=NULL)
    {
        postorder(temp->left);
        postorder(temp->right);
        printf("%d ",temp->data);
    }
}

int main()
{
    insert(50);
    insert(30);
    insert(70);
    insert(20);
    insert(40);
    insert(60);
    insert(80);
    printf("Inorder: ");
    inorder(root);
    printf("\n");
    printf("Preorder: ");
    preorder(root);
    printf("\n");
    printf("Postorder: ");
    postorder(root);
    printf("\n");
    return 0;
}