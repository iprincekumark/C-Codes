/*
Write c program (with function) to create a queue (Insert function only) and then print in reverse order like 
stack ,using linked list and recursion.
Ex.  
Input : Queue : 1-> 2 ->  3-> 4-> 5
Output : Stack : 5->4->3->2->1

*/
#include <stdio.h>
#include <malloc.h>
typedef struct node
{
    int data;
    struct node *next;
} snode;
snode *enqueue(snode *tail, int n)
{
    snode *p;
    p = (snode *)malloc(sizeof(snode));
    if (p != NULL)
    {
        p->data = n;
        p->next = NULL;
        if (tail == NULL)
            return p;
        tail->next = p;
        tail = p;
    }
    else
        printf("Memory not Allocated!\n");
    return tail;
}
void display(snode *head, snode *tail)
{
    if (head == NULL)
        return;
    display(head->next, tail);
    printf("%d ", head->data);
}
int main()
{
    snode *head = NULL, *tail = NULL;
    int ch, n;
    do
    {
        printf("1. Insert Element\n2. Display in reverse\n3. Exit\nEnter your choice: ");
        scanf("%d", &ch);
        if (ch == 1)
        {
            printf("Enter value to insert: ");
            scanf("%d", &n);
            if (head == NULL)
            {
                head = enqueue(head, n);
                tail = head;
            }
            else
                tail = enqueue(tail, n);
            printf("Element Inserted!\n");
        }
        else if (ch == 2)
        {
            if (head != NULL)
                printf("Queue Status: "), display(head, tail), printf("\n");
            else
                printf("Queue Underflow!\n");
        }
    } while (ch != 3);
    return 0;
}