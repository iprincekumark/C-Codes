
#define Max 10
#include <stdio.h>
int main()
{
    int stack[Max], top = -1, ch;
    do
    {
        printf("\n Menu \n 1 push \n 2 pop \n 3 Display \n 4 Peek");
        printf("\n Enter your choice");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            top = push(stack, top);
            break;
        case 2:
            top = pop(stack, top);
            break;
        case 3:
            top = display(stack, top);
            break;
        case 4:
            top = peek(stack, top);
            break;
        }
    } while (ch > 0 && ch < 5);
}
int push(int *stack, int top)
{
    int item;
    if (top == Max - 1)
    {
        printf("Stack Overflow");
    }
    else
    {
        printf("Enter element");
        scanf("%d", &item);
        top++;
        stack[top] = item;
    }
    return top;
}
int pop(int *stack, int top)
{
    if (top == -1)
    {
        printf("Stack Underflow\n");
    }
    else
    {
        printf("Element popped is %d\n", stack[top]);
        top--;
    }
    return top;
}
int display(int *stack, int top)
{
    int i;
    if (top == -1)
    {
        printf("No element is present\n");
    }
    else
    {
        printf("Stack is\n");
        for (i = top; i >= 0; i--)
        {
            printf("%d\n", stack[i]);
        }
    }
    return top;
}
int peek(int *stack, int top)
{
    if (top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("%d", stack[top]);
    }
    return top;
}