#include <stdio.h>

int i;
void function1()
{
    i = 20;
    printf("The value of i in function 1 is %d\n", i);
}
void function2()
{
    int i = 30;
    printf("The value of i in function 2 is %d\n", i);
}
int main()
{
    function1();
    function2();
    return 0;
}
// Output - 20
//          30