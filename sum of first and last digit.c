#include <stdio.h>

int main() {
    int n, firstDigit, lastDigit, sum;

    printf("Enter a number: ");
    scanf("%d", &n);

    lastDigit = n % 10;   

    
    while (n >= 10) {
        n = n / 10;
    }
    firstDigit = n;

    sum = firstDigit + lastDigit;

    printf("Sum of first and last digit = %d\n", sum);

    return 0;
}
