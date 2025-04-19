#include<stdio.h>
int main()
{
int n;
printf("enter the number\n");
scanf("%d",&n);
n=n>>31;
if((n&1)==1)
{
printf("the given number is negative\n");
}
else
{
printf("the given number is postive\n");
}
}
