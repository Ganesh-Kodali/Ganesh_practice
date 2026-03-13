#include<stdio.h>
#pragma pack(1)
struct student{
        int roll;
        char a;
        int marks;
        float b;
        char c;
struct student *d;
int *e;
};

int main()
{
struct student s1;

printf("%d",sizeof(s1));
}

