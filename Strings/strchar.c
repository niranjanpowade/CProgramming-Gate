#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "Hello, World!";
    char target = 'o'; // The character to search for
    char *result;

    // Using strchr to find the first occurrence of 'o' in str
    result = strchr(str, target);

    if (result != NULL)
    {
        printf("Found '%c' at position: %ld\n", target, result - str);
    }
    else
    {
        printf("'%c' not found in the string.\n", target);
    }

    return 0;
}
