#include<stdio.h>

int main()
{
int a[]={1,3,5,6,9,10,22,45,87,99};
int n=sizeof(a)/sizeof(int);

int left=0;
int right=n-1;
int mid;
int key;
printf("enter the key u want to find\n");
scanf("%d",&key);
while(left<=right)
{
	mid=(left+right)/2;

	if(key==a[mid]){
		printf("the number is present at %d\n",mid);
		return 0;
	}
	else if(key<a[mid])
		right=mid-1;
	else
		left=mid+1;
	
}
printf("the key is not present\n");
}
