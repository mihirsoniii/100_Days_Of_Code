//Find the digit that occurs the most times in an integer number.
#include <stdio.h>  
int main() {
    int number, digit, maxDigit = 0, maxCount = 0;
    int count[10] = {0}; 

    printf("Enter an integer number: ");
    scanf("%d", &number);

    while (number != 0) {
        digit = number % 10;
        count[digit]++;
        number /= 10;
    }

    for (digit = 0; digit < 10; digit++) {
        if (count[digit] > maxCount) {
            maxCount = count[digit];
            maxDigit = digit;
        }
    }

    printf("The digit that occurs the most is %d, occurring %d times.\n", maxDigit, maxCount);
    return 0;
}