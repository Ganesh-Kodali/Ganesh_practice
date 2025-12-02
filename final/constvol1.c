#include<stdio.h>
int main()
{
volatile const int a=11;
a=10;
printf("%d",a);
return 0;
}

/*
 constvol1.c: In function ‘main’:
constvol1.c:5:2: error: assignment of read-only variable ‘a’
    5 | a=10;
      |  ^
*/
