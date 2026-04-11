#include <stdio.h>
#include <stdint.h>

uint16_t highest_set_bit(uint16_t reg) {
    int count=0;
    while(reg>0)
    {
        reg=reg>>1;
        count++;
    }
    return 1<<count-1;
}

int main() {
    uint16_t reg;
    scanf("%hu", &reg);

    uint16_t result = highest_set_bit(reg);
    printf("%hu", result);
    return 0;
}
