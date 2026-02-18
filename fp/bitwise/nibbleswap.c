#include<stdio.h>

int main()
{
int n=0x1234;
int a,b,c;
a=n&0xf000;
b=n&0x00f0;
c=n&0x0f0f;

n=a>>8|c|b<<8;

printf("%x \n",n);
}
