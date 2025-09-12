#include <stdio.h>
#include <stdlib.h>

void modify_int(int *ptr_to_int);

int main() {
    int a = 0;

    // TODO: Create a function that returns `void` which modifies the value of `a`.
    int *p = &a;
    modify_int(p);

    printf("a = %d\n", a);

    return 0;
}

void modify_int(int *ptr_to_int) {

    if (ptr_to_int == NULL) {
        printf("Pointer fault.");
    }
    printf("Please enter an integer value to update the variable: ");
    scanf("%d", ptr_to_int);

}
