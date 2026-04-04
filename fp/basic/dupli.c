#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 2, 1, 5, 2};
    int n = 7;

    printf("Duplicate elements: ");
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                printf("%d ", arr[i]);
                break; // Break so we don't print the same duplicate multiple times
            }
        }
    }
    return 0;
}
