#include<stdio.h>

struct book{
	int id;
	float price;
	char title[100];
};

int main()
{
struct book b1={12,356.1,"ganesh"};
struct book *p=&b1;
p->id=10;
printf("%s %d %f\n",p->title,b1.id,b1.price);


}
