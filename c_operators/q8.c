#include <stdio.h>

int main() {
     int num,temp;
    printf("enter the number\n");
    scanf("%d",&num);
     temp = num & 0xFF;

    if (temp == 0) {
        printf("System is Big-Endian.\n");
    } else {
        printf("System is Little-Endian.\n");
    }

    return 0;
}

