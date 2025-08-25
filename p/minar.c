#include<stdio.h>

int main()
{
int a[5]={0};
//printf("enter the no fo elements in an array\n");
//int n;
//scanf("%d",&n);
printf("enter the elements of the array\n");

for(int i=0;i<5;i++)
	scanf("%d",&a[i]);
int min=a[0];
for(int i=0;i<=4;i++)
{
if(a[i]<min)
	min=a[i];
}
printf("the min of array is %d",min);
}
