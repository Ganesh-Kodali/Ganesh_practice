#include<stdio.h>
#include<math.h>
int main()
{
printf("enter the number\n");

int n;
scanf("%d",&n);
int m,r,count=0,sum=0;
m=n;
int x=n;
while(m>0)
{
count++;
m=m/10;
}
while(n>0)
{
r=n%10;
sum = sum +pow(r,count);
n=n/10;
}
if(x==sum)
	printf("given number is amstrong\n");
	else
	printf("given number is not a amstrong\n");
}
