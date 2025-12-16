#include<stdio.h>

int main()
{

int n;
printf("enter no of elements\n");

scanf("%d",&n);

int arr[n];

int a[n];
int *q=a;
int *p=arr;

printf("enter the elements\n");

for(int i=0;i<n;i++)
{
        scanf("%d",p+i);
}

for(int i=0;i<n;i++)
{
	scanf("%d",q+i);
}

int temp;
p=arr;
q=a;
for(int i=0;i<n;i++)
{
	temp=*p;
	*p=*q;
	*q=temp;
	p++;
	q++;
}
p=arr;
q=a;
printf("first array elements after swapping is \n");
for(int i=0;i<n;i++)
{
	printf("%d\t",*(p+i));
}

printf("second array elements after swapping is \n");
for(int i=0;i<n;i++)
{
        printf("%d\t",*(q+i));
}
}
