#include<stdio.h>
int main()
{
int n,a,b,nn;
printf("nibble swap\n");
printf("enter the hexa decaimal number\n");
scanf("%x",&n);
a=n&0x0f;
b=n&0xf0;
nn=(a<<4)|(b>>4);
printf("after nibble swaping in 8 bit hexa deciaml number is 0x%x\n",nn);
}
