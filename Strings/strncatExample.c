#include <stdio.h>
#include <string.h>

int main()
{
    char destination[50] = "Hello, ";
    char source[] = "World!";
    int maxCharacters = 5; // Maximum characters to concatenate

    strncat(destination, source, maxCharacters);

    printf("Concatenated string: %s\n", destination);

    return 0;
}