#include<stdio.h>
int main()
{
int a[]={1,3,4,5,6};
int temp,i;
for (i=0;i<3;i++)
{
temp=a[i];
a[i]=a[5-1-i];
a[5-1-i]=temp;
}
for(i=0;i<5;i++)
{
printf("%d",a[i]);
}
}
