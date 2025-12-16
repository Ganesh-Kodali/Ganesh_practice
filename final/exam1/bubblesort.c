#include<stdio.h>

int main()
{
int arr[]={9,2,3,1,8};
int temp,n=5;

for(int i=0;i<n;i++)
{
	for(int j=0;j<n-i;j++)
	{
		if(arr[j]>arr[j+1])
		{
			temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
		}
	}
}

for(int i=0;i<n;i++)
printf("%d\t",arr[i]);
}
