#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

bool isPalindrome(char str[], int start, int end) {
    if (start >= end) return true;
    if (!isalnum(str[start])) return isPalindrome(str, start + 1, end);
    if (!isalnum(str[end])) return isPalindrome(str, start, end - 1);
    return tolower(str[start]) == tolower(str[end]) && isPalindrome(str, start + 1, end - 1);
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; 
    printf("%s\n", isPalindrome(str, 0, strlen(str) - 1) ? "Palindrome" : "Not Palindrome");
    return 0;
}

