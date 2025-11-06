//Delete an element from an array.
#include <stdio.h>  
int main() {
    int n, i, j, element, found = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to delete: ");
    scanf("%d", &element);

    for (i = 0; i < n; i++) {
        if (arr[i] == element) {
            found = 1;
            for (j = i; j < n - 1; j++) {
                arr[j] = arr[j + 1];
            }
            n--; 
            break;
        }
    }

    if (found) {
        printf("Array after deletion:\n");
        for (i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    } else {
        printf("Element %d not found in the array.\n", element);
    }
    return 0;
}