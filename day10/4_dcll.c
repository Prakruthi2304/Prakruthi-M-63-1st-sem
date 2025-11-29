#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head, *newnode, *tail;
int main()
{
    head = NULL;
    int ch = 1;
    while (ch)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("enter a number: ");
        scanf("%d", &newnode->data);
        newnode->next = NULL;
        newnode->prev = NULL;
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
        }
        else
        {
            tail->next = newnode;
            newnode->prev = tail;
            tail = newnode;
        }
        newnode->next = head;
        head->prev = tail;
        printf("do you need to continue or not (0|1): \n");
        scanf("%d", &ch);
    }
    printf("elements: \n");
    tail = head;
    while (tail->next != head)
    {
        printf("%d ", tail->data);
        tail = tail->next;
    }
    printf("%d", tail->data);
    printf("\n");
    return 0;
}
