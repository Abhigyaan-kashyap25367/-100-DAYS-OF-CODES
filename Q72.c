#include <stdio.h>

int main() {
    int rows, cols, i, j;
    int sum = 0;
    
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    
    printf("Enter the number of columns: ");
    scanf("%d", &cols);
    
    int matrix [rows][cols];
    
    printf("Enter the matrix elements (%d x %d): \n", rows, cols);
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];
        }
    }
    
    printf("\nThe sum of all elements in the matrix is: %d\n", sum);
    
    
    
    return 0;
}
