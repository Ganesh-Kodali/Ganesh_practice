#include<stdio.h>
#include<stdlib.h>

typedef struct node{

int data;
struct node * link;

}node;


node *createnode(int data)
{

node *newnode=malloc(sizeof(node));

newnode->data=data;
newnode->link=NULL;

return newnode;

}

void insertatbegining(node**headptr,int data)
{
node*newnode=createnode(data);
newnode->link=*headptr;
*headptr=newnode;
}

int main()
{
node*head=NULL;
createnode(10);
insertatbegining(&head,20);
insertatbegining(&head,20);
node*p=NULL;
p=head;
while(p!=NULL)
{
printf("%d ->",p->data);
p=p->link;
}

}
