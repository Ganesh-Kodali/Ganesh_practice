#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "apple";
    char str2[] = "aaple";
    int result = strcmp(str1, str2);
    printf("Comparison result: %d\n", result);
    return 0;
}

