#include<stdio.h>
#include<math.h>
int main()
{
int a,b,c,d;
float r1,r2;
printf("finding roots of the quadratic expression\n");
printf("enter the values of a,b,c\n");
scanf("%d%d%d",&a,&b,&c);
d=(b*b)-4*a*c;
if(d>0)
{
r1=(-b+sqrt(d))/2.0*a;
r2=(-b-sqrt(d))/2.0*a;
}
if(d==0)
{
r2=r1=-b/2.0*a;

}
if(d<0)
{
r1=-b/2.0*a;
r2=sqrt(d)/2.0*a;

}

printf("the roots of the expresion are %f %f",r1,r2);
}
