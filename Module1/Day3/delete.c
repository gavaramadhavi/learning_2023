#include <stdio.h>

int findLargestNumber(int num) {
    int largest = 0;
    int divisor = 1;

    for (int i = 0; i < 4; i++) {
        int temp = num / divisor / 10 * divisor + num % divisor;
        if (temp > largest) {
            largest = temp;
        }
        divisor *= 10;
    }

    return largest;
}

int main() {
    int number;
    printf("Enter a 4-digit number: ");
    scanf("%d", &number);

    int largestNumber = findLargestNumber(number);
    printf("Largest number after deleting a digit: %d\n", largestNumber);

    return 0;
}

