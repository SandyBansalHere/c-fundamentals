#include <stdio.h>

void func(int *i, int *j, int *k);

int main()
{
    int a, b, c;
    printf("Enter the value of a, b and c: ");
    scanf("%d%d%d", &a, &b, &c);
    printf("Before function call the value of a, b and c: %d %d %d \n", a, b, c);
    func(&a, &b, &c);
    printf("After call the value of a, b and c: %d %d %d \n", a, b, c);
}

void func(int *i, int *j, int *k)
{
    *i = 21;
    *j = 22;
    *k = 23;
    printf("Inside function call %d %d %d \n", *i, *j, *k);
}

/*
    scanf() function is an example of call by reference.

    int *ptr, its a pointer which holds the value of integer type
    print("%d", *ptr) *ptr can access the stored value to memory location
    *ptr = 10; can also update the value
*/