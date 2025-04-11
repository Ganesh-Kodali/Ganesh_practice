#include<stdio.h>
int main()
{
int count,i,j,n;

printf("freq of array elements\n");
printf("enter no of elements in the array\n");
scanf("%d",&n);
int ar[n];
printf("enter the elements in the array\n");
for(i=0;i<n;i++)
{
scanf("%d",&ar[i]);
}
	
for(i=0;i<n;i++)
{count=1;
for(j=0;j<n;j++)
{
if(i!=j)
{
if(ar[i]==ar[j])
{
count++;
ar[j]=-100000;
}
}
}
if(ar[i]!= -100000){
printf("%d occurs %d times\n",ar[i],count);
}}

}
