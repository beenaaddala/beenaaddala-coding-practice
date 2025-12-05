#include <stdio.h>

int main() {
    int n, age, eligibleCount = 0;

    printf("Enter number of people: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        printf("Enter age of person %d: ", i);
        scanf("%d", &age);

        if(age >= 18) {
            printf("Person %d is eligible to vote.\n", i);
            eligibleCount++;
        } else {
            printf("Person %d is NOT eligible to vote.\n", i);
        }
    }

    printf("\nTotal eligible voters: %d out of %d\n", eligibleCount, n);

    return 0;
}
