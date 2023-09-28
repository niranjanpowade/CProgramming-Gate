#include <stdio.h>
#include <string.h>

int main()
{
    char firstName[] = "Niranjan";
    char lastName[] = "Powade";
    // strcat(firstName, lastName);
    // printf("FullName is %s", firstName);

    char fullName[50]; // Allocate enough space for the concatenated result

    strcpy(fullName, firstName); // Copy the first name to fullName
    strcat(fullName, " ");       // Concatenate a space
    strcat(fullName, lastName);  // Concatenate the last name

    printf("Full Name: %s\n", fullName);

    return 0;
}