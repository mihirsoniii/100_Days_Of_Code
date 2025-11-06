//Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.
#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int maxLength = 0, currentLength = 0;
    int lastIndex[256]; 

    for (int i = 0; i < 256; i++) {
        lastIndex[i] = -1; 
    }

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int len = 0;
    while (str[len] != '\0' && str[len] != '\n') {
        len++;
    }

    int start = 0; 
    for (int i = 0; i < len; i++) {
        if (lastIndex[(unsigned char)str[i]] >= start) {
            start = lastIndex[(unsigned char)str[i]] + 1;
        }
        lastIndex[(unsigned char)str[i]] = i;
        currentLength = i - start + 1;
        if (currentLength > maxLength) {
            maxLength = currentLength;
        }
    }

    printf("Length of the longest substring without repeating characters: %d\n", maxLength);

    return 0;
    
}