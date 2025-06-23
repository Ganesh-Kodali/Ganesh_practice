#include<stdio.h>
int main()
{
int a[]={6,3,7,2,9};
int j,i,temp;

for (i=0;i<5-1;i++)
{
for(j=i+1;j<5-1;j++)
{
if(a[j]<a[i])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
for(i=0;i<5;i++){
	printf("%d ",a[i]);
}}
