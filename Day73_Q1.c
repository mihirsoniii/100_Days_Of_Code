//Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.

#include<stdio.h> 
int main()
{FILE *fp;
 char ch; 
 int words=0, characters=0, lines=0;
 int inWord = 0;  
    fp = fopen("info.txt", "r");

    if (fp == NULL) {
        printf("Error: File not found!\n");
        return 1;
    }
    while ((ch = fgetc(fp)) != EOF) {
        characters++;
        if (ch == '\n') {
            lines++;
        }

      
        if (ch == ' ' || ch == '\n' || ch == '\t') { 
            inWord = 0; 
        } else if (inWord == 0) { 
            words++;
            inWord = 1;
        }
    }
    fclose(fp);

    printf("Total Characters: %d\n", characters);
    printf("Total Words: %d\n", words);
    printf("Total Lines: %d\n", lines);

    return 0;
}