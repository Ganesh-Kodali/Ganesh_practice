#include<stdio.h>
int main()

{

	int n=0,a=0,b=0,bb=0,c=0,sum=0;
printf("enter the 3digit number\n");
scanf("%d",&n);
a=n%10;
b=n/10;
bb=b%10;
c=n/100;
sum = a+bb+c;
printf("sum of all digits of the 3 digit numbers is %d\n",sum);
}
