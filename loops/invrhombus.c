#include<stdio.h>

int main(){
int rows,i=0,j=0,k=0;
printf("enter no of rows\n");
scanf("%d",&rows);
for (i=1;i<=rows;i++)
 {   if (i%2==0)
	 continue;
for(k=1;k<=rows-i;k++){
printf("  ");

}
for (j=1;j<=i;j++)
{
printf("*   ");
}
printf("\n");
}

for (i=rows-2;i>=0;i--)
{
	 if (i%2==0)
		continue;
        for(k=1;k<=rows-i;k++)

        {
                printf("  ");
        }                                                                                                                                    for (j=1;j<=i;j++)                                                                                                                   {                                                                                                                                    printf("*   ");                                                                                                                        }                                                                                                                                    printf("\n");                                                                                                                        }
}   
