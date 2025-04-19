#include<stdio.h>
int main()
{
int n,p;
printf("enter the number\n");
scanf("%d",&n);
printf("enter the no of times to left shift\n");
scanf("%d",&p);
n=n<<p;
printf("number after left shift is %b\n",n);
}
