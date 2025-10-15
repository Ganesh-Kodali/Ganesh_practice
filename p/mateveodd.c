#include<stdio.h>

int main()
{
printf("enter no of elements\n");

int n,even=0,odd=0;

scanf("%d",&n);
 
int a[n];

for(int i=0;i<n;i++)
	scanf("%d",&a[i]);

for(int i=0;i<n;i++)
{

	if(a[i]%2==0)
		even++;
	else
		odd++;
}
printf("total no of even n odd numbers are %d %d",even,odd);
}
