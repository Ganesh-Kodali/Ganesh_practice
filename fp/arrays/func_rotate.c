#include<stdio.h>

int rotate_one(int a[],int n)
{
int temp=a[0];
for(int i=0;i<n-1;i++)
{
a[i]=a[i+1];
}
a[n-1]=temp;
}

int rotate_mul(int a[],int n,int d)
{
for(int i=1;i<=d;i++)
	rotate_one(a,n);
}

void print(int a[],int n)
{
for(int i=0;i<n;i++)
	printf("%d ",a[i]);
printf("\n");
}
int main()
{
int a[]={1,2,3,4,5,6};
int n=sizeof(a)/sizeof(int);
int d;
print(a,n);
printf("etner no of times u wanna rotate\n");
scanf("%d",&d);

rotate_mul(a,n,d);
print(a,n);
}
