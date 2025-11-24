#include <stdio.h>

int main()
{
    int a[100][100], b[100][100], c[100][100], r1, c1, r2, c2 , i, j, k;

    printf("Enter the number of row : ");
    scanf("%d",&r1);

    printf("Enter the number of column : ");
    scanf("%d",&c1);


    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            printf("a[%d][%d] = ", i+1, j+1);
            scanf("%d", &a[i][j]);
        }
    }


    printf("Enter the number of row : ");
    scanf("%d",&r2);

    printf("Enter the number of column : ");
    scanf("%d",&c2);


    if (c1 != r2)
    {
        printf("Matrix multiplication not possible! Columns of A must equal rows of B.\n");
        return 0;
    }

    printf("Enter elements of second matrix:\n");
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            printf("b[%d][%d] = ", i+1, j+1);
            scanf("%d", &b[i][j]);
        }
    }


    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            c[i][j] = 0;
            for (k = 0; k < c1; k++)
            {
             c[i][j] = c[i][j] + (a[i][k] * b[k][j]);
            }
        }
    }


    printf("Result of matrix multiplication:\n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
