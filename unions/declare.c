#include<stdio.h>
#include<string.h>
union test{

 int a;
 char b[50];
 float c;


};

int main()
{
 union test t1;
  t1.a=5;
  printf("a=%d\n",t1.a);

  strcpy(t1.b,"ganesh");
  printf("%s\n",t1.b);

  t1.c=2.5;
  printf("%f\n",t1.c);
  
  printf("a=%d\t b=%s\t c=%f\n",t1.a,t1.b,t1.c);

}
