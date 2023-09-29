#include <stdio.h>

int main()
{
    int i = 10;
    register static int i = 10;
    // The above declaration will throw an error coz Register and static both are storage classes so the same is not allowed.
    // So the compiler will throw an error
}