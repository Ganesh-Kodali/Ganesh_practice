#include <stdio.h>

int myStrcmp(const char *s1, const char *s2) {
    while (*s1 && (*s1 == *s2)) {
        s1++;
        s2++;
    }
    return *(unsigned char *)s1 - *(unsigned char *)s2;
}

int main() {
    char str1[100];
    char str2[100];

    printf("enter first string\n");
    scanf("%s",str1);
    printf("enter 2nd string\n");
    scanf("%s",str2);
    int result = myStrcmp(str1, str2);

    if (result == 0) {
        printf("Strings are equal.\n");
    } else if (result < 0) {
        printf("str1 is less than str2.\n");
    } else {
        printf("str1 is greater than str2.\n");
    }

    return 0;
}

