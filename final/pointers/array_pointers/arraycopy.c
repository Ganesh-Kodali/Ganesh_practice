#include<stdio.h>

int main()
{

int n;
printf("enter no of elements\n");

scanf("%d",&n);

int arr[n];

int a[n];
int *q=a;
int *p=arr;

printf("enter the elements\n");

for(int i=0;i<n;i++)
{
	scanf("%d",p+i);
}

for(int i=0;i<n;i++)
{
	*q=*p;
	p++;
	q++;
}
q=a;
for(int i=0;i<n;i++)
{
printf("%d\n",*(q+i));
}
}
