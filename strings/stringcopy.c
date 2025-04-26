#include <stdio.h>
#include <string.h>

int main() {
    char src[] = "ganesh";
    char dest[20];
    strcpy(dest, src);
    printf("strcpy: %s\n", dest);
    return 0;
}

