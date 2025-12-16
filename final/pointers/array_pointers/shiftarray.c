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
int temp=*p;

for(int i=0;i<n;i++)
{
*(p+i)=*(p+i+1);
}

*(p+n-

printf("after shifting \n");

for(int i=0;i<n;i++)
printf("%d",*(p+i));
}
