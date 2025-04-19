#include<stdio.h>
int main()
{
int n,p;
printf("enter the number\n");
scanf("%d",&n);
printf("enter the toggle bit position\n");
scanf("%d",&p);

n=n^(1<<p);
printf("number after toggling is %d\n",n);
}
