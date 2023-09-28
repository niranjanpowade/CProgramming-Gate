#include <stdio.h>
#include <string.h>

int main()
{
    char firstName[] = "Niranjan";
    char lastName[] = "Powade";
    int result = strcmp(firstName, lastName);
    printf("%d\n", result);

    // Output - -1

    char firstName1[] = "Niranjan";
    char firstName2[] = "Niranjan";
    int result1 = strcmp(firstName, firstName1);
    printf("%d", result1);

    // Output - 0
}