#include<stdio.h>

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
sum=sum+a[i];
}

printf("sum of the all array elements is %d",sum);
}
