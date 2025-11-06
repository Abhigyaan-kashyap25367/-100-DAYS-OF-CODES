#include <stdio.h>


int main() {
   
    int n, elementToInsert, position;
    int i;
    
    printf("Enter the current number of elements n : ");
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
    
    
