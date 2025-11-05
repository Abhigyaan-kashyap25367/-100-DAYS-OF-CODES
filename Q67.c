#include <stdio.h>
#include <stdlib.h>

int main() {
    int capacity;
    int n, elementToInsert, position;
    int i;
    printf("Enter the maximum capacity of the array (e.g., 10): ");
    scanf("%d", &capacity) ;
    printf("Enter the current number of elements (n < capacity): ");
    scanf("%d", &n) ;
    
    int arr[n];
    
    printf("Enter the %d elements: \n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the element to insert: ");
    scanf("%d", &elementToInsert);
    
    printf("Enter the position (index) to insert at (0 to %d): ", n);
    scanf("%d", &position);

    printf("\nOriginal array (size %d): ", n);
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    for (i = n; i > position; i--) {
            arr[i] = arr[i - 1]; 
        }
        
        arr[position] = elementToInsert;
        n++;
        
        printf("Array after insertion (size %d): ", n);
        for (i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
        return 0;
    }
    
    
