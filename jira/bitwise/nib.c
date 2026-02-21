#include<stdio.h>

int main()
{
int n=0X1234;

int a,b,c,d;
a=n&0xF000;
b=n&0x0F00;
c=n&0x00F0;
d=n&0x000F;
n=a>>12|b>>4|c<<4|d<<12;
printf("%x",n);
}
