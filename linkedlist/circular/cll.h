#ifndef CLL_H
#define CLL_H

#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *link;
} node;

/* If using global head, declare with extern */
// extern node *head;

/* Function declarations */
node *createnode(int data);
void display(node *head);
void insertatbegining(node **headptr, int data);
void insertatend(node **headptr, int data);
void insertatpos(node **headptr, int data, int pos);
void deleteatfirst(node **headptr);
void deleteatend(node **headptr);
void deleteatpos(node **headptr, int pos);
void reverse(node **headptr);
void middle(node **headptr);

#endif
