// Swapping using pointers
#include <stdio.h>

int swap(int *a, int *b)
{
    int temp = a;
    *a = *b;
    *b = temp;
}
int main()
{
    int num1 = 5;
    int num2 = 10;
    printf("Before swapping: Value of num1 is %d and value of num2 is %d", num1, num2);
    swap(&num1, &num2);
    printf("After swapping: Value of num1 is %d and value of num2 is %d", num1, num2);
}