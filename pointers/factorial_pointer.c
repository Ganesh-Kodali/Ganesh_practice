#include<stdio.h>
int main()
{
int n,f;
int *p;
p=&f;
f=1;
printf("enter the number\n");
scanf("%d",&n);
while(n>0)
{
*p=(*p)*n;
n--;
}
printf("factorial is %d",*p);

}
