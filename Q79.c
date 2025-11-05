#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows, cols, i, j, d;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols];

    printf("Enter the matrix elements (%d x %d): \n", rows, cols);
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nDiagonal Traversal: ");
    
    int totalDiagonals = rows + cols - 1;

    for (d = 0; d < totalDiagonals; d++) {
        if (d % 2 == 0) {
            i = (d < rows) ? d : rows - 1;
            j = (d < rows) ? 0 : d - rows + 1;
            while (i >= 0 && j < cols) {
                printf("%d ", matrix[i][j]);
                i--;
                j++;
            }
        } else {
            i = (d < cols) ? 0 : d - cols + 1;
            j = (d < cols) ? d : cols - 1;
            while (i < rows && j >= 0) {
                printf("%d ", matrix[i][j]);
                i++;
                j--;
            }
        }
    }
    printf("\n");
    return 0;
}