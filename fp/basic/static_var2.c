#include <stdio.h>
static int x=15;
void func() {
    static int x = 0;
    x++;
    printf("%d\n", x);
}

int main() {

	func();
    func();
    func();
    printf("%d\\n",x);
}
