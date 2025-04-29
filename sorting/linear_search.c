#include<stdio.h>
int main()
{
int n,x,count=0;
 int a[]={3,4,6,7,8,9};
printf("enter which element to find\n");
scanf("%d",&x);
for(n=0;n<6;n++)
{
if(x==a[n])
	count++;
}
if(count>0)
{
printf("the given element is present\n");
}
else 
{
printf("the given element is not present\n");
}
}
