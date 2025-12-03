#include<stdio.h>

#include<string.h>

int main()
{
char str[30]="hello hii";

char str1[]="damm";

strcat(str,str1);

printf("%s",str);
}

/*if we dont mention size in string one we get this error
  ganesh@ganesh-HP-Pavilion-Laptop-14-ec1xxx:~/Ganesh_practice/Ganesh_practice/final/strings$ vim fconcat.c
ganesh@ganesh-HP-Pavilion-Laptop-14-ec1xxx:~/Ganesh_practice/Ganesh_practice/final/strings$ gcc fconcat.c
ganesh@ganesh-HP-Pavilion-Laptop-14-ec1xxx:~/Ganesh_practice/Ganesh_practice/final/strings$ ./a.out
*** stack smashing detected ***: terminated
Aborted (core dumped)
*/
