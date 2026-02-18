#include<stdio.h>

int main()
{
int n=0x1234;
int a,b,c,d;

a=n%16;
b=(n/16)%16;
c=(n/256)%16;
d=(n/4096);
printf("a =%x \n",a);
printf("b= %x \n",b);
printf("c =%x \n",c);
printf("d= %x \n",d);

}

