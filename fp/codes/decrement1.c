#include<stdio.h>
int main() {
   int n;
   for(n = 8; n!=0; n--)
     printf("n = %d", n--);
   getchar();
   return 0;
}

