#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
int data;

struct node * next;
}node;

node * createlinkedlist(int n);

void displaylist(node * head);

node * createlinkedlist(int n){

        int i=0;
        node * head = NULL;
        node * temp = NULL;
        node * p = NULL;

        for (i=0;i<n;i++)
        {
        temp = (node*)malloc(sizeof(node));
        printf("enter the data for node %d \n",i+1);
        scanf("%d",&(temp-> data));
        temp->next=NULL;

        if(head==NULL)
        {
        head=temp;
        }
        else
        {
        p=head;
        while(p->next !=NULL)
                p=p->next;
        p->next =temp;
        }
        }
return head;
}

void displaylist(node * head)
{
        node * p = head;
        while(p!=NULL)
        {
        printf("%d->",p->data);
        p=p->next;
        }
}


node * insert(node *head, int value)
{
node *temp=(node*)malloc(sizeof(node));
temp->data=value;
temp->next=NULL;

if (head==NULL)
	head=temp;
node *p=head;
while(p->next !=NULL)
{	p=p->next;
}
p->next=temp;
return head;
}

int main()
{
int n;
node * HEAD = NULL;
printf("enter no of nodes in linked list\n");
scanf("%d",&n);
HEAD=createlinkedlist(n);
HEAD=insert(HEAD,10);
displaylist(HEAD);

printf("NULL\n");
}

