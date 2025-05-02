#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    int k = ((a - b) >> 31) & 1;

    int min = b ^ ((a ^ b) & -k);

    printf("Minimum is: %d\n", min);

    return 0;
}

