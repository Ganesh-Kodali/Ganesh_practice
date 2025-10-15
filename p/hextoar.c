#include<stdio.h>
int main(){

int n=0x1234;

int a[4]={0};

a[0]=n&0x000f;

a[1]=(n&0x00f0)>>4;

a[2]=(n&0x0f00)>>8;

a[3]=(n&0xf000)>>12;

for(int i=0;i<=3;i++)
printf("%x\n",a[i]);
}
