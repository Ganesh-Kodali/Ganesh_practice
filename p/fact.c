#include<stdio.h>

int main()
{
int n,f=1;

printf("enter the factorial number\n");
scanf("%d",&n);

for(int i=1;i<=n;i++)
{
f=f*i;
}
printf("the factorial of the number is %d\n",f);
}
