#include <stdio.h>
#include <string.h>

int main() {
    char str1[20] = "Hello, ";
    char str2[] = "Ganesh";
    strcat(str1, str2);
    printf("strcat: %s\n", str1);
    return 0;
}

