#include<stdio.h>

int main()
{

int n;
printf("enter no of elements\n");
scanf("%d",&n);
	int a[n];

int i;
int sum=0;
int avg=0;
		printf("enter array elemnts\n");
	for(i=0;i<n;i++)
	{	scanf("%d",&a[i]);


		sum=a[i]+sum;
	}
	avg=sum/n;
printf("avg of elements is %d",avg);

}
