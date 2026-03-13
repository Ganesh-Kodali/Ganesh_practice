#include<stdio.h>
#include<stdlib.h>

struct node
{
int data;

struct node* next;
};

struct node* createnode(int value)
{

	struct node* newnode=(struct node*)malloc(sizeof(struct node));

	newnode -> data =value;
	newnode -> next =NULL;

	return newnode;
}

void insertatbegining (struct node ** head,int value)
{

	struct node* newnode=createnode(value);

	newnode-> next =*head;

	*head=newnode;
}


void display(struct node* head)

{

	printf("linkedlist\n");
	while(head!=NULL)
	{
	printf("%d->",head->data);

	head=head->next;
	}

}

int main()
{
struct node * head =NULL;
head=createnode(5);
insertatbegining(&head,10);
insertatbegining(&head,20);
display(head);
return 0;
}
