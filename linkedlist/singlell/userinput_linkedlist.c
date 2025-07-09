#include<stdio.h>
#include<stdlib.h>

typedef struct Node {

int data;
 struct Node* next;
}node;

node*createnode(int data)
{
node*Newnode=(node*)malloc(sizeof(node));

Newnode->data=data;
Newnode->next=NULL;

return Newnode;
}

node*insertatend(node**headref, int data)
{
node*newnode=createnode(data);
 if (*headref == NULL) {
        *headref = newnode;
        return;
    }
node* current= *headref;
while(current->next!=NULL)
{
current=current->next;
}
current->next=newnode;

}

node* insertatbegin(node**headref,int data)
{
node*newnode=createnode(data);
newnode->next=*headref;
*headref=newnode;
}


void displaylist(node*head)
{
node * current =head;
while(current!=NULL)
{
printf("%d->",current->data);
current=current->next;
}
printf("NULL\n");
}

int main()
{
node*head=NULL;
int data,m;
displaylist(head);
printf("enter no of nodes\n");
scanf("%d",&m);
printf("enter node values\n");
for(int i=0;i<m;i++)
{scanf("%d",&data);
insertatend(&head,data);
}
insertatend(&head,10);
insertatend(&head,20);
insertatbegin(&head,30);
displaylist(head);
}

