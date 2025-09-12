#include <stdio.h>

int main() {
    int a = 10;
    int *ptr = &a;
    // TODO: Create a pointer variable and initialize it with the address of a.
    // TODO: Change the value of `a` using the pointer variable.

    *ptr = 50;
    printf("a = %d\n", a);

    return 0;
}