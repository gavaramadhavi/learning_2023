#include <stdio.h>

void print_exponent(double num) {
    unsigned long long *ptr = (unsigned long long *)&num; // Type punning to interpret the double as an unsigned long long
    unsigned long long exponent_mask = 0x7FF0000000000000ULL;  // Mask to extract the exponent bits

    unsigned long long exponent = (*ptr & exponent_mask) >> 52;  // Extracting the exponent bits

    printf("Exponent in hexadecimal: 0x%llX\n", exponent);
    printf("Exponent in binary: 0b");
    for (int i = 11; i >= 0; i--) {
        printf("%d", (exponent >> i) & 1);
    }
    printf("\n");
}

int main() {
    double x = 0.7;

    print_exponent(x);

    return 0;
}

