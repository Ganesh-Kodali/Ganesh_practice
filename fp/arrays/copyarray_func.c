#include<stdio.h>

int copy(int a1[],int a2[],int n)
{
for(int i=0;i<n;i++)
	a1[i]=a2[i];
}

int main()
{
int n;

printf("enter no of elements\n");
scanf("%d",&n);
int a2[n];
int a1[10];
for(int i=0;i<n;i++)
{
scanf("%d",&a2[i]);
}

copy(a1,a2,n);

for(int i=0;i<n;i++)
printf("%d ",a1[i]);
printf("\n");
}
