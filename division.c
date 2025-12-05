#include <stdio.h>

int main() {
    float a, b;

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    if(b != 0)
        printf("%.2f ÷ %.2f = %.2f\n", a, b, a / b);
    else
        printf("Error: Division by zero!\n");

    return 0;
}
