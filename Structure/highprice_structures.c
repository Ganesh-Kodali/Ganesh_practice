#include<stdio.h>
struct book{
char title[50];
char author[50];
int price;
};
int main()
{int n,i,highp=0;
        printf("enter no of books\n");
        scanf("%d",&n);
        struct book b[n];
for(i=0;i<n;i++){
printf("enter the title of the book\n");
scanf("%s",b[i].title);
printf("enter the name of the author\n");
scanf("%s",b[i].author);
printf("enter the price of the book\n");
scanf("%d",&b[i].price);
}
highp=b[0].price;
for (i=0;i<n;i++)
{if(b[i].price>highp)	{
	highp=b[i].price;}
	}
for (i=0;i<n;i++)
{
if (highp==b[i].price)
{
printf("%s %s %d\n",b[i].title,b[i].author,b[i].price);
}}}
