#include <stdio.h>

int main() {
    int N;
    
    // Read the length of the array
    scanf("%d", &N);

    int arr[N];

    // Read the array elements
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize max with the first element
    int max = arr[0];

    // Find the maximum element
    for (int i = 1; i < N; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    // Print the maximum element
    printf("%d\n", max);

    return 0;
}
