#include <stdio.h>

int main() {
    int n;
    float price, total = 0;
    int qty;

    printf("Enter number of items: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        printf("\nEnter price of item %d: ", i);
        scanf("%f", &price);

        printf("Enter quantity of item %d: ", i);
        scanf("%d", &qty);

        total += price * qty;
    }

    printf("\nTotal Bill Amount = %.2f\n", total);

    return 0;
}

