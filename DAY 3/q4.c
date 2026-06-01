#include<stdio.h>
int main() {
    int a, b, gcd, lcm, x, y, temp;
    printf("enter two numbers:");
    scanf("%d %d", &a, &b);
    x = a;
    y = b;
    while(y != 0) {
        temp = y;
        y = x % y;
        x = temp;
    }
    gcd = x;
    lcm = (a * b) / gcd;
    printf("GCD of %d and %d is: %d\n", a, b, gcd);
    printf("LCM of %d and %d is: %d\n", a, b, lcm);
    return 0;
}