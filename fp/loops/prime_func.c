#include<stdio.h>

int isprime(int n){
	for(int i=2;i<=n/2;i++)
	{
	if(n%i==0)
		return 0;
	}
return 1;
}

int main()
{
int n;

printf("enter the number\n");

scanf("%d",&n);

if(isprime(n))
	printf(" prime number\n");
else
	printf("not a prime number\n");
}

