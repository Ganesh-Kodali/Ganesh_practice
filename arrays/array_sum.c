#include<stdio.h>
int main()
{
int i,n,sum=0;
printf("enter no of elements\n");
scanf("%d",&n);
int ar[n];
printf("enter the elements of array\n");
for(i=0;i<n;i++)
{
scanf("%d",&ar[i]);

sum=sum+ar[i];
}
printf("sum of all array elemtns is%d\n",sum);
}
