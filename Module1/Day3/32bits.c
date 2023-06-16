#include <stdio.h>

void printBits(unsigned int num) {
    for (int i = 31; i >= 0; i--) {
        int bit = (num >> i) & 1;
        printf("%d", bit);
    }

    printf("\n");
}

int main() {
    unsigned int number;
    printf("Enter a 32-bit integer: ");
    scanf("%u", &number);

    printf("Binary representation: ");
    printBits(number);

    return 0;
}

