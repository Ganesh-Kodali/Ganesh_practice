#include<stdio.h>
int main()

{
int a,b,c;
printf("enter the values of a,b,c");
scanf("%d%d%d",&a,&b,&c);
if((a>=b)&&(a>=c))
{
printf("a is greatest");
}
else if(b>=c)
{
printf("b is greater");
}
else {
printf("c is greater");
}}
