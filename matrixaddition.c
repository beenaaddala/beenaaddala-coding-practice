#include <stdio.h>

int main() {
    int N, M;

    // Read the number of rows (N) and columns (M)
    scanf("%d %d", &N, &M);

    int matrix1[N][M], matrix2[N][M], result[N][M];

    // Read the first matrix
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Read the second matrix
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Add the matrices
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Print the resultant matrix
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
