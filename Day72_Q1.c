//Write a C program that opens an existing file (e.g., info.txt) and reads its contents using fgets(). The program should print all the lines to the console until EOF (end of file) is reached.
#include<stdio.h> 
int main()
{ 
    FILE  *ptr;
    char line[100]; 
    ptr=fopen("info.txt","r"); 
    if( ptr==NULL)
    {
        printf("Error could not open file ");
        return 1; 
    }
    printf("Contents of the file info.txt:\n");
    while(fgets(line, sizeof(line), ptr) != NULL)
    {
        printf("%s", line);
    }
    fclose(ptr);
    return 0;
}