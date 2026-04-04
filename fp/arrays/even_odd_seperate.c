#include<stdio.h>

int main()
{
int a[]={1,2,3,4,5,6,7,8,9,12,34,33,25,27};

int n=sizeof(a)/sizeof(int);

int even[100];
int odd[100];

int e=0,o=0;

for(int i=0;i<n;i++)
{
	if(a[i]%2==0){
		even[e]=a[i];
		e++;
	}
	else
	{
		odd[o]=a[i];
		o++;
	}
}
printf("even elements\n");
for(int i=0;i<e;i++)
	printf("%d ",even[i]);
	printf("\n");
	printf("odd elements\n");
for(int i=0;i<o;i++)
	printf("%d ",odd[i]);
	printf("\n");
}
