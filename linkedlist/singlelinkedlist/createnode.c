#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int data;
	struct node* link
}node;

int main()
{node * head=NULL;
	head=malloc(sizeof(node));
	head->data=45;
	head->link=NULL;
	printf("%d",head->data);
}
