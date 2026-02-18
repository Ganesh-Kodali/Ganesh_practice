#include<stdio.h>

int main()
{
int n;

printf("enter the number\n");

scanf("%d",&n);
int flag=1;
for(int i=2;i<=n/2;i++)
{
if(n%i==0)
{	flag=0;
break;
}
}
if(flag==1)
printf("it is a prime number\n");
else
printf("it is not a prime number\n");
}
