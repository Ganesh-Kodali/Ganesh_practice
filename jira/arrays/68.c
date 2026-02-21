#include<stdio.h>

int main()
{
int a[]={1,2,3,4,5};

int n=sizeof(a)/sizeof(int);

int b[]={6,7,8,9,10};

int m=sizeof(a)/sizeof(int);

for(int i=0;i<m;i++)
{
a[n+i]=b[i];
}

for(int i=0;i<n+m;i++)
{
printf("%d ",a[i]);
}
}
