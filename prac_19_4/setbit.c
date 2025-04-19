#include<stdio.h>
int main()
{
int n,p;
printf("enter the number\n");
scanf("%d",&n);
printf("enter the set bit position\n");
scanf("%d",&p);

n=n|(1<<p);
printf("number after setting is %d\n",n);
}
