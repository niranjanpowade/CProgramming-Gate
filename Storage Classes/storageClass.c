#include <stdio.h>

int main()
{
    register int i = 10;
    int *a = &i;
    printf("%d", *a);
    return 0;
}

// You cannot take the address of a variable declared with the register keyword in C.
// The register keyword is used to suggest to the compiler that the variable be stored in a register
// for optimization purposes, and as a result, you cannot obtain its address.