#include <stdio.h>

static int x = 10;

void func() {
    x++;
    printf("%d\n", x);
}

int main() {
    func();
    func();
}
