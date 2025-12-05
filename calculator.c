#include <stdio.h>

int main() {
    int choice;
    float a, b;

    printf("------ Simple Calculator ------\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulus (integer only)\n");
    printf("-------------------------------\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice >= 1 && choice <= 4) {
        printf("Enter two numbers: ");
        scanf("%f %f", &a, &b);
    }

    switch (choice) {
        case 1:
            printf("Result = %.2f\n", a + b);
            break;

        case 2:
            printf("Result = %.2f\n", a - b);
            break;

        case 3:
            printf("Result = %.2f\n", a * b);
            break;

        case 4:
            if (b != 0)
                printf("Result = %.2f\n", a / b);
            else
                printf("Error: Division by zero not allowed!\n");
            break;

        case 5: {
            int x, y;
            printf("Enter two integers: ");
            scanf("%d %d", &x, &y);
            if (y != 0)
                printf("Result = %d\n", x % y);
            else
                printf("Error: Modulus by zero not allowed!\n");
            break;
        }

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}

