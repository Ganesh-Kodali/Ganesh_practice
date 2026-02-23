#include<stdio.h>

int fact(int n)
{
if(n==0)
	return 1;
else 
	return n*fact(n-1);
}

int main()
{
int n;
printf("enter the number\n");
scanf("%d",&n);
printf("factorial of the number %d is %d",n,fact(n));
}
