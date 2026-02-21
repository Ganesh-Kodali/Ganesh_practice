#include<stdio.h>

int main()
{
int n=8;
int rev=0,bin=1;
while(n>0)
{
rev=rev+(n&1)*bin;
bin=bin*10;
n=n>>1;
}
    
printf("%d\n",rev);
}
