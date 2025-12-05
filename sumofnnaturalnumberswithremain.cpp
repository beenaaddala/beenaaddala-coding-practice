#include <stdio.h> 
int sum(int n) { 
    if (n == 0)           // base case 
        return 0; 
    else 
        return n + sum(n - 1);   // recursive call 
} 
int main() { 
    int n; 
    printf("Enter a number: "); 
    scanf("%d", &n); 
    printf("Sum : %d", sum(n)); 
    return 0; 
} 
 
 
