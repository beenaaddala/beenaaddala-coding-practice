#include <stdio.h>

int main() {
    int N;

    // Read length of array
    scanf("%d", &N);

    int arr[N];

    // Read array elements
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // First print odd elements
    for (int i = 0; i < N; i++) {
        if (arr[i] % 2 != 0) {
            printf("%d ", arr[i]);
        }
    }

    // Then print even elements
    for (int i = 0; i < N; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
        }
    }

    printf("\n");
    return 0;
}
