#include<stdio.h>

int main()
{
int n,sum=0;

printf("enter no of elements in array\n");
scanf("%d",&n);

int a[n];
int *p=a;

printf("enter the array elements\n");

for(int i=0;i<n;i++)
	scanf("%d",p+i);

for(int i=0;i<n;i++)
	sum=sum+*(p+i);

printf("sum of all elements in the array is %d\n",sum);
}
