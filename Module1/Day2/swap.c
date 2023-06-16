#include <stdio.h>
void swap(void* ptr1, void* ptr2) {
    char* temp1 = (char*)ptr1;
    char* temp2 = (char*)ptr2;
    while (*temp1 && *temp2) {
        char temp = *temp1;
        *temp1 = *temp2;
        *temp2 = temp;
        temp1++;
        temp2++;
    }
}

int main() {
    int i1 = 10, i2 = 20;
    printf("Before swapping: i1 = %d, i2 = %d\n", i1, i2);
    swap(&i1, &i2);
    printf("After swapping: i1 = %d, i2 = %d\n", i1, i2);

    float f1 = 3.14, f2 = 2.71;
    printf("Before swapping: f1 = %f, f2 = %f\n", f1, f2);
    swap(&f1, &f2);
    printf("After swapping: float1 = %f, float2 = %f\n", f1, f2);

    char c1 = 'A', c2 = 'B';
    printf("Before swapping: c1 = %c, c2 = %c\n", c1, c2);
    swap(&c1, &c2);
    printf("After swapping: c1 = %c, c2 = %c\n", c1, c2);

    return 0;
}

