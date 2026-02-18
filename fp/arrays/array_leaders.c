#include<stdio.h>

int main()
{
int a[]={10,4,2,4,1};

int n=sizeof(a)/sizeof(int);

for(int i=0;i<n;i++)
{
int flag=1;
	int leader=a[i];
for(int j=i;j<n;j++)
{
if(a[j]>leader)
{
	flag=0;
	break;
}
}
if(flag==1)
	printf("%d ",a[i]);
}
}
