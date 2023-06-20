#include <stdio.h>

int main() {
    int array[] = {45,33,56,90,23};
    int size = sizeof(array) / sizeof(array[0]);
    int evenSum = 0;
    int oddSum = 0;
    for (int i = 0; i < size; i++) {
        if (array[i] % 2 == 0) {
            evenSum += array[i];
        } else {
            oddSum += array[i];
        }
    }
    int difference = evenSum - oddSum;
    printf("Sum of even numbers: %d\n", evenSum);
    printf("Sum of odd numbers: %d\n", oddSum);
    return 0;
}


