#include<stdio.h>

int main()
{
int n;
scanf("%d",&n);
int i,j;
for(i=5;i>=1;i--)
{
           for(j=1;j<i ;j++)
           {
                      printf("  ");
           }
           
           for(j=5;j>=i;j--)
           {
                      printf("%d ",j);
           }
           
           for(j=i+1;j<=5;j++)
           {
                      printf("%d ",j);
           }
           
printf("\n");
}

for(i=i+2;i<=5;i++)
{
           for(j=1;j<i ;j++)
           {
                      printf("  ");
           }
           
           for(j=5;j>=i;j--)
           {
                      printf("%d ",j);
           }
           
           for(j=i+1;j<=5;j++)
           {
                      printf("%d ",j);
           }
           
printf("\n");
}

}
