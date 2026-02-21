#include<stdio.h>

int main()
{
int m;
int sum=0,r,n;

printf("enter the number\n");
scanf("%d",&m);
n=m;
while(n>0)
{
r=n%10;
sum=sum*10+r;
n=n/10;

}
if(sum==m)
	printf("the given number is palindrome\n");
	else
	printf("the given numebr is not palindrome\n");
	}
