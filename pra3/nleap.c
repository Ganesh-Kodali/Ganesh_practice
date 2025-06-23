#include<stdio.h>
int main()
{
int a;
printf("enter no of years\n");
scanf("%d",&a);

for (int i=1;i<a;i++)
{
if ((i%4==0)&&(i%100!=0)||(i%400==0))
        printf("%d\t",i);
}
}
