#include <stdio.h>

struct Example {
    short int a : 7;
    short int b : 9;
};

int main() {
    printf("Size of struct: %zu\n", sizeof(struct Example));  // Likely prints 4
    return 0;
}
