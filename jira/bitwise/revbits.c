#include<stdio.h>

int main()
{
int n=8;

int rev=0;

while(n!=0)
{
rev=(rev<<1)|(n&1);
n=n>>1;
}
printf("%d\n",rev);
}
