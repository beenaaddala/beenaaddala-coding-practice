#include <stdio.h>

int main() {
    int C;

    // Read the temperature
    scanf("%d", &C);

    // Check if temperature is above 20
    if (C > 20) {
        printf("HOT\n");
    } else {
        printf("COLD\n");
    }

    return 0;
}
