#include<stdio.h>
#include<stdlib.h>

typedef struct node{
        int data;
        struct node* link
}node;


node* createnode(int data)
{
node*newnode=malloc(sizeof(node));
newnode->data=data;
newnode->link=NULL;

return newnode;
}



