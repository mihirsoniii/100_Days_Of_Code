//Find the first repeating lowercase alphabet in a string.
#include <stdio.h>
int main() {
    char str[100];
    int i = 0, index;
    int freq[26] = {0}; 

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0' && str[i] != '\n') {
        char ch = str[i];
        if (ch >= 'a' && ch <= 'z') {
            index = ch - 'a';
            freq[index]++;
            if (freq[index] == 2) {
                printf("First repeating lowercase alphabet: %c\n", ch);
                return 0;
            }
        }
        i++;
    }

    printf("No repeating lowercase alphabet found.\n");
    return 0;
    
}