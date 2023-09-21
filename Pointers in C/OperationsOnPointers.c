// Operations allowed on pointers??
// a) Assignment of pointers of same type
// Example 1
int *p, *q;
p = q; // Because both of the pointers are of same type(INT)
q = p; // Legal
// Example 2
int *p;
char *q;
p = q; // This is not legal. Coz the type of the variables are not same.
// Example 3
int *p, a[];
p = a[]; // Leagl
a[] = p; // Illegal
// Example 4
int *p;
char *q;
// You cannot assign p to q coz the types are different but using typecasting you can
p = (int *)q; // Typecasting

// b) Adding or subtraction a pointer and an INT
#include <stdio.h>

int main()
{
    int *p = 5;
    *p + 1; // Is allowed coz we can add int to an pointer but you cannot add float char to the same
}
// c) Subtracting or Comparting two pointers to memebers of the same array

// 4) Assigning or comparing to zero
// Assigning a value to pointer is meaning less.
// You can compare a value of pointer if it is Zero
p == 0;
// ==0 does not look good so always use NUll which is nothing but 0
p == NULL;