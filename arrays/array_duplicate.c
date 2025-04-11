#include<stdio.h>
int main()
{
int i,j,n,count=0;
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

for(j=i+1;j<n;j++)
{

if (ar[i]==ar[j])
{
count++;
break;
}
}
}
printf("total no of duplicate elements are :%d\n",count);

}

