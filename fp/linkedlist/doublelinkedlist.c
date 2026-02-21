#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *prev;
    struct node *next;
} node;



node *createnode(int data)
{
    node *newnode = (node*)malloc(sizeof(node));

    if(newnode == NULL)
    {
        printf("Memory allocation failed\n");
        exit(1);
    }

    newnode->data = data;
    newnode->prev = NULL;
    newnode->next = NULL;

    return newnode;
}



void insertatbegining(node **headptr, int data)
{
    node *newnode = createnode(data);

    if(*headptr == NULL)
    {
        *headptr = newnode;
        return;
    }

    newnode->next = *headptr;
    (*headptr)->prev = newnode;
    *headptr = newnode;
}



void insertatend(node **headptr, int data)
{
    node *newnode = createnode(data);

    if(*headptr == NULL)
    {
        *headptr = newnode;
        return;
    }

    node *temp = *headptr;

    while(temp->next != NULL)
        temp = temp->next;

    temp->next = newnode;
    newnode->prev = temp;
}



void insertatpos(node **headptr, int data, int pos)
{
    if(pos == 0)
    {
        insertatbegining(headptr, data);
        return;
    }

    node *newnode = createnode(data);
    node *temp = *headptr;

    for(int i = 0; i < pos-1 && temp != NULL; i++)
        temp = temp->next;

    if(temp == NULL)
        return;

    newnode->next = temp->next;
    newnode->prev = temp;

    if(temp->next != NULL)
        temp->next->prev = newnode;

    temp->next = newnode;
}



void deleteatfirst(node **headptr)
{
    if(*headptr == NULL)
        return;

    node *temp = *headptr;

    *headptr = temp->next;

    if(*headptr != NULL)
        (*headptr)->prev = NULL;

    free(temp);
}



void deleteatend(node **headptr)
{
    if(*headptr == NULL)
        return;

    node *temp = *headptr;

    while(temp->next != NULL)
        temp = temp->next;

    if(temp->prev != NULL)
        temp->prev->next = NULL;
    else
        *headptr = NULL;   // only one node case

    free(temp);
}



void deleteatpos(node **headptr, int pos)
{
    if(*headptr == NULL)
        return;

    node *temp = *headptr;

    for(int i = 0; i < pos && temp != NULL; i++)
        temp = temp->next;

    if(temp == NULL)
        return;

    if(temp->prev != NULL)
        temp->prev->next = temp->next;
    else
        *headptr = temp->next;

    if(temp->next != NULL)
        temp->next->prev = temp->prev;

    free(temp);
}



void display(node *head)
{
    node *p = head;

    while(p != NULL)
    {
        printf("%d <-> ", p->data);
        p = p->next;
    }
    printf("NULL\n");
}



void reverse(node **headptr)
{
    node *current = *headptr;
    node *temp = NULL;

    while(current != NULL)
    {
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;
        current = current->prev;
    }

    if(temp != NULL)
        *headptr = temp->prev;
}



void middle(node **headptr)
{
    node *slow = *headptr;
    node *fast = *headptr;

    while(fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    if(slow != NULL)
        printf("Middle node is: %d\n", slow->data);
}



int main()
{
    node *head = NULL;

    insertatbegining(&head, 10);
    insertatbegining(&head, 20);
    insertatbegining(&head, 30);

    display(head);

    insertatend(&head, 40);
    display(head);

    insertatpos(&head, 99, 2);
    display(head);

    deleteatfirst(&head);
    display(head);

    deleteatend(&head);
    display(head);

    deleteatpos(&head, 1);
    display(head);

    middle(&head);

    reverse(&head);
    display(head);

    return 0;
}
