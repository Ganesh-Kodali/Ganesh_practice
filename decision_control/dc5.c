#include<stdio.h>
int main()
{
int a;
printf("enter the number\n");
scanf("%d",&a);

if (a>99 && a<999)
        printf("given number is 3digit number");
else
        printf("given number is not a 3 digit number");
}
