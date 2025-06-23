#include<stdio.h>
#include<math.h>
int main()
{
int n;
printf("enter the number to check for palindrome\n");
scanf("%d",&n);
int nn=0;
int t=0;
int r=0;
int sum=0;
t=n;
while(t>0)
{
r=t%10;
sum=sum*10+r;
t=t/10;
}
if(n==sum)
{
printf("the number is palindrome\n");
}
else
{
printf("the number is not a palindrome\n");
}
}
