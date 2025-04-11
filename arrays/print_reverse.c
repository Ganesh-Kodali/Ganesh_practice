#include<stdio.h>
int main()
{
int i,n;
printf("enter no of elements\n");
scanf("%d",&n);
int ar[n];
printf("enter the elements of array\n");
for(i=0;i<n;i++)
{
scanf("%d",&ar[i]);
}
printf("printing elements of array in reverse\n");
for (i=n-1;i>=0;i--)
{
printf("%d",ar[i]);
printf("\n");
}
}
