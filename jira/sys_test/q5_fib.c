#include<stdio.h>

int main()
{
int n;

printf("enter the range\n");
scanf("%d",&n);
int f1=0,f2=0,sum=1;

while(sum<n)
{
printf("%d ",sum);

f1=f2;
f2=sum;
sum=f1+f2;
}
}
