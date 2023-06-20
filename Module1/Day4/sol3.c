#include <stdio.h>

int main() {
    int array[] = {5, 10, 15, 20, 25};
    int size = sizeof(array) / sizeof(array[0]);

    printf("Original Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    int start = 0;
    int end = size - 1;

    while (start < end) {
        // Swap elements
        int temp = array[start];
        array[start] = array[end];
        array[end] = temp;

        // Move indices towards center
        start++;
        end--;
    }

    printf("Reversed Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}

