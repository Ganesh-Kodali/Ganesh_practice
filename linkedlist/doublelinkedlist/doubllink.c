#include<stdio.h>
#include<stdlib.h>

typedef struct node{

	int data;
	struct node *prev;
	struct node *next;

}node;

node *createnode(int data)
{
	node *newnode=malloc(sizeof(node));

	newnode->data=data;
	newnode->prev=NULL;
	newnode->next=NULL;

	return newnode;
}

void insertatbegining(node **headptr,int data)
{
	node *newnode=createnode(data);

	newnode->next=*headptr;

	if(*headptr!=NULL)
	{
		(*headptr)->prev=newnode;
	}

	*headptr=newnode;
}

void insertatend(node **headptr,int data)
{
	node *newnode=createnode(data);

	if(*headptr==NULL)
	{
		*headptr=newnode;
		return;
	}

	node *temp=*headptr;

	while(temp->next!=NULL)
	{
		temp=temp->next;
	}

	temp->next=newnode;
	newnode->prev=temp;
}

void insertatpos(node **headptr,int data,int pos)
{
	if(pos==0)
	{
		insertatbegining(headptr,data);
		return;
	}

	node *newnode=createnode(data);
	node *temp=*headptr;

	for(int i=0;i<pos-1 && temp!=NULL;i++)
	{
		temp=temp->next;
	}

	if(temp==NULL)
	{
		free(newnode);
		return;
	}

	newnode->next=temp->next;
	newnode->prev=temp;

	if(temp->next!=NULL)
	{
		temp->next->prev=newnode;
	}

	temp->next=newnode;
}

void deleteatfirst(node **headptr)
{
	if(*headptr==NULL)
	{
		return;
	}

	node *temp=*headptr;

	*headptr=temp->next;

	if(*headptr!=NULL)
	{
		(*headptr)->prev=NULL;
	}

	free(temp);
}

void deleteatend(node **headptr)
{
	if(*headptr==NULL)
	{
		return;
	}

	if((*headptr)->next==NULL)
	{
		free(*headptr);
		*headptr=NULL;
		return;
	}

	node *temp=*headptr;

	while(temp->next!=NULL)
	{
		temp=temp->next;
	}

	temp->prev->next=NULL;
	free(temp);
}

void deleteatpos(node **headptr,int pos)
{
	if(*headptr==NULL)
	{
		return;
	}

	if(pos==0)
	{
		deleteatfirst(headptr);
		return;
	}

	node *temp=*headptr;

	for(int i=0;i<pos && temp!=NULL;i++)
	{
		temp=temp->next;
	}

	if(temp==NULL)
	{
		return;
	}

	if(temp->next!=NULL)
	{
		temp->next->prev=temp->prev;
	}

	if(temp->prev!=NULL)
	{
		temp->prev->next=temp->next;
	}

	free(temp);
}

void display(node *head)
{
	node *p=head;

	while(p!=NULL)
	{
		printf("%d <-> ",p->data);
		p=p->next;
	}
}

void reverse(node **headptr)
{
	node *current=*headptr;
	node *temp=NULL;

	while(current!=NULL)
	{
		temp=current->prev;
		current->prev=current->next;
		current->next=temp;
		current=current->prev;
	}

	if(temp!=NULL)
	{
		*headptr=temp->prev;
	}
}

void middle(node **headptr)
{
	node *slow=*headptr;
	node *fast=*headptr;

	while(fast!=NULL && fast->next!=NULL)
	{
		slow=slow->next;
		fast=fast->next->next;
	}

	if(slow!=NULL)
	{
		printf("middle node is %d",slow->data);
	}
}

int main()
{
	node *head=NULL;

	head=createnode(10);

	printf("inserting nodes at the begining\n");
	insertatbegining(&head,20);
	insertatbegining(&head,30);
	display(head);
	printf("NULL\n\v");

	printf("inserting at pos\n");
	insertatpos(&head,99,1);
	display(head);
	printf("NULL\n\v");

	printf("inserting nodes at the end\n");
	insertatend(&head,40);
	display(head);
	printf("NULL\n\v");

	printf("deleting the first node\n");
	deleteatfirst(&head);
	display(head);
	printf("NULL\n\v");

	printf("deleting the last node\n");
	deleteatend(&head);
	display(head);
	printf("NULL\n\v");

	printf("deleting at pos\n");
	deleteatpos(&head,1);
	display(head);
	printf("NULL\n\v");

	printf("inserting at begining\n");
	insertatbegining(&head,50);
	insertatbegining(&head,60);
	display(head);
	printf("NULL\n\v");

	printf("reversing linkedlist\n");
	reverse(&head);
	display(head);
	printf("NULL\n\v");

	middle(&head);
	printf("\n");

	return 0;
}
