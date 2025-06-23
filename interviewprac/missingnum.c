#include<stdio.h>
int main()
{
int n;
printf("enter first n no of numbers\n");
scanf("%d",&n);
int asum=n*(n+1)/2;
int realsum=0;
int a[]={1,3,4,5};
for(int i=0;i<n;i++)
{
realsum=realsum+a[i];
}
int missn=asum-realsum;
printf("missing number is %d\n",missn);
}
