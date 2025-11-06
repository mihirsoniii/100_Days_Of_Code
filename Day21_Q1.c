//Write a program to swap the first and last digit of a number.
#include <stdio.h>
#include <math.h>
int main() {
    int num, firstDigit, lastDigit, numDigits, middlePart, swappedNum;
    printf("Enter a number: ");
    scanf("%d", &num);

    lastDigit = num % 10;

    numDigits = (int)log10(num); 
    firstDigit = (int)(num / pow(10, numDigits));

    middlePart = (num % (int)pow(10, numDigits)) / 10;

    swappedNum = lastDigit * (int)pow(10, numDigits) + middlePart * 10 + firstDigit;

    printf("Number after swapping first and last digit: %d\n", swappedNum);
    return 0;
    
}