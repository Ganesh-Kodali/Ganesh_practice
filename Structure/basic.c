#include<stdio.h>

struct book{

char title[50];
char author[50];
int price;

};
int main()
{
struct book b1;
printf("enter the title of the book\n");
scanf("%s",b1.title);
printf("enter the name of the author\n");
scanf("%s",b1.author);
printf("enter the price of the book\n");
scanf("%d",&b1.price);
printf("deatils of the book are\n");
printf("%s %s %d\n",b1.title,b1.author,b1.price);
}
