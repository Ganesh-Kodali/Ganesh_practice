#include<stdio.h>
int main()
{
int p,i,j,n;

printf("freq of array elements\n");
printf("enter no of elements in the array\n");
scanf("%d",&n);
int ar[n];
printf("enter the elements in the array\n");
for(i=0;i<n;i++)
{
scanf("%d",&ar[i]);
}
printf("enter which position to delete\n");
scanf("%d",&p);
for(i=p-1;i<n-1;i++)
{
ar[i]=ar[i+1];
}
printf("after deletion the element\n");
for(i=0;i<n-1;i++)
{
printf("%d",ar[i]);
}}
