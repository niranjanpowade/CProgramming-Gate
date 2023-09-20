#include <stdio.h>

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int a = 1;
    printf("The address of array element 1 is %d\n", &arr[a]);
    printf("The address of array element 2 is %d\n", &arr[a + 1]);
}
// The address of array element 1 is 1332833508
// The address of array element 2 is 1332833512
// In this code assume address of a is 1002 so you want to print the next address so you just have to add only 1(a+1) not 2(a+2) coz of two byte
// How compiler will get to know the same?? By specifying the Datatype like int a =1;