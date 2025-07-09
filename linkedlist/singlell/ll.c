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
displaylist(head);
insertatend(&head,10);
insertatend(&head,20);
displaylist(head);
}
