#include <stdio.h>

int main() 
{
    int i, j, n;
    int a[3][3], b[3][3], c[3][3];

    printf("Enter size of matrix (max 3): ");
    scanf("%d", &n);

    printf("Enter first matrix elements:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter second matrix elements:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    // Matrix Addition
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("Result matrix (A + B):\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
