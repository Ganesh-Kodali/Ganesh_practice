#include<stdio.h>
#include<stdlib.h>

typedef struct sll{
int data;
struct sll *next;
}sll;

sll*head=NULL,*tail=NULL;

sll*create_node(int n)
{
sll*temp=malloc(sizeof(sll));
if(temp==NULL)
{
printf("Node not created\n");
return NULL;
}
else
{
temp->data=n;
temp->next=NULL;
return temp;
}
}

void insert_node(sll*t){
if(head==NULL){
head=t;
tail=t;
}
else
{
tail->next=t;
tail=t;
}
}

void display()
{

for(sll*k=head;k!=NULL;k=k->next)
{
printf("%d ->",k->data);
}
}

int main()
{
int num,dt;
sll*temp=NULL;
printf("enter no of node\n");
scanf("%d",&num);
for(int i=0;i<num;i++){
printf("enter the data %d node",i+1);
scanf("%d",&dt);
temp=create_node(dt);
insert_node(temp);
}
printf("the linkedlist is \n");
display();
return 0;
}
