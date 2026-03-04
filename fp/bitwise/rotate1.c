#include<stdio.h>

int main()
{
int n=13;

n=(n>>1|n<<3)&((1<<4)-1);

printf("%d\n",n);
}

