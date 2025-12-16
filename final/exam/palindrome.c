#include<stdio.h>

int main()
{
printf("enter the number\n");

int n;

scanf("%d",&n);

int sum=0,r;

int m=n;

while(m>0)
{
r=m%10;
sum=sum*10+r;
m=m/10;
}

if(n==sum)
	printf("the given number is palindrome\n");
else
printf("the given number is not a palindrome\n");
}
