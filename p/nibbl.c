#include<stdio.h>

int main()
{
int n=0x12345678;
int a,b,nn;
a=(0xffff0000&n);
b=(0x0000ffff&n);

nn=(a>>16)|(b<<16);
printf("after nibble swap %x\n",nn);
}
