#include<stdio.h>

int main()
{
int a[]={1,2,3,4,5};

int n=sizeof(a)/sizeof(int);
int l=0,r=n-1;
while(l<r)
{
	int temp=a[l];
	a[l]=a[r];
	a[r]=temp;
	l++;
	r--;
}


for(int i=0;i<=4;i++)
{
	printf("%d",a[i]);
}
}
