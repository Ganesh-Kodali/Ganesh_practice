#include<stdio.h>

int reverse(int n,int rev)
{
if(n==0)
	return rev;
return  reverse(n/10,(rev*10)+(n%10));
}

int main()
{
int n;
printf("enter the number\n");
scanf("%d",&n);
printf("number after reversiing is %d",reverse(n,0));
}
