#include<stdio.h>

int main()
{
char *p="Ganesh";
*(p+1)='U';

printf("string after modifying is %s\n",p);
}
