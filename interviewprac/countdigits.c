#include<stdio.h>
int main()
{
int a,count=0;
printf("enter the number\n");
scanf("%d",&a);
while(a>0)
{
count++;
a=a/10;
}
printf("the number of digits are %d\n",count);
}
