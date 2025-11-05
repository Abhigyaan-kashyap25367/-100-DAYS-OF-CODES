#include <stdio.h>
#include <stdlib.h>

int main() {
    int capacity;
    int n, elementToInsert;
    int i;
    
    printf("Enter the maximum capacity of the array (e.g., 10): ");
    scanf("%d", &capacity) ;
    
    printf("Enter the current number of elements (n <= capacity): ");
    scanf("%d", &n) ;
   
    int arr[n]; 
    printf("Enter the %d elements (MUST BE SORTED, e.g., 10 20 30 50 60): \n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the element to insert: ");
    scanf("%d", &elementToInsert);

    printf("\nOriginal array (size %d): ", n);
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    

    for (i = n - 1; (i >= 0 && arr[i] > elementToInsert); i--) {
            arr[i + 1] = arr[i]; 
        }
        arr[i + 1] = elementToInsert;
        n++;
        
        printf("Array after insertion (size %d): ", n);
        for (i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
        return 0;
    }


   
