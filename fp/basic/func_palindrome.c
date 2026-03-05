#include<stdio.h>

int rev(int n)
{
int sum=0,r;
while(n>0)
{
r=n%10;
sum=sum*10+r;
n=n/10;
}
return sum;
}

int main()
{
printf("enter the number\n");
int n;
scanf("%d",&n);
if(n==rev(n))
	printf("the given number is palindrome\n");
else
	printf("the given numebr is not a palindrome\n");
}
