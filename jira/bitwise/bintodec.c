#include<stdio.h>


void bin( unsigned n)
{
if (n>1)
        n=n/2;

printf("%d",n%2);

}

int main()
{
bin();
}

