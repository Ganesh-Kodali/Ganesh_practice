#include<stdio.h>

int main()
{
int m,n;
printf("enter the number\n");
scanf("%d",&n);

int sum=0,r;
m=n;
while(n>0){

	r=n%10;
	sum=sum*10+r;
	n=n/10;
}
if(sum==m)
	printf("THE GIVEN NUMBER IS PALINDROME\N");
	else
	printf("the given numebr is not a palindrome\n");
}
