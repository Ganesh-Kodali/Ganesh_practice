#include<stdio.h>

int main()
{
int n;
scanf("%d",&n);
int i,j;
for(i=1;i<=5;i++)
{
	for(j=2;j<=i ;j++)
           {
                      printf("  ");
           }
	 for(j=6-i;j>=1;j--)
           {
                      printf("%d ",i);
           }	
	
          for(j=6-i;j>=2;j--)
           {   
                      printf("%d ",i);
           }
           
           
           
printf("\n");
}

for(i=5;i>=1;i--)
{if(i==5)
continue;
	for(j=2;j<=i ;j++)
           {
                      printf("  ");
           }
	 for(j=5-i;j>=1;j--)
           { 
                      printf("%d ",i);
           }	
	
          for(j=6-i;j>=1;j--)
           {   
                      printf("%d ",i);
           }
           
           
           
printf("\n");
}


}
