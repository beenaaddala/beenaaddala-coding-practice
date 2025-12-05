#include <stdio.h>

int main() {
    int N;
    
    // Read the length of the array
    scanf("%d", &N);

    int arr[N];
    int isEvenArray = 1;  // Assume true

    // Read array elements and check if all are even
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 != 0) {  
            isEvenArray = 0;   // Found an odd number
        }
    }

    // Print result
    if (isEvenArray) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}
