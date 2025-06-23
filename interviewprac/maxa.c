#include<stdio.h>
int main()
{
int a[]={10,2,3,4,9};
int max=-999;
int i;
for (i=0;i<5;i++)
{
if (a[i]>max)
{
max=a[i];
}
}
printf("max of array is %d\n",max);
}
