#include<stdio.h>

struct student{
        int id;
        int marks;
};

void display(struct student *s)
{
        printf("%d",s->id);
        printf("%d",s->marks);
}

int main()
{
struct student s;

s.id=1;
s.marks=25;

display(&s);
}

