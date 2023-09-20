#include <stdio.h>

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++)
    {
        printf("The address of array element %d is %d\n", arr[i], &arr[i]);
    }
}