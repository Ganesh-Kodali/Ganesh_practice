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

void insertatpos(node**headptr,int data, int pos)
{
	node*newnode=createnode(data);
	node*temp=*headptr;

	for(int i=0;i<pos-1 && temp!=NULL ;i++)
		temp=temp->link;
	newnode->link=temp->link;
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

void deleteatpos(node**headptr,int pos)
{
	node*current=*headptr;
	node*temp=*headptr;
	for(int i=0;i<pos-1;i++)
	{
		current=current->link;
	}
	temp=current->link;
	current->link=temp->link;
	free(temp);
	temp->link=NULL;
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
void reverse(node**headptr)
{
	node*prev=NULL;
	node*current=*headptr;
	node*next=NULL;

	while(current!=NULL)
	{
		next=current->link;
		current->link=prev;
		prev=current;
		current=next;
	}
	*headptr=prev;
}

void middle(node**headptr)
{
	node*slow=*headptr;
	node*fast=*headptr;

	while(fast!=NULL && fast->link!=NULL)
	{
		slow=slow->link;
		fast=fast->link->link;
	}
	printf("middle node is %d ",slow->data);
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

	insertatpos(&head,99,1);
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
	node* one=createnode(1);
	head->link=one;
	display(head);
	printf("\n\v");
	printf("inserting at pos\n");
	insertatpos(&head,99,1);
	display(head);
	printf("\n\v");

	printf("deleting at pos\n");
	deleteatpos(&head,2);
	display(head);
	printf("\n\v");
	printf("inserting at begining\n");
	insertatbegining(&head,20);
	insertatbegining(&head,20);
	display(head);
	printf("\n\v");
	printf("reversing linkedlist\n");
	reverse(&head);
	display(head);
	printf("NULL\n\v");
}


