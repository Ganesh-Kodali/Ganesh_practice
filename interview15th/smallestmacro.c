#include<stdio.h>
#define smallest (((a)<(b))&&((a)<(c)))?(a):(((b)<(a))&&((b)<(a)))?(b):(c)
int main()
{
int a,b,c;
printf("enter the values of a,b,c\n");
scanf("%d%d%d",&a,&b,&c);
printf("%d",smallest);
}
