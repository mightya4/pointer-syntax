#include <stdio.h>

int main() {
    int a = 0;

    // TODO: Print the address of a.
    int *ptr = &a;
    printf("The address of a is: %p\n", ptr);

    return 0;
}