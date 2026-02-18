#include<stdio.h>

int main()
{
int n=0x1234;
int a,b,c,d;

a=n%16;
b=(n/16)%16;
c=(n/256)%16;
d=(n/4096);
printf("a =%x \n",a);//4
printf("b= %x \n",b);//3
printf("c =%x \n",c);//2
printf("d= %x \n",d);//1

int m=a*4096+b*256+c*16+d;

int nn=b*256+c*16+a+d*4096;
printf("before reverse =%x\n",n);

printf("after reverse =%x\n",m);

printf("changing in middle =%x\n",nn);

}

