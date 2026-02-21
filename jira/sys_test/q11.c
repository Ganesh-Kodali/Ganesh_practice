#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
            printf("%-3d", j);

        for (int s = 1; s <= n - i; s++)
            printf("      ");

        for (int j = i; j >= 1; j--)
            printf("%-3d", j);

        printf("\n");
    }

    for (int i = 2; i <= n; i++)
            printf("%-3d", j);

        for (int s = 1; s <= n - i; s++)
            printf("      ");

        for (int j = i; j >= 1; j--)
            printf("%-3d", j);

        printf("\n");
    }

    return 0;
}

