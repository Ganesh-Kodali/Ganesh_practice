#include<stdio.h>
int main()
{
int a,b,f;
a=0;
b=1;
printf("this is fibonacci series\n");
printf("enter how many time u want to repeat\n");
scanf("%d",&f);
for(int i=0;i<f;i++)
{
printf("%d\t%d\t",a,b);
a=a+b;
b=a+b;
}

}
