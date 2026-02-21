#include<stdio.h>

int main()
{
int a[]={1,8,3,4,5};

int n=sizeof(a)/sizeof(int);

int first=a[0],second=a[0];

for(int i=0;i<n;i++)
{
if(a[i]>first)
{
second=first;
first=a[i];
}
if(a[i]>second && a[i]!=first)
{
	second=a[i];
}
}

printf("%d",second);
}
