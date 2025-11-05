#include <stdio.h>
#include <stdlib.h>

int main() {
    int capacity;
    int n, elementToDelete;
    int i, j;
    int indexToDelete = -1;
    printf("Enter the maximum capacity of the array (e.g., 10): ");
    scanf("%d", &capacity);
    printf("Enter the current number of elements (n <= capacity): ");
    scanf("%d", &n);

    int arr[n];
    
    printf("Enter the %d elements: \n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the element to delete: ");
    scanf("%d", &elementToDelete);

    printf("\nOriginal array (size %d): ", n);
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    for (i = 0; i < n; i++) {
        if (arr[i] == elementToDelete) {
            indexToDelete = i;
            break;
        }
    }
    for (j = indexToDelete; j < n - 1; j++) {
            arr[j] = arr[j + 1]; 
        }
        
        n--;
        
        printf("Array after deleting %d (size %d): ", elementToDelete, n);
        for (i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
        return 0;
    }