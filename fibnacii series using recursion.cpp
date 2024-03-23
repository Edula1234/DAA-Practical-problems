#include <stdio.h>
#include <math.h>

int isArmstrong(int num, int n) {
    return num == 0 ? 0 : pow(num % 10, n) + isArmstrong(num / 10, n);
}

int main() {
    int num, temp, num_digits = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while (temp != 0) {
        temp /= 10;
        num_digits++;
    }
    if (isArmstrong(num, num_digits) == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);
    return 0;
}

