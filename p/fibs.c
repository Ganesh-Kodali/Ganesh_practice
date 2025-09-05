#include<stdio.h>

int main()
{
int a,b,c,n;
printf("enter no of times u want to print fib series\n");
scanf("%d",&n);

a=0;
b=1;

printf("fib series %d , %d ,",a,b);

for(int i=2;i<=n;i++)
{
c=a+b;
a=b;
b=c;
printf("%d ",c);
}
}
