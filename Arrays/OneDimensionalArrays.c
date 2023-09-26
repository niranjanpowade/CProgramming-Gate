#include <stdio.h>

int main()
{
    int numbers[5] = {100, 200, 300, 400, 500};

    for (int i = 0; i < 5; i++)
    {
        printf("Element at index %d: %d\n", i, numbers[i]);
    }
    return 0;
}
