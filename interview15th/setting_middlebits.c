#include<stdio.h>
int main()
{
int a,b,n,r,l,c;

printf("setting range of bits\n");
printf("enter the number\n");
scanf("%d",&n);
printf("enter the msb bit from which u want to set\n");
scanf("%d",&r);
printf("enter the lsb bit from which u want to set\n");
scanf("%d",&l);
printf("enter 1 to include setting bits , 0 to exclude setting bits\n");
scanf("%d",&c);
if (c==0)
{
a=0xff>>(8-r);
b=0xff<<(l+1);
n=n|(a&b);
printf("the value of number after setting certain number of bits is %b",n);
}
else 
{
a=0xff>>(8-r-1);
b=0xff<<l;
n=n|(a&b);
printf("the value of number after setting certain number of bits is %b",n);
}}
