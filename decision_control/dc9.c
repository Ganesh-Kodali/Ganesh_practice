#include<stdio.h>

int main()

{
int a,b,c;
printf("enter the values of a,b,c\n");
scanf("%d%d%d",&a,&b,&c);

if ((a>b)&&(a>c))
	printf("a is greater%d\n",a);
if ((b>a)&&(b>c))
	printf("b is greater%d\n",b);
if ((c>a)&&(c>b))
	printf("c is greater%d\n",c);

if ((a>b)&&(a=c)||(a>c)&&(a=b))
	printf("a is greater and it is repeating twice%d\n",a);

if ((b>a)&&(b=c)||(b>c)&&(b=a))
        printf("b is greater and it is repeating twice%d\n",b);
if ((c>a)&&(c=b)||(c>b)&&(c=a))
        printf("c is greater and it is repeating twice%d\n",c);
if (a=b=c)
	printf("all the values are same%d\n",a);
}
