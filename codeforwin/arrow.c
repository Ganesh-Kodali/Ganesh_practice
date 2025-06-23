#include<stdio.h>
int main()
{
int n;
printf("enter the no of rows for star pattern\n");
scanf("%d",&n);

for (int i=0; i<n;i++)
{
for(int s=0;s<5;s++)
{
printf("  ");
}
for (int j=5; j<n+5;j++)
{
if(j==i+5){

printf("* ");
}
else
{
printf("   ");
}
}
printf("\n");
}
for (int i=0; i<1;i++)
{                                                                                                                                    for (int j=0; j<(2.5*n);j++){
printf("* ");
}
printf("\n");
}
for (int i=0; i<n;i++)
{
for(int s=0;s<5;s++)
{
printf("  ");
}
for (int j=5; j<n+5;j++){
if(j==(5+n-i-1)){

printf("* ");
}
else
{
printf("   ");
}
}
printf("\n");
}
}
