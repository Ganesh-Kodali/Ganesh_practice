#include<stdio.h>

int asum(int n,int a[]){

if (n==0)
	return 0;

	return a[n-1]+asum(n-1,a);
}

int main()
{
int n;

printf("enter no of elements\n");
scanf("%d",&n);

int a[n];
int sum=0;
printf("enter the elements of the array\n");
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
}

printf("sum of the all array elements is %d",asum(n,a));
}

