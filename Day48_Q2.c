//Reverse each word in a sentence without changing the word order.
#include <stdio.h>
#include <string.h>
int main() {
    char str[200];
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    int start = 0, end = 0, len = strlen(str);
    while (end <= len) {
        if (str[end] == ' ' || str[end] == '\0' || str[end] == '\n') {
            int left = start;
            int right = end - 1;
            while (left < right) {
                char temp = str[left];
                str[left] = str[right];
                str[right] = temp;
                left++;
                right--;
            }
            start = end + 1;
        }
        end++;
    }

    printf("Sentence with each word reversed: %s\n", str);
    return 0;
    
}