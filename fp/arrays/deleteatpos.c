#include<stdio.h>

int main()
{

	int a[]={1,2,3,4,5,6};

	int pos=3;

	int n=sizeof(a)/sizeof(int);

	for(int i=pos-1;i<n;i++)
		a[i]=a[i+1];
	n--;
	for(int i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
}
