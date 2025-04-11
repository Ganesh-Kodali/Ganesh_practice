#include<stdio.h>
int main()
{
short int n,i,count=0;
printf("counting no of reset bits\n");
printf("enter the number\n");
scanf("%hd",&n);
for(i=0;i<16;i++)
{
if(((n>>i)&1)==0)
{
count++;
}
}
printf("no of reset bits in the given number are %b :%d\n",n,count);
}
