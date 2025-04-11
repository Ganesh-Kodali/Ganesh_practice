#include<stdio.h>
int main()
{
short int n;
printf("enter the number\n");
scanf("%hd",&n);
if((((n>>5)&1)==1)&&(((n>>10)&1)==1))
{
n=n^(1<<12);

}
else
{
n=n&(~((1<<5)|(1<<10)));
}
printf("%d",n);
}
