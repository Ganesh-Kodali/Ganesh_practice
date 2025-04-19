#include<stdio.h>
int main()
{
int n,p;
printf("enter the number\n");
scanf("%d",&n);
printf("enter the reset bit position\n");
scanf("%d",&p);

n=n&(~(1<<p));
printf("number after resetting is %d\n",n);
}
