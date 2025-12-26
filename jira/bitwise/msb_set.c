#include<stdio.h>

int main()
{
int n;
printf("enter the number\n");
scanf("%d",&n);

if(n&(1<<31))
        printf("the lsb bit is set\n");
else
        printf("the lsb bit is not set\n");
}

