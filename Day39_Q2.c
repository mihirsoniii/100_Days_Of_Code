//Find the sum of main diagonal elements for a square matrix.
#include <stdio.h>
int main() {
    int rows, cols, i, j, sum = 0;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    if (rows != cols) {
        printf("Matrix is not square; main diagonal sum cannot be calculated.\n");
        return 0;
    }

    int matrix[rows][cols];

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < rows; i++) {
        sum += matrix[i][i]; 
    }

    printf("Sum of main diagonal elements = %d\n", sum);
    return 0;
    
}