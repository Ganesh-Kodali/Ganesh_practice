#include<stdio.h>
int evenodd(int n)
{
if(n%2==0)
	return 1;
else 
	return 0;
}
int main()
{
int n;
printf("even or odd function\n");
printf("enter the number\n");
scanf("%d",&n);
if(evenodd(n))
	printf("the given number is even\n");
else 
	printf("the given number is odd\n");
}
