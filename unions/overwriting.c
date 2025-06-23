#include<stdio.h>

#include<string.h>
union test{

int i;
float f;
char c[20];

};

int main()
{
union test t1;
t1.i=5;
printf("%d\n",t1.i);

t1.f=2.5;

printf("%f\n",t1.f);

printf("%d\n",t1.i);

strcpy(t1.c,"ganesh");

printf("%d\n",t1.i);

printf("%f\n",t1.f);

printf("%s\n",t1.c);
}
