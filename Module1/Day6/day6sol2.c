#include <stdio.h>

struct Complex {
    double real;
    double imaginary;
};
void readComplex(struct Complex* number) {
    printf("Enter the real part: ");
    scanf("%lf", &number->real);

    printf("Enter the imaginary part: ");
    scanf("%lf", &number->imaginary);
}


void writeComplex(struct Complex number) {
    printf("Complex number: %.2f + %.2fi\n", number.real, number.imaginary);
}

struct Complex addComplex(struct Complex num1, struct Complex num2) {
    struct Complex result;
    result.real = num1.real + num2.real;
    result.imaginary = num1.imaginary + num2.imaginary;
    return result;
}

struct Complex multiplyComplex(struct Complex num1, struct Complex num2) {
    struct Complex result;
    result.real = (num1.real * num2.real) - (num1.imaginary * num2.imaginary);
    result.imaginary = (num1.real * num2.imaginary) + (num1.imaginary * num2.real);
    return result;
}

int main() {
    struct Complex num1, num2, sum, product;
    printf("Enter the first complex number:\n");
    readComplex(&num1);
    printf("Enter the second complex number:\n");
    readComplex(&num2);
    sum = addComplex(num1, num2);
    product = multiplyComplex(num1, num2);
    printf("\n");
    writeComplex(num1);
    writeComplex(num2);
    writeComplex(sum);
    writeComplex(product);

    return 0;
}

