#include<stdio.h>

int diameter(int r){

return 2*r;
}

int cir(int r)
{
return 2*3.14*r;
}

double area(int r)
{
return 3.14*r*r;
}
int main()
{

int r;
printf("enter the raidus of the circle\n");
scanf("%d",&r);
int c,d,a;
c=cir(r);
d=diameter(r);
a=area(r);
printf("the area of the circle is %d\n the diameter of the circle is %d\n the circumferance of the the circle is %d\n",a,d,c);
}
