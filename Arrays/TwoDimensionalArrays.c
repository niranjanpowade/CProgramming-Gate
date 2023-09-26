#include <stdio.h>

int main()
{
    int matrix[3][3] = {{1, 2, 4}, {4, 5, 7}, {7, 8, 11}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Element at (%d, %d): %d\n", i, j, matrix[i][j]);
        }
    }

    return 0;
}
