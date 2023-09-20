#include <stdio.h>
void main()
{
    int a = 5;
    int *b = &a;
    // a and *b are both same
    printf("%d", a);  //%d can be positive or can be negative
    printf("%u", &a); //%u is nothing but a always posiive interger
    printf("%u", b);
    printf("%d", *b);
    printf("%u", &b);
    printf("The address where variable a is located is %d", &b);
}