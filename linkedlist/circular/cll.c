#include "cll.h"

/* If using global head, define once here */
// node *head = NULL;

node *createnode(int data)
{
    node *newnode = (node *)malloc(sizeof(node));
    if (newnode == NULL)
    {
        printf("Memory allocation failed\n");
        exit(1);
    }

    newnode->data = data;
    newnode->link = newnode;
    return newnode;
}

void display(node *head)
{
    if (head == NULL)
    {
        printf("List is empty\n");
        return;
    }

    node *p = head;
    do
    {
        printf("%d -> ", p->data);
        p = p->link;
    } while (p != head);

    printf("(head)\n");
}

void insertatbegining(node **headptr, int data)
{
    node *newnode = createnode(data);

    if (*headptr == NULL)
    {
        *headptr = newnode;
        return;
    }

    node *temp = *headptr;
    while (temp->link != *headptr)
    {
        temp = temp->link;
    }

    newnode->link = *headptr;
    temp->link = newnode;
    *headptr = newnode;
}

void insertatend(node **headptr, int data)
{
    node *newnode = createnode(data);

    if (*headptr == NULL)
    {
        *headptr = newnode;
        return;
    }

    node *temp = *headptr;
    while (temp->link != *headptr)
    {
        temp = temp->link;
    }

    temp->link = newnode;
    newnode->link = *headptr;
}

void insertatpos(node **headptr, int data, int pos)
{
    if (pos <= 1 || *headptr == NULL)
    {
        insertatbegining(headptr, data);
        return;
    }

    node *newnode = createnode(data);
    node *temp = *headptr;

    for (int i = 1; i < pos - 1 && temp->link != *headptr; i++)
    {
        temp = temp->link;
    }

    newnode->link = temp->link;
    temp->link = newnode;
}

void deleteatfirst(node **headptr)
{
    if (*headptr == NULL)
    {
        printf("List is empty\n");
        return;
    }

    node *temp = *headptr;

    if (temp->link == *headptr)
    {
        free(temp);
        *headptr = NULL;
        return;
    }

    node *last = *headptr;
    while (last->link != *headptr)
    {
        last = last->link;
    }

    *headptr = temp->link;
    last->link = *headptr;
    free(temp);
}

void deleteatend(node **headptr)
{
    if (*headptr == NULL)
    {
        printf("List is empty\n");
        return;
    }

    node *current = *headptr;

    if (current->link == *headptr)
    {
        free(current);
        *headptr = NULL;
        return;
    }

    while (current->link->link != *headptr)
    {
        current = current->link;
    }

    node *temp = current->link;
    current->link = *headptr;
    free(temp);
}

void deleteatpos(node **headptr, int pos)
{
    if (*headptr == NULL)
    {
        printf("List is empty\n");
        return;
    }

    if (pos <= 1)
    {
        deleteatfirst(headptr);
        return;
    }

    node *current = *headptr;

    for (int i = 1; i < pos - 1 && current->link != *headptr; i++)
    {
        current = current->link;
    }

    if (current->link == *headptr)
    {
        printf("Invalid position\n");
        return;
    }

    node *temp = current->link;
    current->link = temp->link;
    free(temp);
}

void reverse(node **headptr)
{
    if (*headptr == NULL || (*headptr)->link == *headptr)
    {
        return;
    }

    node *prev = NULL;
    node *current = *headptr;
    node *next = NULL;
    node *head = *headptr;

    do
    {
        next = current->link;
        current->link = prev;
        prev = current;
        current = next;
    } while (current != head);

    head->link = prev;
    *headptr = prev;
}

void middle(node **headptr)
{
    if (*headptr == NULL)
    {
        printf("List is empty\n");
        return;
    }

    node *slow = *headptr;
    node *fast = *headptr;

    while (fast->link != *headptr && fast->link->link != *headptr)
    {
        slow = slow->link;
        fast = fast->link->link;
    }

    printf("Middle node is %d\n", slow->data);
}
