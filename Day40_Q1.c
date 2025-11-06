//Perform diagonal traversal of a matrix.
#include <stdio.h>
int main() {
    int rows, cols, i, j;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);
    int matrix[rows][cols];

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Diagonal traversal of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (i == j || i + j == cols - 1) {
                printf("%d ", matrix[i][j]);
            }
        }
    }
    printf("\n");
    return 0;
    
}