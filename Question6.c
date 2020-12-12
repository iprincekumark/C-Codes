/*
Write c program (with function) to create a stack (PUSH function only ) and then print that like a queue, using 
linked list and recursion.
Ex.  
Input: Stack: 10-> 20 ->  30-> 40-> 50
Output: Queue: 10->20->30->40->50
*/
#include <malloc.h>
#include <stdio.h>
typedef struct node
{
    int data;
    struct node *next;
} snode;
snode *push(snode *top, int n)
{
    snode *p = NULL;
    p = (snode *)malloc(sizeof(snode));
    if (p != NULL)
    {
        p->data = n;
        p->next = top;
        top = p;
    }
    else
        printf("Memory not Allocated!\n");
    return top;
}
void disp(snode *top)
{
    if (top == NULL)
        return;
    disp(top->next);
    printf("%d ", top->data);
}
int main()
{
    snode *top = NULL;
    int ch, n;
    do
    {
        printf("1. Push\n2. Display in reverse\n3. Exit\nEnter your choice: ");
        scanf("%d", &ch);
        if (ch == 1)
        {
            printf("Enter value to push: ");
            scanf("%d", &n);
            top = push(top, n);
            printf("Element pushed!\n");
        }
        else if (ch == 2)
        {
            if (top != NULL)
                printf("Stack Status: "), disp(top), printf("\n");
            else
                printf("Stack Underflow!\n");
        }
    } while (ch != 3);
}