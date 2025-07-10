#include <stdio.h>
#include <stdlib.h>
typedef struct node{
    int data;
   struct node *next;   
}node;

node* createnode(int data)
{
	node* newnode=(node*)malloc(sizeof(node));
	newnode->data=data;
	newnode->next=NULL;
return newnode;
}
node* insert_at_beginning(int data,node**headref)
{
	node* newnode=createnode(data);
	newnode->next=headref;
	headref=newnode;
}
node* insert_at_end(node **headref, int data)
{

	node* newnode=createnode(data);
	node* current=*headref;
	if(*headref==NULL){
		*headref=newnode;
	return;
	}
	while(current->next!=NULL){
         current= current->next;
	}
	current->next=newnode;
}
void display(node *head)
{
	node*current=head;
	 while(current!=NULL){
         printf("%d->",current->data);
	 current=current->next;
        }

}
int main(){
	node * head=NULL;
	int n,m;
        printf("enter the no. of nodes\n");
        scanf("%d",&n);
	for(int i=0;i<n;i++){
	scanf("%d",&m);
	insert_at_end(&head, m);
     }
	 insert_at_beginning(&head,10);
	 insert_at_beginning(&head,100);
	 display(head);
	 return 0;
}
