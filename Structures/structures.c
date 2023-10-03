#include <stdio.h>

// Define a structure named 'Person' to store information about a person
struct Person
{
    char name[50];
    int age;
    float height;
};

int main()
{
    // Declare a variable of type 'Person'
    struct Person person1;

    // Initialize the members of the structure
    strcpy(person1.name, "John");
    person1.age = 30;
    person1.height = 5.9;

    // Access and print the values
    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);
    printf("Height: %.2f feet\n", person1.height);

    return 0;
}
