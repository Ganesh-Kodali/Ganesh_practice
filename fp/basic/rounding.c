#include <stdio.h>
#include <math.h>

int main() {
    float num;
    printf("Enter a number: ");
    scanf("%f", &num);

    int rounded_num = round(num);
    printf("The rounded number is: %f\n", (float)rounded_num);

    int rounded_up_num = ceil(num);

    printf("The rounded up number is: %f\n", (float)rounded_up_num);

    int rounded_down_num = floor(num);

    printf("The rounded down number is: %f\n", (float)rounded_down_num);

    return 0;
}
