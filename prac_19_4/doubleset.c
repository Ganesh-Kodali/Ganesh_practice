#include<stdio.h>
int main()
{
int n,p1,p2;
printf("enter the number\n");
scanf("%d",&n);
printf("enter the set bit position\n");
scanf("%d %d",&p1,&p2);

n=n|(1<<p1)|(1<<p2);
printf("number after setting is %d\n",n);
}
