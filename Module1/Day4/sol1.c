#include <stdio.h>

int main() {
    int array[] = {5, 10, 15, 20, 25};
    int size = sizeof(array) / sizeof(array[0]);

    int sum = 0;
    double average;

    for (int i = 0; i < size; i++) {
        sum += array[i];
    }

    average = (double)sum / size;

    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);

    return 0;
}

