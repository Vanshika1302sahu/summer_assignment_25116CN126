#include <stdio.h>

int main() {
    int n, i, j, isPrime, largestPrime = -1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i++) {
        isPrime = 1;

        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime)
            largestPrime = i;
    }

    if (largestPrime == -1)
        printf("No prime number found.");
    else
        printf("Largest prime number = %d", largestPrime);

    return 0;
}