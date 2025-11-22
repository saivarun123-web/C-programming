#include <stdio.h>

int main() {
    int rows, cols;
    int i,j;

    // Input the size of matrices
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int matrix1[rows][cols], matrix2[rows][cols], sum[rows][cols];

    // Input elements of first matrix
    printf("Enter elements of first matrix:\n");
    for( i = 0; i < rows; i++) {
        for( j = 0; j < cols; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input elements of second matrix
    printf("Enter elements of second matrix:\n");
    for( i = 0; i < rows; i++) {
        for( j = 0; j < cols; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Adding two matrices
    for( i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Displaying the sum
    printf("Sum of the matrices:\n");
    for( i = 0; i < rows; i++) {
        for( j = 0; j < cols; j++) {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}

