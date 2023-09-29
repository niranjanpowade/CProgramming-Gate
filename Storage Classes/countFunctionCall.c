#include <stdio.h>
int countFunctionCall(void)
{
    int count = 0;
    return ++count;
}
int main()
{
    countFunctionCall();
    countFunctionCall();
    countFunctionCall();
    printf("The function is called %d times", countFunctionCall());
    return 0;
}
// The output will be 1 times