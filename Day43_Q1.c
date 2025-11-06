//Reverse a string.
#include <stdio.h>
#include <string.h>
int main() {
    char str[100], reversed[100];
    int len, i, j = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    len = 0;
    while (str[len] != '\0' && str[len] != '\n') {
        len++;
    }

    for (i = len - 1; i >= 0; i--) {
        reversed[j++] = str[i];
    }
    reversed[j] = '\0';

    printf("Reversed string: %s\n", reversed);
    return 0;
    
}