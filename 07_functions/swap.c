#include <stdio.h>

void swapOne(int i, int j);
void swapTwo(int *i, int *j); // *i means pointer i holds the value of type integer

int main()
{
    int a, b;
    printf("Enter the value for a and b: ");
    scanf("%d%d", &a, &b);
    swapOne(a, b);
    printf("After calling swapOne value of a = %d and b = %d \n", a, b);
    swapTwo(&a, &b);
    printf("After calling swapTwo value of a = %d and b = %d \n", a, b);
}

void swapOne(int i, int j)
{
    int temp;
    temp = i;
    i = j;
    j = temp;
}

void swapTwo(int *i, int *j)
{
    int temp;
    temp = *i;
    *i = *j;
    *j = temp;
}