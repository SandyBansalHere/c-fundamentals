#include <stdio.h>

int fact(int i);

int main()
{
    int a, result;
    printf("Enter the number: ");
    scanf("%d", &a);
    result = fact(a);
    printf("Factorial for %d = %d \n", a, result);
}

int fact(int i)
{
    if (i == 1)
        return 1;
    return i * fact(i - 1);
}