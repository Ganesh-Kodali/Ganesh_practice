#include<stdio.h>
int main()
{
int a[]={1,4,7,9,10,82};
int x;
printf("enter the number\n");
scanf("%d",&x);
int low=0,high=5,mid;

while(low<=high){
mid=(low+high)/2;

	if(x==a[mid])
	{		printf("the element is found %d\n",mid);
break;
	
	}else if(x<a[mid])
		high=mid-1;
	else 
		low=mid+1;
}
}
