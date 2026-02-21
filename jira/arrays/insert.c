#include<stdio.h>

int main()
{
	int n=6;
int a[7]={1,2,3,4,5,6};

printf("%d\n",n);
int i,pos=2;
int key=10;
for(i=n;i>pos;i--)
{
a[i]=a[i-1];
}
a[pos]=key;
n++;
for(i=0;i<n;i++)
{
printf("%d ",a[i]);
}
}
