#include<stdio.h>
int main()
{
int a[]={6,3,7,2,9};
int j,i,temp,p;
p=0;
for (i=0;i<5-1;i++)

{
	p=i;
for(j=i+1;j<5-1;j++)
{
if(a[j]<a[p])
{p=j;
}
}
if (p!=i)
{
temp=a[i];
a[i]=a[p];
a[p]=temp;
}
}
for(i=0;i<5;i++){
        printf("%d ",a[i]);
}}
