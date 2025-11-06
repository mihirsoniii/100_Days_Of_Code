//Find the longest word in a sentence.
#include <stdio.h>
#include <string.h>
int main() {
    char str[200];
    char longest[100] = "";
    int i = 0, maxLength = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    char currentWord[100];
    int currentLength = 0;

    while (1) {
        char ch = str[i];
        if (ch != ' ' && ch != '\0' && ch != '\n') {
            currentWord[currentLength++] = ch;
        } else {
            if (currentLength > maxLength) {
                currentWord[currentLength] = '\0';
                strcpy(longest, currentWord);
                maxLength = currentLength;
            }
            currentLength = 0;
        }
        if (ch == '\0' || ch == '\n') {
            break;
        }
        i++;
    }

    printf("Longest word: %s\n", longest);
    return 0;
    
}