//Write a program to find the product of odd digits of a number.
#include <stdio.h>
int main() {
    int num, digit, product = 1;
    int hasOddDigit = 0; // Flag to check if there is at least one odd digit
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num != 0) {
        digit = num % 10;
        if (digit % 2 != 0) { // Check if the digit is odd
            product *= digit;
            hasOddDigit = 1; // Set flag if an odd digit is found
        }
        num /= 10;
    }
    if (hasOddDigit)
        printf("Product of odd digits = %d\n", product);
    else
        printf("No odd digits found in the number.\n");
    return 0;
}