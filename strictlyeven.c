#include <stdio.h>

int main() {
    int N;

    // Read the length of the array
    scanf("%d", &N);

    int arr[N];
    int isStrictlyEven = 1;  // assume TRUE initially

    // Read the array elements
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);

        // Check the rule: even numbers must be at even indices
        if (arr[i] % 2 == 0 && i % 2 != 0) {
            isStrictlyEven = 0;  // rule broken
        }
    }

    // Output result
    if (isStrictlyEven)
        printf("True\n");
    else
        printf("False\n");

    return 0;
}
