#include <stdio.h>

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        if (i == 3)
        {
            continue; // Skip iteration when i is 3
        }
        printf("%d ", i);
    }
    return 0;
}
