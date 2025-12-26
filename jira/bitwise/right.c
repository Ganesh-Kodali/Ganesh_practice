#include<stdio.h>
int main()
{
int n,rightshift,shift;
printf("enter the number\n");
scanf("%d",&n);
printf("number of bits to shift\n");
scanf("%d",&shift);
rightshift= (n>>shift);
printf("value after shifting %b\n",rightshift);
}

