#include <stdio.h>

// Function declaration with return type and parameter types
void func(int i, int j, int k);

int main()
{
    int a, b, c;
    printf("Enter the value of a, b and c: ");
    scanf("%d%d%d", &a, &b, &c);
    printf("Before function call the value of a, b and c: %d %d %d \n", a, b, c);
    func(a, b, c); // Function call with actual parameter
    printf("After call the value of a, b and c: %d %d %d \n", a, b, c);
}

// Function definition with return type and parameter types
void func(int i, int j, int k) // Formal parameter
{
    i = 21, j = 22, k = 23;
    printf("Inside function call %d %d %d \n", i, j, k);
}

/*
    CALL BY VALUE
    The function gets a copy of the argument and does not modify the original argument unless a pointer is passed.

    func(a,b,c) Actual Parameter        func(i,j,k) Formal Parameter
    main() memory                       func() memory
    -------------------                 -------------------
    a ---- value of "a" is copied --->  i
    -------------------                 -------------------
    b ---- value of "a" is copied --->  j
    -------------------                 -------------------
    c ---- value of "a" is copied --->  k
    -------------------                 -------------------
*/