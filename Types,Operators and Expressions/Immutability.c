#include <stdio.h>

int main()
{
    const int a;
    // initializing constant variable var after declaration
    a = 20;

    printf("Value of var: %d", a);
    return 0;
}

// It will throw an error

// error: assignment of read-only variable 'a'
//     a = 20;
//            ^