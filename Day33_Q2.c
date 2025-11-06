//Insert an element in a sorted array at the appropriate position.
#include <stdio.h>  
int main() {
    int n, i, j, element, position;
    printf("Enter the number of elements in the sorted array: ");
    scanf("%d", &n);
    int arr[n + 1]; 
    printf("Enter %d sorted elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to insert: ");
    scanf("%d", &element);

    position = n; 
    for (i = 0; i < n; i++) {
        if (arr[i] > element) {
            position = i;
            break;
        }
    }

    for (j = n; j > position; j--) {
        arr[j] = arr[j - 1];
    }
    arr[position] = element;

    printf("Array after insertion:\n");
    for (i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
    
}