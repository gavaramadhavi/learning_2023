#include <stdio.h>
#include <stdlib.h>

int main() {
    char str[] = "12345";
    char *endptr;
    long num = strtol(str, &endptr, 10);

    if (*endptr != '\0') {
        printf("Conversion failed. Invalid input.\n");
        return 1;
    }
    
    printf("Converted integer: %ld\n", num);
    
    return 0;
}

