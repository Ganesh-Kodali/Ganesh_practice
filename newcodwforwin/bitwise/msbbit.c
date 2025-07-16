#include<stdio.h>

int main()
{
int n;
int count=0;
printf("enter the number\n");
scanf("%d",&n);

while(n>0){
n=n>>1;
count++;
}
if((n&1)==1)
{
printf("the number is set\n");

}
else
{
printf("the number is not set\n");


}}

