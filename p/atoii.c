#include <stdio.h>

int myAtoi(const char *str) {
    int i = 0, sign = 1, result = 0;

    // Skip leading whitespaces
    while (str[i] == ' ')
        i++;

    // Handle sign
    if (str[i] == '-' || str[i] == '+') {
        if (str[i] == '-')
            sign = -1;
        i++;
    }

    // Convert digits to integer
    while (str[i] >= '0' && str[i] <= '9') {
        result = result * 10 + (str[i] - '0');
        i++;
    }

    return sign * result;
}

int main() {
    printf("%d\n", myAtoi("  -1234"));  // -1234
    printf("%d\n", myAtoi("42xy1z"));    // 42
    printf("%d\n", myAtoi("   +99"));   // 99
    printf("%d\n", myAtoi("abc"));      // 0
}

