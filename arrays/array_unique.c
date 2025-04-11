#include<stdio.h>
int main()
{
int i,j,n;
int count=0;
printf("enter no of elements\n");
scanf("%d",&n);
int ar[n];
printf("enter the elements of array\n");
for(i=0;i<n;i++)
{	
scanf("%d",&ar[i]);
}
for(i=0;i<n;i++)
{
int count=0;
for(j=0;j<n;j++)
{
	if(i!=j)
	{
if (ar[i]==ar[j])
{
count++;
}}
}
if(count==0)
{
printf("unique element%d\n",ar[i]);
}
}
}
