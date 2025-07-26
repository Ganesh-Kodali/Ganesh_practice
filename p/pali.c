#include<stdio.h>

int main()
{
int n,s=0,r=0,m,nn;
printf("enter the number\n");
scanf("%d",&n);
nn=n;

while(n!=0)
{
m=n%10;
s=s*10+m;
n=n/10;
}
if(nn==s)
	printf("the given number is palindrome\n");
	else
	printf("the given number is not a palindrome\n");
}
