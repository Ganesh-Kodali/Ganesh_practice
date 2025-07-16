#include<stdio.h>

int main()
{
int n,pos;
printf("enter the number\n");
scanf("%d",&n);

printf("enter the position\n");
scanf("%d",&pos);

int g;

g=n&~(1<<pos);

printf("the nth bit position of the number is %d",g);


}

