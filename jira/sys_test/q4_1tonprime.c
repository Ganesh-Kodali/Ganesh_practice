#include<stdio.h>

int main()
{
int n;
printf("enter the range\n");
scanf("%d",&n);
int flag;
for(int i=2;i<=n;i++)
{flag=1;
for(int j=2;j<i/2;j++)
{
if(i%j==0)
{
flag=0;
break;
}
}
if(flag)
{
printf("%d ",i);
}
}

}
