// Whenever you have an if condition then if it is greater than Zero then it is true.
#include <stdio.h>
int main()
{
    static int i = 5;
    if (--i)
    {
        main();
        printf("%d\n", i);
    }
}