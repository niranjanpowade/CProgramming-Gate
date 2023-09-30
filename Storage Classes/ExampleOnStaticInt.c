#include <stdio.h>
int countFunctionCall(void)
{
    int count = 0;
    // static int count = 0;
    // The above int is not capable of retaining values.Eveytime it is going to create a new copy and new copy is used.Stack is used.
    // Static and global variables will already be initialized to Zero
    // When you declare varibale with static it gets created in data section but not in stack
    // Static int count; will give you output as 4
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