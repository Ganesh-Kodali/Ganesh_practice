#include <stdio.h>

void counter() {
     int count = 0;
    count++;
    printf("Counter value: %d\n", count);
}

int main() {
    counter(); 
    counter(); 
    counter(); 
    return 0;
}
