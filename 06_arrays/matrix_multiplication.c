#include <stdio.h>

int main()
{
    int a[10][10], b[10][10], product[10][10];
    int a_rows, a_columns, b_rows, b_columns, i, j, k, sum;

    printf("Enter the rows and colums for matrix a: \n");
    scanf("%d %d", &a_rows, &a_columns);

    printf("Enter the elements for matrix a: \n");
    for (i = 0; i < a_rows; i++)
    {
        for (j = 0; j < a_columns; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the rows and colums for matrix b: \n");
    scanf("%d %d", &b_rows, &b_columns);

    if (a_columns != b_rows)
    {
        printf("Cannot multiply matrix \n");
    }
    else
    {
        printf("Enter the elements for matrix b: \n");
        for (i = 0; i < b_rows; i++)
            for (j = 0; j < b_columns; j++)
            {
                scanf("%d", &b[i][j]);
            }

        sum = 0;
        for (i = 0; i < a_rows; i++)
            for (j = 0; j < b_columns; j++)
            {
                for (k = 0; k < a_columns; k++)
                    sum += a[i][k] * b[k][j];

                product[i][j] = sum;
                sum = 0;
            }

        printf("Final matrix: \n");
        for (i = 0; i < a_rows; i++)
        {
            for (j = 0; j < b_columns; j++)
            {
                printf("%d ", product[i][j]);
            }
            printf("\n");
        }
    }
}
