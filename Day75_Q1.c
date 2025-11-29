//Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.
#include <stdio.h>
int main() {
    FILE *fp;
    char filename[100];
    char ch;
    printf("Enter the filename to append text: ");
    scanf("%s", filename);
    fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Error: Could not open file!\n");
        return 1;
    }
    printf("Enter text to append (end with a newline):\n");
    while ((ch = getchar()) != '\n' && ch != EOF);
    char line[1000];
    if (fgets(line, sizeof(line), stdin) != NULL) {
        fputs(line, fp);
    }
    fclose(fp);
    printf("Text appended successfully to %s.\n", filename);
    return 0;
}