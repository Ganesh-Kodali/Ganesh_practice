#include<stdio.h>

int main()
{
int a[]={1,2,3,4,5};

int n=sizeof(a)/sizeof(int);

int b[]={6,7,8,9,10};
int temp;
int m=sizeof(a)/sizeof(int);

for(int i=0;i<n;i++)
{
temp=a[i];
a[i]=b[i];
b[i]=temp;
}

for(int i=0;i<n;i++)
{
printf("%d ",a[i]);
}
}
