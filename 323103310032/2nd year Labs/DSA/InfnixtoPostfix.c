//Write a program to implement the following Stack applications Infix to postfix expression conversion 

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int precedence(char c)
{
    if(c == '^')
        return 3;
    else if(c == '*' || c == '/')
        return 2;
    else if(c == '+' || c == '-')
        return 1;
    else
        return -1;
}

void infixToPostfix(char *exp)
{
    char stack[100];
    int top = -1;
    stack[++top] = '(';
    strcat(exp,")");
    char postfix[100];
    int j = 0;
    for(int i = 0; exp[i] != '\0'; i++)
    {
        if(exp[i] >= 'a' && exp[i] <= 'z')
        {
            postfix[j++] = exp[i];
        }
        else if(exp[i] == '(')
        {
            stack[++top] = '(';
        }
        else if(exp[i] == ')')
        {
            while(stack[top] != '(')
            {
                postfix[j++] = stack[top--];
            }
            top--;
        }
        else
        {
            while(precedence(exp[i]) <= precedence(stack[top]))
            {
                postfix[j++] = stack[top--];
            }
            stack[++top] = exp[i];
        }
    }
    postfix[j] = '\0';
    printf("Postfix expression is: %s\n",postfix);
}

int main()
{
    char exp[100];
    printf("Enter the infix expression: ");
    scanf("%s",exp);
    infixToPostfix(exp);
    return 0;
}