#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows, cols, i, j;
    
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    
    printf("Enter the number of columns: ");
    scanf("%d", &cols);
 
    
    int matrix[rows][cols];
    int rowSums[]={0};

    printf("Enter the matrix elements (%d x %d): \n", rows, cols);
    for (i = 0; i < rows; i++) {
        rowSums[i] = 0;
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            rowSums[i] += matrix[i][j];
        }
    }
    for (i = 0; i < rows; i++) {
        printf("Sum of row %d: %d\n", i+1, rowSums[i]);
    }
    
    return 0;
}