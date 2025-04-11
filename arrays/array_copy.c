#include<stdio.h>
int main()
{
int i,n;
printf("enter no of elements\n");
scanf("%d",&n);
int ar[n];
int ar1[n];
printf("enter the elements of array\n");
for(i=0;i<n;i++)
{
scanf("%d",&ar[i]);
ar1[i]=ar[i];
}
printf("printing elements in 2nd array\n");
for (i=0;i<n;i++)
{
printf("%d",ar1[i]);
printf("\n");
}
}
