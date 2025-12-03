#include<stdio.h>
#include<math.h>

int main()
{
	float a,b;
	float ep=0.00001;
printf("enter the 2 values\n");
scanf("%f",&a);
scanf("%f",&b);

if(fabs(a-b)<ep)
	printf("both are equal\n");
else if(a>b)
	printf("a is greater\n");
else
	printf("b is greater\n");
}
