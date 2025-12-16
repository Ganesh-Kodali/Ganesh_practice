#include<stdio.h>

int main()
{

int n;
printf("enter no of elements\n");

scanf("%d",&n);

int arr[n];

int *p=arr;

printf("enter the elements\n");

for(int i=0;i<n;i++)
{
        scanf("%d",p+i);
}
int max=*p;

for(int i=0;i<n;i++)
{
if(max<*(p+i))
	max=*(p+i);
}

printf("max element is %d\n",max);
}

