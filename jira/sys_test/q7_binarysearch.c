#include<stdio.h>

int main()
{
int a[]={8,10,15,20,23,25,36,40,48,50,52,59,61,66,68,71,74,78,81,83};

int last=(sizeof(a)/sizeof(int))-1;
printf("%d\n",last);
int first=0;
int mid,flag=0;
int key;
printf("enter the value to find\n");
scanf("%d",&key);
while(first<=last)
{
	mid=(last+first)/2;
if(key==a[mid])
{
	flag=1;
printf("the element is found  %d\n",mid+1);
break;
}
else if(key<a[mid])
{
last=mid-1;
}
else
{
first=mid+1;
}
}
if(!flag)
{
printf("the number is not found\n");
}
}
