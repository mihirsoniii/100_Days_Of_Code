//Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.
#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    printf("Enter a string: ");
    scanf("%[^\n]", s);

    int maxLen = 0;

    
    for (int start = 0; s[start] != '\0'; start++) {
        int visited[256] = {0};   
        int currentLen = 0;

      
        for (int end = start; s[end] != '\0'; end++) {

           
            if (visited[(int)s[end]] == 1) {
                break;
            }

            visited[(int)s[end]] = 1;  
            currentLen++;
        }


        if (currentLen > maxLen)
            maxLen = currentLen;
    }

    printf("Longest substring length without repeating characters = %d\n", maxLen);

    return 0;
}