#include<stdio.h>
#include<math.h>
int main()
{
	printf("enter the radius\n");
	float r;
	scanf("%f",&r);
	float d;
	for(int i=-r;i<=r;i++)
	{	for(int j=-r;j<=r;j++)
		{		d=sqrt(i*i + j*j);
			if(d<r)
				printf("* ");
			else
				printf("  ");
}
printf("\n");
}
}
