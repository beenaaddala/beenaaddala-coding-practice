#include <stdio.h>

int main() {
    int N;

    // Read length of the array
    scanf("%d", &N);

    int arr[N];
    int sum = 0;

    // Read array elements and calculate sum
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    // Floor average (integer division)
    int avg = sum / N;

    int count = 0;

    // Count elements smaller than or equal to average
    for (int i = 0; i < N; i++) {
        if (arr[i] <= avg) {
            count++;
        }
    }

    // Display the count
    printf("%d\n", count);

    return 0;
}
