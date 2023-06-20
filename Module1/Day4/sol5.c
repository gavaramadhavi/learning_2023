#include <stdio.h>
int main() {
    int array[] = {5, 10, 15, 20, 25};
    int size = sizeof(array) / sizeof(array[0]);
    int evenIndexSum = 0;
    int oddIndexSum = 0;
    for (int i = 0; i < size; i++) {
        if (i % 2 == 0) {
            evenIndexSum += array[i];
        } else {
            oddIndexSum += array[i];
        }
    }
    printf("Sum of elements at even indices: %d\n", evenIndexSum);
    printf("Sum of elements at odd indices: %d\n", oddIndexSum);
    return 0;
}

