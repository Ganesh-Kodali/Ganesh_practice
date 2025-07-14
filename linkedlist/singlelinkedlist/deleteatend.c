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

void insertatend(node**headptr,int data)
{
node*newnode=createnode(data);
node*temp=*headptr;
while(temp->link!=NULL)
{
temp=temp->link;
}
temp->link=newnode;

}

void deleteatfirst(node**headptr)
{
node *temp=*headptr;

*headptr=temp->link;

free(temp);
temp->link=NULL;
}

void deleteatend(node**headptr)
{
node*current=*headptr;
while(current->link->link!=NULL)
{
current=current->link;
}
free(current->link);
current->link=NULL;

}
void display(node*head)
{
node*p=NULL;
p=head;
while(p!=NULL)
{
printf("%d ->",p->data);
p=p->link;
}


}
int main()
{
node*head=NULL;
head=createnode(10);
printf("inserting nodes at the begining\n");
insertatbegining(&head,20);
insertatbegining(&head,20);
display(head);
printf("\n\v");
printf("inserting nodes at the end\n");
insertatend(&head,30);
display(head);
printf("\n\v");
printf("deleting the first node\n");
deleteatfirst(&head);
display(head);
printf("\n\v");
printf("deleting the last node\n");
deleteatend(&head);
display(head);
printf("NULL\n\v");
}


