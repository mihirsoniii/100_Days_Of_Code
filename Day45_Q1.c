//Count frequency of a given character in a string.
#include <stdio.h>
int main() {
    char str[100], ch;
    int i = 0, frequency = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter a character to find its frequency: ");
    scanf("%c", &ch);

    while (str[i] != '\0' && str[i] != '\n') {
        if (str[i] == ch) {
            frequency++;
        }
        i++;
    }

    printf("Frequency of '%c' in the string: %d\n", ch, frequency);
    return 0;
}