//Write a program to check if a number is a palindrome.
#include <stdio.h>
int main() {
    int num, originalNum, reversed = 0, remainder;
    printf("Enter a number: ");
    scanf("%d", &num);
    originalNum = num; // Store the original number to compare later
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num = num / 10;
    }
    if (originalNum == reversed)
        printf("%d is a palindrome.\n", originalNum);
    else
        printf("%d is not a palindrome.\n", originalNum);
    return 0;
}