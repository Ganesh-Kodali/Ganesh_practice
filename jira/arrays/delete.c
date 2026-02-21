#include<stdio.h>

int main()
{
        int n=6;
int a[]={1,2,3,4,5,6};

int i,pos=2;
for(i=pos;i<n;i++)
{
a[i]=a[i+1];
}
n--;
for(i=0;i<n;i++)
{
printf("%d ",a[i]);
}
}

