#include <stdio.h>

int isPrime(int n, int i) {
    if (n <= 2) return (n == 2) ? 1 : 0;
    if (n % i == 0) return 0;
    return (i * i > n) ? 1 : isPrime(n, i + 1);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("%d is %s\n", num, (num < 2 || !isPrime(num, 2)) ? "not a prime number" : "a prime number");
    return 0;
}

