#include<stdio.h>

int glo=100;
int main()
{
int a=8;
float b=3.14;
char c='u';
int sum= a+(int)b;
int product=a*(int)b;
int leftshift=(a<<2);
int rightshift=(a>>2);
int divisiom=a/b;

if(a>b)
{
printf("a is greater\n");
}
else {
printf("b is greater\n");
}
printf("enter 5 elements of array");
int ar[55555]={0};
for( static int i=0;i<5;i++)
{
scanf("%d",&ar[i]);
}
for(  i=4;i>=0;i--)
{
printf("%d",ar[i]);
}
int w=0;
while(w>0)
{
printf("this is while loop\n");
}

do
{
printf("this is do while\n");
}while(w>0);




}
