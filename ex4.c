/*
 * Aggregate data types such as arrays are referenced by their address.
 * For example, when an array such as `int arr[10]` is passed to a function via `f(arr)`,
 * only the address is passed. This allows for greater efficiency in our programs.
 * Copying every value of the array each time it was passed to a new function would
 * be catastrophic for performance.
 * 
 * In this excercise, you should use pointer arithmetic to access the elements of the array.
 */

#include <stdio.h>
#include <stdlib.h>

// TODO: Create a search function defined by the following function header.
/*
 * get_address
 *
 * Arguments:
 *      int *arr - A pointer to the array data.
 *      int len  - The number of elements in the array.
 *      int val  - The value to search for.
 * 
 * Returns:
 *      int *address - The address of the element in the given array `arr`.
 */
int get_address(int *arr, int len, int val);

int main() {
    int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
    int arr_len = sizeof(arr)/sizeof(arr[0]);
    int *val_ptr = NULL;
    val_ptr = (int *)calloc(arr_len, sizeof(int));
    int tmp_val = 0;
    unsigned long long loc_var;
    // TODO: Call your function
    // TODO: Print the value you searched for along with its address
    loc_var = get_address(arr, arr_len, 7);
    val_ptr = (int *)loc_var;
    
    // printf("The value: %d is at address: %p", *val_ptr, val_ptr);
    printf("get address funtion returns: %p\n",val_ptr);

    free(val_ptr);

    return 0;
}

int get_address(int *arr, int len, int val) {

    int *address = NULL;
    address = (int *)calloc(len, sizeof(int));
    if(arr == NULL) {
        printf("Problem loading array pointer\n");
        return 1;
    }
    if(address == NULL) {
        return 1;
    }
    for(int i = 0; i < len; i++) {
        printf("Outside of goal value: %d, at index %d\n", arr[i], i);
        if(val == arr[i]) {
            printf("Meets goals inside goal value: %d, at index %d\n", arr[i], i);
            address = &arr[i];
            printf("The value: %d is at address: %p\n", val, address);
            break;
        }
    }

    //return address of element
    return *address;
}