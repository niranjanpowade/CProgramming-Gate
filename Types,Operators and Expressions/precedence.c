#include <stdio.h>

int main()
{
    // Arithmetic Operators
    int result1 = 5 + 2 * 3; // Result is 11
    printf("Result1: %d\n", result1);

    // Relational Operators
    int x = 5, y = 7;
    int isTrue = (x < y) && (x != y); // isTrue will be 1 (true)
    printf("isTrue: %d\n", isTrue);

    // Logical Operators
    int a = 1, b = 0, c = 1;
    int result2 = a && b || c; // Result is 1 (true)
    printf("Result2: %d\n", result2);

    // Assignment Operators
    int num = 5;
    num += 3 * 2; // num is updated to 11
    printf("Updated num: %d\n", num);

    // Ternary Operator
    int p = 5, q = 7;
    int min = (p < q) ? p : q; // min will be 5
    printf("Minimum: %d\n", min);

    // Bitwise Operators
    int num1 = 5, num2 = 3;
    int result3 = num1 & num2; // Result is 1
    printf("Bitwise AND: %d\n", result3);

    return 0;
}
