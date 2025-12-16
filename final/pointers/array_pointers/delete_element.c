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

printf("enter pos  to delete\n");

int pos;

scanf("%d",&pos);

for(int i=pos;i<n;i++)
*(p+pos)=*(p+pos+1);

for(int i=0;i<n-1;i++)

printf("%d\t",*(p+i));
}
