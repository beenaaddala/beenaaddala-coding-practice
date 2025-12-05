#include <stdio.h>

int main() {
    int n, temp, reverse = 0, digit;

    scanf("%d", &n);

    temp = n; // store original number

    while (temp > 0) {
        digit = temp % 10;          // get last digit
        reverse = reverse * 10 + digit; // build reverse number
        temp = temp / 10;           // remove last digit
    }

    if (n == reverse) {
        printf("Palindrome");
    } else {
        printf("Not Palindrome");
    }

    return 0;
}
