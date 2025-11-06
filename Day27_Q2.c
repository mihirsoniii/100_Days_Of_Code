/*Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   **/
#include <stdio.h>
int main() {
    int i, j, rows = 4, spaces;
    
    for (i = 1; i <= rows; i++) {
        for (spaces = 0; spaces < rows - i; spaces++) {
            printf(" ");
        }
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }
    
    for (i = rows - 1; i >= 1; i--) {
        for (spaces = 0; spaces < rows - i; spaces++) {
            printf(" ");
        }
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}