#include<stdio.h>

int main()
{
int n=5;
//printf("enter the size of n\n");
//scanf("%d",&n);
int a[5]={10,20,65,100,5};
int *p;
p=a;
int max=*p;
for(int i=0;i<n;i++)
{
	
if (*(p+i)>max)
	max=*(p+i);
}
printf("max of array is %d",max);
}
