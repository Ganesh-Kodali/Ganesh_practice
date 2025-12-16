#include<stdio.h>

int main()
{

int n;
printf("enter no of elements\n");

scanf("%d",&n);

int arr[n];

int *p=arr;

printf("enter the elements\n");

for(int i=0;i<n;i++)
{
        scanf("%d",p+i);
}


