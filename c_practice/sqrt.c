#include<stdio.h>
int main()
{
int number;
float sqrt,temp;
printf("enter the number\n");
scanf("%d",&number);
if (number<0)
{
printf("cant find sqrt for negative number");
return -1;
}

sqrt = number/2;
temp=0;
while(sqrt!=temp)
{
temp=sqrt;
sqrt=(number/temp+temp)*0.5;
}
printf("the sqrt of number %d is %f",number,sqrt);

}
