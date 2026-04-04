#include<stdio.h>

int main()
{
int a[7]={1,2,3,4,5,6};

int pos=3;

int key=100;

int n=7;

for(int i=0;i<n;i++)
{
	printf("%d ",a[i]);
}
printf("\n");
for(int i=n;i>=n-pos;i--)
{
	a[i]=a[i-1];
}
a[pos]=key;

for(int i=0;i<n;i++)
{
        printf("%d ",a[i]);
}
printf("\n");
}
