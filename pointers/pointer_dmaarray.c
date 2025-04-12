#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int *ar = (int *)malloc(n * sizeof(int));

    if (ar == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        *(ar + i) = i;
    }
    printf("Array elements:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(ar + i));
    }
    printf("\n");

    
    free(ar);

    return 0;
}

