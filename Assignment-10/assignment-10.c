#include <stdio.h>

int main(void) {
    int arr[] = {1, 23, 43, 64, 45, 77, 74, 3, 9, 90};

    printf("Size of array: %lu\n", sizeof(arr) / sizeof(int));

    return 0;
}