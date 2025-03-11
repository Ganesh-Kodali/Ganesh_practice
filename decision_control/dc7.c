#include<stdio.h>
int main()
{
int a,b,c,d;
printf("enter the values of a,b,c\n");
scanf("%d%d%d",&a,&b,&c);
d=(b*b)-(4*a*c);

if (d>0)
        printf("the roots are real and distinct%d\n",d);
else if (d==0)
        printf("the roots are real and equal %d\n",d);

else if (d<0)
        printf("the roots are imaginary%d\n",d);
}
