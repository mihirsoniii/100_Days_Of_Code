//Multiply two matrices.
#include <stdio.h>
int main() {
    int rows1, cols1, rows2, cols2, i, j, k;
    printf("Enter number of rows for first matrix: ");
    scanf("%d", &rows1);
    printf("Enter number of columns for first matrix: ");
    scanf("%d", &cols1);
    printf("Enter number of rows for second matrix: ");
    scanf("%d", &rows2);
    printf("Enter number of columns for second matrix: ");
    scanf("%d", &cols2);

    if (cols1 != rows2) {
        printf("Matrix multiplication not possible (incompatible dimensions).\n");
        return 0;
    }

    int matrix1[rows1][cols1];
    int matrix2[rows2][cols2];
    int product[rows1][cols2];

    printf("Enter elements of the first matrix:\n");
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols1; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter elements of the second matrix:\n");
    for (i = 0; i < rows2; i++) {
        for (j = 0; j < cols2; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }

    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols2; j++) {
            product[i][j] = 0;
            for (k = 0; k < cols1; k++) {
                product[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    printf("Product of the two matrices:\n");
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols2; j++) {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }
    return 0;
    
}