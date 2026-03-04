#include<stdio.h>

int main()
{
int n=13;

n=(n>>2|n<<2)&((1<<4)-1);

printf("%d\n",n);
}
