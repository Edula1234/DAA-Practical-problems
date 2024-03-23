#include <stdio.h>

int fibonacci(int n) {
    return (n <= 1) ? n : fibonacci(n - 1) + fibonacci(n - 2);
}

void printFibonacciSeries(int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", fibonacci(i));
}

int main() {
    int terms;
    printf("Enter the number of terms: ");
    scanf("%d", &terms);
    printf("Fibonacci Series up to %d terms: ", terms);
    printFibonacciSeries(terms);
    return 0;
}

