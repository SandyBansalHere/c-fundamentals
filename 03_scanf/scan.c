// stdio.h - standard input output library
#include <stdio.h>
int main()
{
    // C is block structured language and every block can be defined by these braces
    // inside the block we have sequence of statements
    int n; // variable declaration with type
    printf("Give an Integer:");
    // scanf reads data and store in specified memory location (&n)
    scanf("%d", &n); // appears in 3.1, &n gives the memory address of a variable
    printf("The value of n = %d and address is %p \n", n, &n);
}

/*
    3.1: & (Address-of operator)
    ----------------------------
    During execution (after comilation) variables are stored in computer's memory
    Example: Corrosponding to variable n we have a memory location, this memory location has two item one is the address of this location and the other value inside it.

    x = n means the value of n is copied to x;
    whenever we write &n, it provides the memory location where variable n is stored;
*/