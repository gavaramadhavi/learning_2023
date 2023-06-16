#include <stdio.h>

void findSmallestAndLargestDigits(int n, int numbers[]) {
    int smallestDigit = 9;
    int largestDigit = 0;
    int validDigitsFound = 0;

    for (int i = 0; i < n; i++) {
        int temp = numbers[i];

        while (temp != 0) {
            int digit = temp % 10;
            smallestDigit = (digit < smallestDigit) ? digit : smallestDigit;
            largestDigit = (digit > largestDigit) ? digit : largestDigit;
            temp /= 10;
            validDigitsFound = 1;
        }
    }

    if (!validDigitsFound) {
        printf("Not Valid\n");
    } else {
        printf("Smallest Digit: %d\n", smallestDigit);
        printf("Largest Digit: %d\n", largestDigit);
    }
}

int main() {
    int n = 3;
    int numbers[] = {8, 156, 123450};
    findSmallestAndLargestDigits(n, numbers);
    return 0;
}

