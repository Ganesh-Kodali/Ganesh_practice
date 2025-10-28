#include<stdio.h>
#include<math.h>
int main()
{
        printf("enter the radius\n");
        float r;
        scanf("%f",&r);
        float d;
        for(int i=-2*r;i<=2*r;i++)
        {       for(int j=-2*r;j<=2*r;j++)
		{               d=sqrt(i*i + j*j);
			if(d<r)
                                printf("  ");
                        else
                                printf("* ");
}
printf("\n");
}
}

