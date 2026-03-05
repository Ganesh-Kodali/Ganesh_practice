#include<stdio.h>
#include<math.h>
int isamstrong(int n)
{
int m,count=0,sum=0,r;
m=n;
while(m>0)
{
	m=m/10;
	count++;
}

while(n>0)
{
	r=n%10;
	sum=sum+pow(r,count);
	n=n/10;
}
return sum;
}

int main()
{
printf("enter the number\n");
int n;
scanf("%d",&n);
if(n==isamstrong(n))
	printf("the given number is amstrong number\n");
else
	printf("the given number is not a amstrong number\n");
}
