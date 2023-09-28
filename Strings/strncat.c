#include <stdio.h>
#include <string.h>

int main()
{
    char firstName[] = "Niranjan";
    char lastName[] = "Powade";
    int n = 3;
    // strcat(firstName, lastName);
    // printf("FullName is %s", firstName);
    strncat(firstName, lastName, n);
    printf("Concatenated string: %s\n", firstName);

    return 0;
}
