#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *p = arr;

    printf("arr[0]: %d\n", arr[0]);
    printf("*p: %d\n", *p);

    printf("arr[2]: %d\n", arr[2]);
    printf("*(p+2): %d\n", *(p + 2));

    printf("Address of arr[0]: %p\n", &arr[0]);
    printf("Value of arr: %p\n", arr);

    return 0;
}