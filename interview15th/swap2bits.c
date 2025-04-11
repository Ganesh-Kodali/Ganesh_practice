#include<stdio.h>
int main()
{
int n,p1,p2,p3,p4;
printf("this is swapping of 4 bits(4 positions)\nn");
printf("enter the number\n");
scanf("%d",&n);
printf("enter the first 2 bit postions which u want to swap\n");
scanf("%d%d",&p1,&p2);
printf("enter the next 2 bit positions which u want to swap\n");
scanf("%d%d",&p3,&p4);
if(((n>>p1)&1)!=((n>>p2)&1))
		{
		
		n=n^((1<<p1)|(1<<p2));
		}
if(((n>>p3)&1)!=((n>>p4)&1))                                                                                                                         {
                                                                                                                                                     n=n^((1<<p3)|(1<<p4));                                                                                                               }

printf("number after swapping is %d",n);
}
