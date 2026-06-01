#include <stdio.h>
int main() {
    int number, i, prime=1;
    printf("enter a number:");
    scanf("%d", &number);
    for(i=2; i<=number/2; i++) {
        if(number%i==0) {
            prime=0;
            break;
        }
    }
    if(prime==1) {
        printf("%d is a prime number", number);
    } else {
        printf("%d is not a prime number", number);
    }
    return 0;
}