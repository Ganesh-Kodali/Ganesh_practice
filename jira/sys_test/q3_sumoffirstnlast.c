#include<stdio.h>

int main()
{
int m;
int sum=0,first,last;

printf("enter the number\n");
scanf("%d",&m);
if(m<10)
{
sum=m;
}
else
{
last=m%10;
while(m>9)
{
m=m/10;
}
first=m;

sum=first+last;
}
printf("sum of first n last digits are %d",sum);
}

