#include<stdio.h>
int main()
{
int a,r,sum=0,n;
printf("enter the number\n");
scanf("%d",&a);
n=a;
while(a>0){
r=a%10;
sum=sum*10+r;
a=a/10;
}
if (sum==n)
{
printf("the given number is a palindrome\n");

}
else
{
printf("the given number is not a palindrome\n");
}
}
