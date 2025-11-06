//Write a program to find the 1’s complement of a binary number and print it.
#include <stdio.h>
int main() {
    long long binaryNum, tempNum;
    int remainder, onesComplement = 0, placeValue = 1;

    printf("Enter a binary number: ");
    scanf("%lld", &binaryNum);

    tempNum = binaryNum; 

    while (tempNum != 0) {
        remainder = tempNum % 10;
       
        if (remainder == 0)
            onesComplement += 1 * placeValue;
        

        placeValue *= 10; 
        tempNum /= 10;    
    }

    printf("1's Complement of %lld is %d\n", binaryNum, onesComplement);
    return 0;
    
}