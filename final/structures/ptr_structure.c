#include<stdio.h>

struct student{
        int roll;
        int marks;
};

int main()
{
struct student s1={1,95};
struct student *ptr=&s1;
printf("%d",ptr->roll);
printf("%d",ptr->marks);
}

