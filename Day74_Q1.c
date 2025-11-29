//Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().
#include <stdio.h>
int main() {
    FILE *sourceFile, *destFile;
    char ch;
    char sourceFileName[100], destFileName[100];
    printf("Enter the source file name: ");
    scanf("%s", sourceFileName);
    printf("Enter the destination file name: ");
    scanf("%s", destFileName);
    sourceFile = fopen(sourceFileName, "r");
    if (sourceFile == NULL) {
        printf("Error: Source file not found!\n");
        return 1;
    }
    destFile = fopen(destFileName, "w");
    if (destFile == NULL) {
        printf("Error: Could not create destination file!\n");
        fclose(sourceFile);
        return 1;
    }
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destFile);
    }
    fclose(sourceFile);
    fclose(destFile);
    printf("Content copied from %s to %s successfully.\n", sourceFileName, destFileName);
    return 0;
}