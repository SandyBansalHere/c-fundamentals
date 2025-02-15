#include <stdio.h>

int gcd(int i, int j);

int main()
{
    int a, b, result;
    printf("Enter the two numbers: ");
    scanf("%d%d", &a, &b);
    result = gcd(a, b);
    printf("%d \n", result);
}

int gcd(int i, int j)
{
    int temp;
    if (i < j)
    {
        // change the i to large number
        temp = i;
        i = j;
        j = temp;
    }

    while (i % j != 0)
    {
        temp = i % j;
        i = j;
        j = temp;
    }

    return j;
}