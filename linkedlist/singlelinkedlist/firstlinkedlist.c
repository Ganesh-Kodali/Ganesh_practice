#include<stdio.h>
#include<stdlib.h>

typedef struct node{
        int data;
        struct node* link
}node;

int main()
{
	node * head=NULL;
        head=malloc(sizeof(node));
        head->data=45;
        head->link=NULL;
  //      printf("%d",head->data);
node * current=malloc(sizeof(node));
current->data=46;
current->link=NULL;
head->link=current;

node * ccurrent=malloc(sizeof(node));
ccurrent->data=466;
ccurrent->link=NULL;
current->link=ccurrent;


node*p=NULL;
p=head;
while(p!=NULL)
{
printf("%d ->",p->data);
p=p->link;
}
}

