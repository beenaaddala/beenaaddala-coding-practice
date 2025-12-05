#include <stdio.h>

int main() {
    int steps;
    float distance;

    printf("Enter number of steps: ");
    scanf("%d", &steps);

    distance = steps * 0.0008; 

    printf("You walked %.2f km\n", distance);

    return 0;
}
