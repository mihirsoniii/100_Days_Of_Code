//Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".
#include <stdio.h>
#include <string.h>
int main() {
    char s[100], t[100];
    int freqS[26] = {0};
    int freqT[26] = {0};

    printf("Enter first string (s): ");
    fgets(s, sizeof(s), stdin);
    printf("Enter second string (t): ");
    fgets(t, sizeof(t), stdin);

    int lenS = 0;
    while (s[lenS] != '\0' && s[lenS] != '\n') {
        lenS++;
    }

    int lenT = 0;
    while (t[lenT] != '\0' && t[lenT] != '\n') {
        lenT++;
    }

    if (lenS != lenT) {
        printf("Not Anagram\n");
        return 0;
    }

    for (int i = 0; i < lenS; i++) {
        freqS[s[i] - 'a']++;
        freqT[t[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++) {
        if (freqS[i] != freqT[i]) {
            printf("Not Anagram\n");
            return 0;
        }
    }

    printf("Anagram\n");
    return 0;
}