#include<stdio.h>
int main()
{
int i,k,j,r;
printf("enter no of rows\n");
scanf("%d",&r);

for (i=0;i<r;i++){
       
for(k=0;k<r-i;k++)
 printf(" ");	

	for(j=0;j<=i;j++)
                printf("* ");
        printf("\n");
}
}
