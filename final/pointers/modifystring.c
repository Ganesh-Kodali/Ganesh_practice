#include<stdio.h>

int main()
{
char *p="hello";
	*(p+1)='g';

printf("after modifying %s\n",p);
}

/*
 * anesh@ganesh-HP-Pavilion-Laptop-14-ec1xxx:~/Ganesh_practice/Ganesh_practice/final/pointers$ gcc modifystring.c
ganesh@ganesh-HP-Pavilion-Laptop-14-ec1xxx:~/Ganesh_practice/Ganesh_practice/final/pointers$ ./a.out
Segmentation fault (core dumped)

*/
