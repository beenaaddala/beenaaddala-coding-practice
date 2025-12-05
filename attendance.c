#include <stdio.h>

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    char name[50];
    char status;

    for (int i = 1; i <= n; i++) {
        printf("\nEnter student %d name: ", i);
        scanf("%s", name);

        printf("Present (P) or Absent (A): ");
        scanf(" %c", &status);

        printf("Recorded: %s - %c\n", name, status);
    }

    return 0;
}
