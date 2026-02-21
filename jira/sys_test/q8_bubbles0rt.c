#include<stdio.h>

int main()
{
int a[]={10,1,4,7,9};

int n=sizeof(a)/sizeof(int);
int temp;
printf("before sorting\n");

for(int i=0;i<n;i++)
{
printf("%d ",a[i]);
}

for(int i=0;i<n-1;i++)
{
for(int j=0;j<n-i-1;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
printf("\nafter sorting\n");

for(int i=0;i<n;i++)
{
printf("%d ",a[i]);
}
}
