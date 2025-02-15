#include <stdio.h>

int main()
{
    int n, max, number, i;
    scanf("%d", &n);

    if (n > 0)
    {
        scanf("%d", &number);
        max = number;

        for (i = 1; i < n; i++)
        {
            scanf("%d", &number);
            if (number > max)
                max = number;
        }
        printf("MAX = %d \n", max);
    }
}