#include <stdio.h>

int main()
{
    int data[100], i, j, n, temp;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &data[i]);

    for (i = 0; i < n; i++)
        for (j = i + 1; j < n; j++)
        {
            printf("i = %d j = %d \n", data[i], data[j]);
            if (data[i] > data[j])
            {
                temp = data[j];
                data[j] = data[i];
                data[i] = temp;
            }
        }

    for (i = 0; i < n; i++)
        printf("%d ", data[i]);
    printf("\n");
}
