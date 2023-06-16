#include <stdio.h>

void print_numbers(int n) {
    int i;
    for (i = 1; i <= n; i++) {
        printf("%d", i);
    }
    for (i = n-1; i > 0; i--) {
        printf("%d", i);
    }
    printf("\n");
}

void print_spaces(int n) {
    int i;
    for (i = 0; i < n-1; i++) {
        printf(" ");
    }
    printf("\n");
}

void pattern_generator(int n) {
    int i;
    for (i = n; i > 0; i--) {
        print_numbers(i);
        if (i > 1) {
            print_spaces(i-1);
        }
    }
}

int main() {
    pattern_generator(5);
    return 0;
}

