#include<stdio.h>

int main()
{
int n=10;
int m=n;
int count=0;
while((n&1)!=1)
{
n=n>>1;
count++;
}
m=m&~(1<<count);


printf("%d \n",m);
}
