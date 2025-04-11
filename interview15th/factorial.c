#include<stdio.h>
int main()
{
int f=1,n,i;
printf("enter the factorail number\n");
scanf("%d",&n);
for(i=n;i>0;i--)
{
f=f*i;
}
printf("the value of the factorail is %d",f);
}
