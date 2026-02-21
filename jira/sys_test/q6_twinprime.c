#include<stdio.h>

int main()
{
int n,p1=-1;
printf("enter the range\n");
scanf("%d",&n);
int flag;
for(int i=2;i<=n;i++)
{flag=1;
for(int j=2;j<i;j++)
{
if(i%j==0)
{
flag=0;
break;
}
}
if(flag)
{
if(i-p1==2)
	printf("%d %d\n",i,p1);
p1=i;

}
}

}
